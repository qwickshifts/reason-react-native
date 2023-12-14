[@mel.scope "Vibration"] [@mel.module "react-native"]
external vibrateWithDuration: (int, ~repeat: bool=?, unit) => unit = "vibrate";

[@mel.scope "Vibration"] [@mel.module "react-native"]
external vibrateWithPattern: (array(int), ~repeat: bool=?, unit) => unit =
  "vibrate";

[@mel.scope "Vibration"] [@mel.module "react-native"]
external cancel: unit => unit = "cancel";
