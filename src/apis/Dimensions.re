type displayMetrics = {
  width: float,
  height: float,
  scale: float,
  fontScale: float,
};

type handler = {
  screen: displayMetrics,
  window: displayMetrics,
};

[@mel.module "react-native"] [@mel.scope "Dimensions"]
external get: [ | `window | `screen] => displayMetrics = "get";

type eventType = [ | `change];

[@mel.module "react-native"] [@mel.scope "Dimensions"]
external addEventListener: (eventType, handler => unit) => unit =
  "addEventListener";
[@mel.module "react-native"] [@mel.scope "Dimensions"]
external removeEventListener: (eventType, handler => unit) => unit =
  "removeEventListener";

[@mel.module "react-native"]
external useWindowDimensions: unit => displayMetrics = "useWindowDimensions";
