[@mel.module "react-native"] [@mel.scope "Settings"]
external clearWatch: int => unit = "clearWatch";

[@mel.module "react-native"] [@mel.scope "Settings"]
external get: string => 'a = "get";

[@mel.module "react-native"] [@mel.scope "Settings"]
external set: Js.t('a) => unit = "set";

[@mel.module "react-native"] [@mel.scope "Settings"]
external watchKeys: (array(string), unit => unit) => int = "watchKeys";
