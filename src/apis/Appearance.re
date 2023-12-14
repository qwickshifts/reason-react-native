type t = [ | `dark | `light];

[@mel.scope "Appearance"] [@mel.module "react-native"]
external getColorScheme: unit => Js.Null.t(t) = "getColorScheme";

[@mel.module "react-native"]
external useColorScheme: unit => Js.Null.t(t) = "useColorScheme";
