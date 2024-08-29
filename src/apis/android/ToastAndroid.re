type duration;
type gravity;

[@mel.module "react-native"] [@mel.scope "ToastAndroid"]
external show: (string, duration) => unit = "show";
[@mel.module "react-native"] [@mel.scope "ToastAndroid"]
external showWithGravity: (string, duration, gravity) => unit =
  "showWithGravity";
[@mel.module "react-native"] [@mel.scope "ToastAndroid"]
external showWithGravityAndOffset:
  (string, duration, gravity, float, float) => unit =
  "showWithGravityAndOffset";
[@mel.module "react-native"] [@mel.scope "ToastAndroid"]
external short: duration = "SHORT";
[@mel.module "react-native"] [@mel.scope "ToastAndroid"]
external long: duration = "LONG";
[@mel.module "react-native"] [@mel.scope "ToastAndroid"]
external top: gravity = "TOP";
[@mel.module "react-native"] [@mel.scope "ToastAndroid"]
external bottom: gravity = "BOTTOM";
[@mel.module "react-native"] [@mel.scope "ToastAndroid"]
external center: gravity = "CENTER";
