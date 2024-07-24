type remove = {. [@mel.meth] "remove": unit => unit};

[@mel.scope "BackHandler"] [@mel.module "react-native"]
external exitApp: unit => unit = "exitApp";

type eventType = [ | `backPress | `hardwareBackPress];

[@mel.scope "BackHandler"] [@mel.module "react-native"]
external addEventListener: (eventType, unit => bool) => remove =
  "addEventListener";

[@mel.scope "BackHandler"] [@mel.module "react-native"]
external removeEventListener: (eventType, unit => bool) => unit =
  "removeEventListener";
