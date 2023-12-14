type os = pri string;

[@mel.module "react-native"] [@mel.scope "Platform"] external os: os = "OS";

[@mel.inline "ios"]
let ios: os;

[@mel.inline "android"]
let android: os;

// react-native-web
[@mel.inline "web"]
let web: os;

external unsafe: string => os = "%identity";
