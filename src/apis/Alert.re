type alertButtonStyle = [ | `default | `cancel | `destructive];

type alertButton = {
  text: option(string),
  onPress: option(option(string) => unit),
  isPreferred: option(bool),
  style: option(alertButtonStyle),
};

type alertOptions = {
  cancelable: option(bool),
  userInterfaceStyle: option([ | `unspecified | `light | `dark]),
  onDismiss: option(unit => unit),
};

type alertType = [ | `default | `plainText | `secureText | `loginPassword];

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
    ~callbackOrButtons: option(
                          [
                            | `Callback(string => unit)
                            | `Buttons(array(alertButton))
                          ],
                        )
                          =?,
    ~type_: option(alertType)=?,
    ~defaultValue: option(string)=?,
    ~keyboardType: option(string)=?,
    ~options: option(alertOptions)=?
  ) =>
  unit =
  "prompt";
