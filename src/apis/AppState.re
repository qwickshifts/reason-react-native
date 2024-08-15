type t = [ | `inactive | `background | `active | `unknown | `extension];

type event = [ | `change | `memoryWarning | `blur | `focus];

[@mel.scope "AppState"] [@mel.module "react-native"]
external addEventListener: (event, t => unit) => EventSubscription.t =
  "addEventListener";

[@mel.module "react-native"] [@mel.scope "AppState"]
external currentState: t = "currentState";
