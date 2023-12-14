[@mel.module "react-native"] [@mel.scope "Clipboard"]
external getString: unit => Js.Promise.t(string) = "getString";

[@mel.module "react-native"] [@mel.scope "Clipboard"]
external setString: string => unit = "setString";
