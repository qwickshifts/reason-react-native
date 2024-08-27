type scaledSize = {
  width: float,
  height: float,
  scale: float,
  fontScale: float,
};

type t = {
  window: scaledSize,
  screen: scaledSize,
};

[@mel.module "react-native"] [@mel.scope "Dimensions"]
external addEventListener:
  (~_type: [@mel.as "change"] _, ~handler: t => unit) => EventSubscription.t =
  "addEventListener";

[@mel.module "react-native"] [@mel.scope "Dimensions"]
external get: [ | `window | `screen] => scaledSize = "get";
