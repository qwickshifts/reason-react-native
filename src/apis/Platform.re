type os = string;

[@mel.module "react-native"] [@mel.scope "Platform"] external os: os = "OS";

[@mel.inline]
let ios = "ios";

[@mel.inline]
let android = "android";

// react-native-web
[@mel.inline]
let web = "web";

external unsafe: string => os = "%identity";
