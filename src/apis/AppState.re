type appStateStatus =
  | Inactive
  | Background
  | Active;

type appStateEvent =
  | Change(appStateStatus)
  | MemoryWarning
  | Blur
  | Focus;

type eventSubscription; //TODO: get this from elsewhere

[@mel.scope "AppState"] [@mel.module "react-native"]
external addEventListener:
  (appStateEvent, appStateStatus => unit) => eventSubscription =
  "addEventListener";

[@mel.module "react-native"] [@mel.scope "AppState"]
external currentState: option(appStateStatus) = "currentState";
