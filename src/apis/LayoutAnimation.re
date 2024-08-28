type animationType = [
  | `spring
  | `linear
  | `easeInEaseOut
  | `easeIn
  | `easeOut
  | `keyboard
];

type animationProp = [ | `opacity | `scaleX | `scaleY | `scaleXY];

[@deriving jsProperties]
type animation = {
  [@mel.optional]
  duration: option(float),
  [@mel.optional]
  delay: option(float),
  [@mel.optional]
  springDamping: option(float),
  [@mel.optional]
  initialVelocity: option(float),
  [@mel.optional]
  _type: option(animationType),
  [@mel.optional]
  property: option(animationProp),
};

[@deriving jsProperties]
type config = {
  duration: float,
  [@mel.optional]
  create: option(animation),
  [@mel.optional]
  update: option(animation),
  [@mel.optional]
  delete: option(animation),
};

[@mel.module "react-native"] [@mel.scope "LayoutAnimation"]
external configureNext:
  (
    ~config: config,
    ~onAnimationDidEnd: unit => unit=?,
    ~onAnimationDidFail: unit => unit=?
  ) =>
  unit =
  "configureNext";
let configureNext = (~onAnimationDidEnd=?, ~onAnimationDidFail=?, config) =>
  configureNext(~onAnimationDidEnd?, ~onAnimationDidFail?, ~config);

[@mel.module "react-native"] [@mel.scope "LayoutAnimation"]
external create: (float, animationType, animationProp) => config = "create";

module Presets = {
  let easeInEaseOut = create(300., `easeInEaseOut, `opacity);

  let linear = create(500., `linear, `opacity);

  let spring =
    config(
      ~duration=700.,
      ~create=animation(~_type=`linear, ~property=`opacity, ()),
      ~update=animation(~_type=`spring, ~springDamping=0.4, ()),
      ~delete=animation(~_type=`linear, ~property=`opacity, ()),
      (),
    );
};
