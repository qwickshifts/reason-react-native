type extra;
[@mel.obj] external extra: (~key: string, ~value: 'a) => extra;

[@mel.scope "Linking"] [@mel.module "react-native"]
external openURL: string => Js.Promise.t(unit) = "openURL";

[@mel.scope "Linking"] [@mel.module "react-native"]
external canOpenURL: string => Js.Promise.t(bool) = "canOpenURL";

[@mel.scope "Linking"] [@mel.module "react-native"]
external getInitialURL: unit => Js.Promise.t(Js.Null.t(string)) =
  "getInitialURL";

[@mel.scope "Linking"] [@mel.module "react-native"]
external openSettings: unit => Js.Promise.t('a) = "openSettings";

// multiple externals
[@mel.scope "Linking"] [@mel.module "react-native"]
external sendIntent: string => unit = "sendIntent";

// multiple externals
[@mel.scope "Linking"] [@mel.module "react-native"]
external sendIntentWithExtras: (string, array(extra)) => unit = "sendIntent";

type url = {url: string};

type eventType = [ | `url];

[@mel.scope "Linking"] [@mel.module "react-native"]
external addEventListener: (eventType, url => unit) => unit =
  "addEventListener";

[@mel.scope "Linking"] [@mel.module "react-native"]
external removeEventListener: (eventType, url => unit) => unit =
  "removeEventListener";
