type alertButtonStyle = [ | `default | `cancel | `destructive];
type alertType = [ | `default | `plainText | `secureText | `loginPassword];

type alertButton = {
  text: string,
  onPress: unit => unit,
  style: alertButtonStyle,
  isPreferred: option(bool),
};

type alertOptions = {
  cancelable: option(bool),
  userInterfaceStyle: option(string),
  onDismiss: option(unit => unit),
};

[@mel.obj]
external alertButton:
  (
    ~text: string,
    ~onPress: unit => unit,
    ~style: alertButtonStyle,
    ~isPreferred: option(bool)=?
  ) =>
  alertButton;

[@mel.obj]
external alertOptions:
  (
    ~cancelable: option(bool)=?,
    ~userInterfaceStyle: option(string)=?,
    ~onDismiss: option(unit => unit)=?
  ) =>
  alertOptions;

[@mel.scope "Alert"] [@mel.module "react-native"]
external alert:
  (
    ~title: string,
    ~message: option(string)=?,
    ~buttons: option(array(alertButton))=?,
    ~options: option(alertOptions)=?
  ) =>
  unit =
  "alert";

[@mel.scope "Alert"] [@mel.module "react-native"]
external prompt:
  (
    ~title: string,
    ~message: option(string)=?,
    ~callbackOrButtons: [@mel.unwrap] [
                          | `callback(string => unit)
                          | `buttons(array(alertButton))
                        ]
                          =?,
    ~type_: alertType=?,
    ~defaultValue: option(string)=?,
    ~keyboardType: option(string)=?,
    ~options: option(alertOptions)=?
  ) =>
  unit =
  "prompt";
