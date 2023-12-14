module Animation = {
  type t;
  type endResult = {finished: bool};
  type endCallback = endResult => unit;
  [@mel.send]
  external start: (t, ~endCallback: endCallback=?, unit) => unit = "start";

  [@mel.send] external stop: t => unit = "stop";
  [@mel.send] external reset: t => unit = "reset";
};

module type Value = {
  type t;
  type rawValue;
  type addListenerCallback;
};

type calculated;

type regular;

type value('a);

module ValueAnimations = (Val: Value) => {
  module Decay = {
    type config;

    [@mel.obj]
    external config:
      (
        ~velocity: Val.rawValue,
        ~deceleration: float=?,
        ~isInteraction: bool=?,
        ~useNativeDriver: bool,
        ~onComplete: Animation.endCallback=?,
        ~iterations: int=?,
        unit
      ) =>
      config;

    [@mel.module "react-native"] [@mel.scope "Animated"]
    external decay: (Val.t, config) => Animation.t = "decay";
  };

  module Spring = {
    type toValue;
    external fromRawValue: Val.rawValue => toValue = "%identity";
    external fromAnimatedValue: Val.t => toValue = "%identity";

    type config;

    [@mel.obj]
    external config:
      (
        ~toValue: toValue,
        ~restDisplacementThreshold: float=?,
        ~overshootClamping: bool=?,
        ~restSpeedThreshold: float=?,
        ~velocity: Val.rawValue=?,
        ~bounciness: float=?,
        ~speed: float=?,
        ~tension: float=?,
        ~friction: float=?,
        ~stiffness: float=?,
        ~mass: float=?,
        ~damping: float=?,
        ~delay: float=?,
        ~isInteraction: bool=?,
        ~useNativeDriver: bool,
        ~onComplete: Animation.endCallback=?,
        ~iterations: int=?,
        unit
      ) =>
      config;

    [@mel.module "react-native"] [@mel.scope "Animated"]
    external spring: (Val.t, config) => Animation.t = "spring";
  };

  module Timing = {
    type toValue;

    external fromRawValue: Val.rawValue => toValue = "%identity";
    external fromAnimatedValue: Val.t => toValue = "%identity";

    type config;

    [@mel.obj]
    external config:
      (
        ~toValue: toValue,
        ~easing: Easing.t=?,
        ~duration: float=?,
        ~delay: float=?,
        ~isInteraction: bool=?,
        ~useNativeDriver: bool,
        ~onComplete: Animation.endCallback=?,
        ~iterations: int=?,
        unit
      ) =>
      config;

    [@mel.module "react-native"] [@mel.scope "Animated"]
    external timing: (Val.t, config) => Animation.t = "timing";
  };
};

module Interpolation = {
  type t = value(calculated);
  type outputRange;
  external fromStringArray: array(string) => outputRange = "%identity";
  external fromFloatArray: array(float) => outputRange = "%identity";

  type extrapolate = [ | `extend | `clamp | `identity];

  type config;
  [@mel.obj]
  external config:
    (
      ~inputRange: array(float),
      ~outputRange: outputRange,
      ~easing: Easing.t=?,
      ~extrapolate: extrapolate=?,
      ~extrapolateLeft: extrapolate=?,
      ~extrapolateRight: extrapolate=?,
      unit
    ) =>
    config;
  [@mel.send] external interpolate: (value('a), config) => t = "interpolate";
};

module ValueOperations = {
  [@mel.module "react-native"] [@mel.scope "Animated"]
  external add: (value('a), value('b)) => value(calculated) = "add";
  [@mel.module "react-native"] [@mel.scope "Animated"]
  external divide: (value('a), value('b)) => value(calculated) = "divide";
  [@mel.module "react-native"] [@mel.scope "Animated"]
  external multiply: (value('a), value('b)) => value(calculated) =
    "multiply";
  [@mel.module "react-native"] [@mel.scope "Animated"]
  external modulo: (value('a), float) => value(calculated) = "modulo";
  [@mel.module "react-native"] [@mel.scope "Animated"]
  external subtract: (value('a), value('b)) => value(calculated) =
    "subtract";
  [@mel.module "react-native"] [@mel.scope "Animated"]
  external diffClamp: (value('a), float, float) => value(calculated) =
    "diffClamp";
  let interpolate = Interpolation.interpolate;
};

module ValueMethods = (Val: Value) => {
  type t = Val.t;
  type rawValue = Val.rawValue;
  type addListenerCallback = Val.addListenerCallback;
  type callback = rawValue => unit;

  [@mel.send] external setValue: (t, rawValue) => unit = "setValue";
  [@mel.send] external setOffset: (t, rawValue) => unit = "setOffset";
  [@mel.send] external flattenOffset: t => unit = "flattenOffset";
  [@mel.send] external extractOffset: t => unit = "extractOffset";
  [@mel.send]
  external addListener: (t, addListenerCallback) => string = "addListener";
  [@mel.send] external removeListener: (t, string) => unit = "removeListener";
  [@mel.send] external removeAllListeners: t => unit = "removeAllListeners";

  [@mel.send]
  external resetAnimation: (t, ~callback: callback=?, unit) => unit =
    "resetAnimation";

  [@mel.send]
  external stopAnimation: (t, ~callback: callback=?, unit) => unit =
    "stopAnimation";

  include ValueAnimations(Val);
};

module Value = {
  include ValueMethods({
    type t = value(regular);
    type rawValue = float;
    type addListenerCallback = {. "value": rawValue} => unit;
  });

  [@mel.new] [@mel.scope "Animated"] [@mel.module "react-native"]
  external create: float => t = "Value";

  include ValueOperations;
};

module ValueXY = {
  include ValueMethods({
    type t = {
      .
      "x": Value.t,
      "y": Value.t,
    };
    type rawValue = {
      .
      "x": float,
      "y": float,
    };
    type addListenerCallback = rawValue => unit;
  });

  [@deprecated "Please use xyValue instead"] [@mel.obj]
  external jsValue: (~x: float, ~y: float) => rawValue;
  [@mel.obj] external xyValue: (~x: float, ~y: float) => rawValue;

  type layout = {
    left: Value.t,
    top: Value.t,
  };
  [@mel.new] [@mel.scope "Animated"] [@mel.module "react-native"]
  external create: rawValue => t = "ValueXY";
  [@mel.send] external getLayout: t => layout = "getLayout";
  [@mel.send]
  external getTranslateTransform: t => array(Style.transform) =
    "getTranslateTransform";
};

[@mel.module "react-native"] [@mel.scope "Animated"]
external delay: float => Animation.t = "delay";

[@mel.module "react-native"] [@mel.scope "Animated"]
external sequence: array(Animation.t) => Animation.t = "sequence";

type parallelPayload = {stopTogether: bool};
[@mel.module "react-native"] [@mel.scope "Animated"]
external parallel: (array(Animation.t), parallelPayload) => Animation.t =
  "parallel";

[@mel.module "react-native"] [@mel.scope "Animated"]
external stagger: (float, array(Animation.t)) => Animation.t = "stagger";

type loopConfig;

[@mel.obj] external loopConfig: (~iterations: int) => loopConfig;

// multiple externals
[@mel.module "react-native"] [@mel.scope "Animated"]
external loop: Animation.t => Animation.t = "loop";

// multiple externals
[@mel.module "react-native"] [@mel.scope "Animated"]
external loopWithConfig: (Animation.t, loopConfig) => Animation.t = "loop";

type eventOptions('a);
[@mel.obj]
external eventOptions:
  (~listener: 'a=?, ~useNativeDriver: bool, unit) => eventOptions('a);

// multiple externals
[@mel.module "react-native"] [@mel.scope "Animated"]
external event1: (array('mapping), eventOptions('a)) => 'a = "event";

// multiple externals
[@mel.module "react-native"] [@mel.scope "Animated"]
external event2: (('mapping1, 'mapping2), eventOptions('a)) => 'a = "event";

[@mel.module "react-native"] [@mel.scope "Animated"]
external createAnimatedComponent:
  React.component('props) => React.component('props) =
  "createAnimatedComponent";

let timing = Value.Timing.timing;

let spring = Value.Spring.spring;

let decay = Value.Decay.decay;

let start = Animation.start;

let stop = Animation.stop;

let reset = Animation.reset;

module StyleProp = {
  // methods to allow use of Animated values with Style props

  // these methods should not be used to get the current value

  // for angle, Color.t, and size expressed as percentage,
  // interpolated values are needed where the outputRange is
  // an appropriate array of strings

  external float: value('a) => float = "%identity";
  external angle: value(calculated) => Style.angle = "%identity";
  external size: value('a) => Style.size = "%identity";
  external margin: value('a) => Style.margin = "%identity";
  external color: value(calculated) => Color.t = "%identity";

  // UNSAFE: allows to pass animated values everywhere,
  // use of more precise methods above is recommended
  external unsafeAny: value('a) => 'b = "%identity";
};

module FlatList = {
  include FlatList;

  let make = FlatList.make;
};

module Image = {
  include Image;

  let make = make;
};

module ScrollView = {
  include ScrollView;

  let make = make;
};

module SectionList = {
  include SectionList;

  let make = SectionList.make;
};

module Text = {
  include Text;

  let make = make;
};

module View = {
  include View;

  let make = make;
};
