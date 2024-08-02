type nativeEventSubscription; // TODO: should come from elsewhere

type eventName = [ | `hardwareBackPress];

[@mel.scope "BackHandler"] [@mel.module "react-native"]
external addEventListener:
  (eventName, unit => option(bool)) => nativeEventSubscription =
  "addEventListener";

[@mel.scope "BackHandler"] [@mel.module "react-native"]
external exitApp: unit => unit = "exitApp";

[@mel.scope "BackHandler"] [@mel.module "react-native"]
external removeEventListener: (eventName, unit => option(bool)) => unit =
  "removeEventListener";
