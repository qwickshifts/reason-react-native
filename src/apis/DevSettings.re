type handler('a) = unit => 'a;
type reason = string;
type title = string;

[@mel.scope "DevSettings"] [@mel.module "react-native"]
external addMenuItem: (title, handler('a)) => unit = "addMenuItem";

[@mel.scope "DevSettings"] [@mel.module "react-native"]
external reload: option(reason) => unit = "reload";
