type error;

[@mel.scope "AsyncStorage"] [@mel.module "react-native"]
external getItem: string => Js.Promise.t(Js.Null.t(string)) = "getItem";

[@mel.scope "AsyncStorage"] [@mel.module "react-native"]
external setItem: (string, string) => Js.Promise.t(unit) = "setItem";

[@mel.scope "AsyncStorage"] [@mel.module "react-native"]
external removeItem: string => Js.Promise.t(unit) = "removeItem";

[@mel.scope "AsyncStorage"] [@mel.module "react-native"]
external mergeItem: (string, string) => Js.Promise.t(unit) = "mergeItem";

[@mel.scope "AsyncStorage"] [@mel.module "react-native"]
external clear: unit => Js.Promise.t(unit) = "clear";

[@mel.scope "AsyncStorage"] [@mel.module "react-native"]
external getAllKeys: unit => Js.Promise.t(Js.Null.t(array(string))) =
  "getAllKeys";

[@mel.scope "AsyncStorage"] [@mel.module "react-native"]
external flushGetRequests: unit => unit = "flushGetRequests";

[@mel.scope "AsyncStorage"] [@mel.module "react-native"]
external multiGet:
  array(string) => Js.Promise.t(Js.Null.t(array(array(string)))) =
  "multiGet";

[@mel.scope "AsyncStorage"] [@mel.module "react-native"]
external multiSet: array((string, string)) => Js.Promise.t(unit) =
  "multiSet";

[@mel.scope "AsyncStorage"] [@mel.module "react-native"]
external multiRemove: array(string) => Js.Promise.t(unit) = "multiRemove";

[@mel.scope "AsyncStorage"] [@mel.module "react-native"]
external multiMerge: array(array(string)) => Js.Promise.t(unit) =
  "multiMerge";
