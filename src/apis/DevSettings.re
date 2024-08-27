[@mel.module "react-native"] [@mel.scope "DevSettings"]
external addMenuItem: (string, unit => 'a) => unit = "addMenuItem";

[@mel.module "react-native"] [@mel.scope "DevSettings"]
external reload: option(string) => unit = "reload";
