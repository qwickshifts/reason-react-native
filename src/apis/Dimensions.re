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

type emitterSubscription; // TODO: maybe comes from elsewhere

[@mel.scope "Dimensions"] [@mel.module "react-native"]
external addEventListener:
  ([ | `change], dimensionsValue => unit) => emitterSubscription =
  "addEventListener";

[@mel.scope "Dimensions"] [@mel.module "react-native"]
external get: [ | `window | `screen] => scaledSize = "get";
