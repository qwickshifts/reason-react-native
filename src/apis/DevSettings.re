type handler = unit => unit;
type reason = string;
type title = string;

[@mel.scope "DevSettings"] [@mel.module "react-native"]
external addMenuItem: (title, handler) => unit = "addMenuItem";

[@mel.scope "DevSettings"] [@mel.module "react-native"]
external reload: unit => unit = "reload";

[@mel.scope "DevSettings"] [@mel.module "react-native"]
external reloadWithReason: reason => unit = "reload";
