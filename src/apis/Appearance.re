type t = [ | `dark | `light];

[@mel.scope "Appearance"] [@mel.module "react-native"]
external getColorScheme: unit => Js.Null.t(t) = "getColorScheme";

[@mel.scope "Appearance"] [@mel.module "react-native"]
external setColorScheme: Js.Null.t(t) => unit = "setColorScheme";

[@mel.scope "Appearance"] [@mel.module "react-native"]
external addChangeListener:
  (~listener: (~preferences: Js.Null.t(t)) => unit) => unit =
  "addChangeListener";

[@mel.module "react-native"]
external useColorScheme: unit => Js.Null.t(t) = "useColorScheme";
