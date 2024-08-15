[@mel.module "react-native"] [@mel.scope "Settings"]
external get: string => string = "get";

[@mel.module "react-native"] [@mel.scope "Settings"]
external set: Js.Dict.t(string) => unit = "set";

type watchToken;

[@mel.module "react-native"] [@mel.scope "Settings"]
external watchKeys: (list(string), unit => unit) => watchToken = "watchKeys";

[@mel.module "react-native"] [@mel.scope "Settings"]
external clearWatch: watchToken => unit = "clearWatch";
