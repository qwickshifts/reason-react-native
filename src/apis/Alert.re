type alertButtonStyle = [ | `default | `cancel | `destructive];

type alertType =
  | Default
  | PlainText
  | SecureText
  | LoginPassword;

type alertButton;
[@mel.obj]
external button:
  (
    ~text: string=?,
    ~onPress: option(string) => unit=?,
    ~isPreferred: bool=?,
    ~style: alertButtonStyle=?,
    unit
  ) =>
  alertButton;

type alertOptions = {
  cancelable: option(bool),
  userInterfaceStyle: option([ | `unspecified | `light | `dark]),
  onDismiss: option(unit => unit),
};

[@mel.module "react-native"] [@mel.scope "Alert"]
external alert:
  (
    ~title: string,
    ~message: string=?,
    ~buttons: array(alertButton)=?,
    ~options: alertOptions=?,
    unit
  ) =>
  unit =
  "alert";

[@mel.module "react-native"] [@mel.scope "Alert"]
external prompt:
  (
    ~title: string,
    ~message: string=?,
    ~callbackOrButtons: [@mel.unwrap] [
                          | `Callback(string => unit)
                          | `Buttons(array(alertButton))
                        ]
                          =?,
    ~_type: alertType=?,
    ~defaultValue: string=?,
    ~keyboardType: string=?,
    ~options: alertOptions=?,
    unit
  ) =>
  unit =
  "prompt";
