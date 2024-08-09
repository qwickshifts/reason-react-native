type appStateStatus =
  | Inactive
  | Background
  | Active;

type appStateEvent =
  | Change(appStateStatus)
  | MemoryWarning
  | Blur
  | Focus;

[@mel.scope "AppState"] [@mel.module "react-native"]
external addEventListener:
  (appStateEvent, appStateStatus => unit) => EventSubscription.t =
  "addEventListener";

[@mel.module "react-native"] [@mel.scope "AppState"]
external currentState: option(appStateStatus) = "currentState";
