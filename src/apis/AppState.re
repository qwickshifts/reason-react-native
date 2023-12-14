type t = [ | `active | `background | `inactive | `unknown | `extension];

[@mel.scope "AppState"] [@mel.module "react-native"]
external currentState: t = "currentState";

[@mel.scope "AppState"] [@mel.module "react-native"]
external addEventListener:
  (
  [@mel.string]
  [
    | `change(t => unit)
    | `focus(unit => unit)
    | `blur(unit => unit)
    | `memoryWarning(unit => unit)
  ]
  ) =>
  unit =
  "addEventListener";

[@mel.scope "AppState"] [@mel.module "react-native"]
external removeEventListener:
  (
  [@mel.string]
  [
    | `change(t => unit)
    | `focus(unit => unit)
    | `blur(unit => unit)
    | `memoryWarning(unit => unit)
  ]
  ) =>
  unit =
  "removeEventListener";
