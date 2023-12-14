type screenRect = {
  screenX: float,
  screenY: float,
  width: float,
  height: float,
};

type eventType = [
  | `keyboardWillShow
  | `keyboardDidShow
  | `keyboardWillHide
  | `keyboardDidHide
  | `keyboardWillChangeFrame
  | `keyboardDidChangeFrame
];

type keyboardEvent = {
  duration: float,
  easing: LayoutAnimation.animationType,
  endCoordinates: screenRect,
  startCoordinates: screenRect,
  isEventFromThisApp: bool,
};

type listener = keyboardEvent => unit;

[@mel.module "react-native"] [@mel.scope "Keyboard"]
external addListener: (eventType, listener) => EventSubscription.t =
  "addListener";

[@mel.module "react-native"] [@mel.scope "Keyboard"]
external removeAllListeners: eventType => unit = "removeAllListeners";

[@mel.module "react-native"] [@mel.scope "Keyboard"]
external removeListener: (eventType, listener) => unit = "removeListener";

[@mel.module "react-native"] [@mel.scope "Keyboard"]
external dismiss: unit => unit = "dismiss";
