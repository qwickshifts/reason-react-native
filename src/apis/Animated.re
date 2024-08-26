type animation;
type value;
type valueXY;

module Animation = {
  type t = animation;
  type endCallback = {finished: bool};
  [@mel.send.pipe: t]
  external start:
    (
      ~fromValue: float,
      ~onUpdate: float => unit,
      ~onEnd: Js.null(endCallback => unit),
      ~previousAnimation: Js.null(t),
      ~animatedValue: value
    ) =>
    unit =
    "start";

  [@mel.send] external stop: t => unit = "stop";
};

module Event = {
  type t;
};

module Value = {
  type t = value;
  [@deriving jsProperties]
  type interpolationConfig = {
    inputRange: array(float),
    outputRange: array(float),
    [@mel.optional]
    easing: option(float => float),
    [@mel.optional]
    extrapolate: option([ | `extend | `clamp | `identity]),
    [@mel.optional]
    extrapolateLeft: option([ | `extend | `clamp | `identity]),
    [@mel.optional]
    extrapolateRight: option([ | `extend | `clamp | `identity]),
  };

  [@deriving jsProperties]
  type payload = {value: float};

  [@deriving jsProperties]
  type endCallback = {finished: bool};

  [@mel.new] [@mel.module "react-native"]
  external make: float => t = "Animated.Value";

  [@mel.send.pipe: t] external setValue: float => unit = "setValue";

  [@mel.send.pipe: t] external setOffset: float => unit = "setOffset";

  [@mel.send] external flattenOffset: t => unit = "flattenOffset";

  [@mel.send] external extractOffset: t => unit = "extractOffset";

  [@mel.send.pipe: t]
  external addListener: (payload => unit) => string = "addListener";

  [@mel.send.pipe: t]
  external removeListener: string => unit = "removeListener";

  [@mel.send] external removeAllListeners: t => unit = "removeAllListeners";

  [@mel.send.pipe: t]
  external stopAnimation: (~callback: float => unit=?) => unit =
    "stopAnimation";

  [@mel.send.pipe: t]
  external resetAnimation: (~callback: float => unit=?) => unit =
    "resetAnimation";

  [@mel.send.pipe: t]
  external interpolate: interpolationConfig => unit = "interpolate";

  [@mel.send.pipe: t]
  external animate: (animation, endCallback => unit) => unit = "animate";
};

module ValueXY = {
  type t = valueXY;

  [@deriving jsProperties]
  type xy = {
    x: float,
    y: float,
  };

  [@deriving jsProperties]
  type leftTop = {
    left: Value.t,
    top: Value.t,
  };

  [@mel.new] [@mel.module "react-native"]
  external make: xy => t = "Animated.ValueXY";

  [@mel.send.pipe: t] external setValue: xy => unit = "setValue";

  [@mel.send.pipe: t] external setOffset: xy => unit = "setOffset";

  [@mel.send] external flattenOffset: t => unit = "flattenOffset";

  [@mel.send] external extractOffset: t => unit = "extractOffset";

  [@mel.send.pipe: t]
  external addListener: (xy => unit) => string = "addListener";

  [@mel.send.pipe: t]
  external removeListener: string => unit = "removeListener";

  [@mel.send] external removeAllListeners: t => unit = "removeAllListeners";

  [@mel.send.pipe: t]
  external stopAnimation: (~callback: xy => unit=?) => unit = "stopAnimation";

  [@mel.send.pipe: t]
  external resetAnimation: (~callback: xy => unit=?) => unit =
    "resetAnimation";

  [@mel.send.pipe: t] external getLayout: t => leftTop = "getLayout";

  [@mel.send.pipe: t]
  external getTranslateTransform: t => Transforms.t = "getTranslateTransform";
};

[@deriving jsProperties]
type decayConfig = {
  velocity: float,
  [@mel.optional]
  deceleration: option(float),
  [@mel.optional]
  isInteraction: option(bool),
  useNativeDriver: bool,
};
[@mel.module "react-native"] [@mel.scope "Animated"]
external decay: (Value.t, decayConfig) => Animation.t = "decay";

[@mel.module "react-native"] [@mel.scope "Animated"]
external decayXY: (ValueXY.t, decayConfig) => Animation.t = "decay";

[@deriving jsProperties]
type timingConfig = {
  [@mel.optional]
  duration: option(int),
  [@mel.optional]
  easing: option(Easing.t),
  [@mel.optional]
  delay: option(int),
  [@mel.optional]
  isInteraction: option(bool),
  useNativeDriver: bool,
};
[@mel.module "react-native"] [@mel.scope "Animated"]
external timing: (Value.t, timingConfig) => Animation.t = "timing";

[@mel.module "react-native"] [@mel.scope "Animated"]
external timingXY: (ValueXY.t, timingConfig) => Animation.t = "timing";

[@deriving jsProperties]
type springConfig = {
  [@mel.optional]
  friction: option(float),
  [@mel.optional]
  tension: option(float),
  [@mel.optional]
  speed: option(float),
  [@mel.optional]
  bounciness: option(float),
  [@mel.optional]
  stiffness: option(float),
  [@mel.optional]
  damping: option(float),
  [@mel.optional]
  mass: option(float),
  [@mel.optional]
  velocity: option(float),
  [@mel.optional]
  overshootClamping: option(bool),
  [@mel.optional]
  restDisplacementThreshold: option(float),
  [@mel.optional]
  restSpeedThreshold: option(float),
  [@mel.optional]
  delay: option(int),
  [@mel.optional]
  isInteraction: option(bool),
  useNativeDriver: bool,
};

[@mel.module "react-native"] [@mel.scope "Animated"]
external add: (Value.t, Value.t) => Value.t = "add";

[@mel.module "react-native"] [@mel.scope "Animated"]
external subtract: (Value.t, Value.t) => Value.t = "subtract";

[@mel.module "react-native"] [@mel.scope "Animated"]
external divide: (Value.t, Value.t) => Value.t = "divide";

[@mel.module "react-native"] [@mel.scope "Animated"]
external multiply: (Value.t, Value.t) => Value.t = "multiply";

[@mel.module "react-native"] [@mel.scope "Animated"]
external modulo: (Value.t, int) => Value.t = "modulo";

[@mel.module "react-native"] [@mel.scope "Animated"]
external diffClamp: (Value.t, ~min: float, ~max: float) => Value.t =
  "diffClamp";
let diffClamp = (~min, ~max, value) => diffClamp(value, ~min, ~max);

[@mel.module "react-native"] [@mel.scope "Animated"]
external delay: int => Animation.t = "delay";

[@mel.module "react-native"] [@mel.scope "Animated"]
external sequence: array(Animation.t) => Animation.t = "sequence";

[@deriving jsProperties]
type parallelConfig = {
  [@mel.optional]
  stopTogether: option(bool),
};
[@mel.module "react-native"] [@mel.scope "Animated"]
external parallel:
  (array(Animation.t), ~config: parallelConfig=?) => Animation.t =
  "parallel";
let parallel = (~config=?, animations) => parallel(animations, ~config?);

[@mel.module "react-native"] [@mel.scope "Animated"]
external stagger: (int, array(Animation.t)) => Animation.t = "stagger";

[@deriving jsProperties]
type loopConfig = {
  iterations: int,
  [@mel.optional]
  resetBeforeIteration: option(bool),
};
[@mel.module "react-native"] [@mel.scope "Animated"]
external loop: (array(Animation.t), ~config: loopConfig=?) => Animation.t =
  "loop";
let loop = (~config=?, animations) => loop(animations, ~config?);

// TODO: These (event, forkEvent, unforkEvent) are not feature complete but idk how to do it better
[@deriving jsProperties]
type eventConfig = {
  listener: unit => unit,
  useNativeDriver: bool,
};

[@mel.module "react-native"] [@mel.scope "Animated"]
external event: (array(Js.Json.t), ~config: eventConfig=?) => Event.t =
  "event";
let event = (~config=?, argMapping) => {
  let makeMapping = (key, value) =>
    Js.Dict.fromArray([|(key, Js.Json.string(value))|]) |> Js.Json.object_;
  let argMapping =
    argMapping |> Array.map(((key, value)) => makeMapping(key, value));
  event(argMapping, ~config?);
};

[@mel.module "react-native"] [@mel.scope "Animated"]
external forkEvent: (Event.t, unit => unit) => Event.t = "forkEvent";

[@mel.module "react-native"] [@mel.scope "Animated"]
external unforkEvent: (Event.t, unit => unit) => unit = "unforkEvent";

[@deriving jsProperties]
type startCallback = {finished: bool};
[@mel.module "react-native"] [@mel.scope "Animated"]
external start: (~callback: startCallback => unit=?, unit) => unit = "start";

[@mel.module "react-native"] [@mel.scope "Animated"]
external stop: unit => unit = "stop";

[@mel.module "react-native"] [@mel.scope "Animated"]
external reset: unit => unit = "reset";
