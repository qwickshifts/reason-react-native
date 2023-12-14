type animationType = [
  | `spring
  | `linear
  | `easeInEaseOut
  | `easeIn
  | `easeOut
  | `keyboard
];

type property = [ | `opacity | `scaleX | `scaleY | `scaleXY];

type animationConfig;
[@mel.obj]
external animationConfig:
  (
    ~duration: float=?,
    ~delay: float=?,
    ~springDamping: float=?,
    ~initialVelocity: float=?,
    ~_type: animationType=?,
    ~property: property=?,
    unit
  ) =>
  animationConfig;

type layoutAnimationConfig;
[@mel.obj]
external layoutAnimationConfig:
  (
    ~duration: float,
    ~create: animationConfig=?,
    ~update: animationConfig=?,
    ~delete: animationConfig=?,
    unit
  ) =>
  layoutAnimationConfig;

// multiple externals
[@mel.module "react-native"] [@mel.scope "LayoutAnimation"]
external configureNext: layoutAnimationConfig => unit = "configureNext";

// multiple externals
[@mel.module "react-native"] [@mel.scope "LayoutAnimation"]
external configureNextWithEndCallback:
  (layoutAnimationConfig, unit => unit) => unit =
  "configureNext";

[@mel.module "react-native"] [@mel.scope "LayoutAnimation"]
external create:
  (~duration: float, ~_type: animationType, ~property: property) =>
  layoutAnimationConfig =
  "create";

[@mel.module "react-native"] [@mel.scope "LayoutAnimation"]
external easeInEaseOut: unit => unit = "easeInEaseOut";

[@mel.module "react-native"] [@mel.scope "LayoutAnimation"]
external linear: unit => unit = "linear";

[@mel.module "react-native"] [@mel.scope "LayoutAnimation"]
external spring: unit => unit = "spring";

module Presets = {
  [@mel.module "react-native"] [@mel.scope ("LayoutAnimation", "Presets")]
  external easeInEaseOut: layoutAnimationConfig = "easeInEaseOut";

  [@mel.module "react-native"] [@mel.scope ("LayoutAnimation", "Presets")]
  external linear: layoutAnimationConfig = "linear";

  [@mel.module "react-native"] [@mel.scope ("LayoutAnimation", "Presets")]
  external spring: layoutAnimationConfig = "spring";
};
