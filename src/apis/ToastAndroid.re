type message = string;
type duration;
type gravity;

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

[@mel.module "react-native"] [@mel.scope "ToastAndroid"]
external show: (message, duration) => unit = "show";

[@mel.module "react-native"] [@mel.scope "ToastAndroid"]
external showWithGravity: (message, duration, gravity) => unit =
  "showWithGravity";

[@mel.module "react-native"] [@mel.scope "ToastAndroid"]
external showWithGravityAndOffset:
  (message, duration, gravity, ~xOffset: float, ~yOffset: float) => unit =
  "showWithGravityAndOffset";
