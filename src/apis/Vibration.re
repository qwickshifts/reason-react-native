[@mel.scope "Vibration"] [@mel.module "react-native"]
external vibrate:
  (
    ~pattern: [@mel.unwrap] [ | `Duration(int) | `Pattern(array(int))]=?,
    ~repeat: bool=?
  ) =>
  unit =
  "vibrate";

[@mel.scope "Vibration"] [@mel.module "react-native"]
external cancel: unit => unit = "cancel";
