type alertButtonStyle =
  | Default
  | Cancel
  | Destructive;

type alertType =
  | Default
  | PlainText
  | SecureText
  | LoginPassword;

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

[@mel.module "react-native"] [@mel.scope "Alert"]
external alert:
  (
    ~title: string,
    ~message: option(string)=?,
    ~buttons: option(array(alertButton))=?,
    ~options: option(alertOptions)=?
  ) =>
  unit =
  "alert";

[@mel.module "react-native"] [@mel.scope "Alert"]
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
    ~_type: option(alertType)=?,
    ~defaultValue: option(string)=?,
    ~keyboardType: option(string)=?,
    ~options: option(alertOptions)=?
  ) =>
  unit =
  "prompt";
