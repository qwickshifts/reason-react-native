[@mel.module "react-native"] [@mel.scope "Vibration"]
external cancel: unit => unit = "cancel";

[@mel.module "react-native"] [@mel.scope "Vibration"]
external vibrate: (~pattern: array(int)=?, ~repeat: bool=?, unit) => unit =
  "vibrate";
