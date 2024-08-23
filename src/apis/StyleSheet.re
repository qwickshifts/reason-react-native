[@mel.module "react-native"] [@mel.scope "StyleSheet"]
external compose: (Style.t, Style.t) => Style.t = "compose";

[@mel.module "react-native"] [@mel.scope "StyleSheet"]
external create: Js.t('a) => Js.t('a) = "create";

[@mel.module "react-native"] [@mel.scope "StyleSheet"]
external flatten: array(Style.t) => Style.t = "flatten";

[@mel.module "react-native"] [@mel.scope "StyleSheet"]
external absoluteFill: Style.t = "absoluteFill";

[@mel.module "react-native"] [@mel.scope "StyleSheet"]
external hairlineWidth: Style.size = "hairlineWidth";
