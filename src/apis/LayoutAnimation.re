type layoutAnimationType = [
  | `spring
  | `linear
  | `easeInEaseOut
  | `easeIn
  | `easeOut
  | `keyboard
];

type layoutAnimationProperty = [ | `opacity | `scaleX | `scaleY | `scaleXY];

type layoutAnimationAnimationConfig = {
  duration: option(int),
  delay: option(int),
  springDamping: option(float),
  initialVelocity: option(int),
  type_: option(layoutAnimationType),
  property: option(layoutAnimationProperty),
};

type layoutAnimationConfig = {
  duration: int,
  create: option(layoutAnimationAnimationConfig),
  update: option(layoutAnimationAnimationConfig),
  delete: option(layoutAnimationAnimationConfig),
};

[@mel.module "react-native"] [@mel.scope "LayoutAnimation"]
external configureNext:
  (
    layoutAnimationConfig,
    ~onAnimationDidEnd: option(unit => unit),
    ~onAnimationDidFail: option(unit => unit)
  ) =>
  unit =
  "configureNext";

[@mel.module "react-native"] [@mel.scope "LayoutAnimation"]
external create:
  (int, layoutAnimationType, layoutAnimationProperty) => layoutAnimationConfig =
  "create";

module Presets = {
  let easeInEaseOut = create(300, `easeInEaseOut, `opacity);
  let linear = create(500, `linear, `opacity);
  let spring = {
    duration: 700,
    create:
      Some({
        duration: None,
        delay: None,
        springDamping: None,
        initialVelocity: None,
        type_: Some(`linear),
        property: Some(`opacity),
      }),
    update:
      Some({
        duration: None,
        delay: None,
        springDamping: Some(0.4),
        initialVelocity: None,
        type_: Some(`spring),
        property: None,
      }),
    delete:
      Some({
        duration: None,
        delay: None,
        springDamping: None,
        initialVelocity: None,
        type_: Some(`linear),
        property: Some(`opacity),
      }),
  };
};
