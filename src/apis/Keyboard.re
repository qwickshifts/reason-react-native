type keyboardMetrics = {
  screenX: float,
  screenY: float,
  width: float,
  height: float,
};

type eventName = [
  | `keyboardWillShow
  | `keyboardDidShow
  | `keyboardWillHide
  | `keyboardDidHide
  | `keyboardWillChangeFrame
  | `keyboardDidChangeFrame
];

type keyboardEventEasing = [
  | `easeIn
  | `easeInEaseOut
  | `easeOut
  | `linear
  | `keyboard
];

type keyboardEvent = {
  duration: float,
  easing: keyboardEventEasing,
  endCoordinates: keyboardMetrics,
  startCoordinates: keyboardMetrics,
  isEventFromThisApp: bool,
};

type listener = keyboardEvent => unit;

type eventSubscription; // TODO: get this from elsewhere

[@mel.module "react-native"] [@mel.scope "Keyboard"]
external addListener: (eventName, listener) => eventSubscription =
  "addListener";

[@mel.module "react-native"] [@mel.scope "Keyboard"]
external dismiss: unit => unit = "dismiss";

[@mel.module "react-native"] [@mel.scope "Keyboard"]
external scheduleLayoutAnimation: unit => unit = "scheduleLayoutAnimation";

[@mel.module "react-native"] [@mel.scope "Keyboard"]
external isVisible: unit => bool = "isVisible";

[@mel.module "react-native"] [@mel.scope "Keyboard"]
external metrics: unit => keyboardMetrics = "metrics";
