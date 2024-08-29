[@mel.module "react-native"] [@mel.scope "BackHandler"]
external addEventListener:
  ([ | `backPress | `hardwareBackPress], unit => option(bool)) =>
  NativeEventSubscription.t =
  "addEventListener";

[@mel.module "react-native"] [@mel.scope "BackHandler"]
external exitApp: unit => unit = "exitApp";

[@mel.module "react-native"] [@mel.scope "BackHandler"]
external removeEventListener:
  ([ | `backPress | `hardwareBackPress], unit => option(bool)) => unit =
  "removeEventListener";
