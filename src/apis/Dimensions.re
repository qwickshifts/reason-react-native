type scaledSize = {
  width: float,
  height: float,
  scale: float,
  fontScale: float,
};

type dimensionsValue = {
  window: scaledSize,
  screen: scaledSize,
};

[@mel.scope "Dimensions"] [@mel.module "react-native"]
external addEventListener:
  ([ | `change], dimensionsValue => unit) => EventSubscription.t =
  "addEventListener";

[@mel.scope "Dimensions"] [@mel.module "react-native"]
external get: [ | `window | `screen] => scaledSize = "get";
