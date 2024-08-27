type t = [ | `active | `background | `inactive];
type event = [ | `change | `memoryWarning | `focus | `blur];
[@mel.module "react-native"] [@mel.scope "AppState"]
external addEventListener: (event, t => unit) => unit = "addEventListener";

[@mel.module "react-native"] [@mel.scope "AppState"]
external currentState: t = "currentState";
