type event = [
  | `keyboardWillShow
  | `keyboardDidShow
  | `keyboardWillHide
  | `keyboardDidHide
  | `keyboardWillChangeFrame
  | `keyboardDidChangeFrame
];

type metrics = {
  screenX: float,
  screenY: float,
  width: float,
  height: float,
};

[@mel.module "react-native"] [@mel.scope "Keyboard"]
external addListener: (event, event => unit) => EventSubscription.t =
  "addListener";

[@mel.module "react-native"] [@mel.scope "Keyboard"]
external dismiss: unit => unit = "dismiss";

[@mel.module "react-native"] [@mel.scope "Keyboard"]
external scheduleLayoutAnimation: event => unit = "scheduleLayoutAnimation";

[@mel.module "react-native"] [@mel.scope "Keyboard"]
external isVisible: unit => bool = "isVisible";

[@mel.module "react-native"] [@mel.scope "Keyboard"]
external metrics: unit => option(metrics) = "metrics";
