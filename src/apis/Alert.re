type options;

[@mel.obj]
external options:
  (~cancelable: bool=?, ~onDismiss: unit => unit=?, unit) => options;

type button;

type style = [ | `default | `cancel | `destructive];

[@mel.obj]
external button:
  (~text: string=?, ~onPress: unit => unit=?, ~style: style=?, unit) => button;

[@mel.scope "Alert"] [@mel.module "react-native"]
external alert:
  (
    ~title: string,
    ~message: string=?,
    ~buttons: array(button)=?,
    ~options: options=?,
    unit
  ) =>
  unit =
  "alert";

[@mel.scope "Alert"] [@mel.module "react-native"]
external prompt:
  (
    ~title: string,
    ~message: string=?,
    ~callbackOrButtons: [@mel.unwrap] [
                          | `callback(string => unit)
                          | `buttons(array(button))
                        ]
                          =?,
    ~type_: [@mel.string] [
              | `default
              | [@mel.as "plain-text"] `plainText
              | [@mel.as "secure-text"] `secureText
              | [@mel.as "login-password"] `loginPassword
            ]
              =?,
    ~defaultValue: string=?,
    ~keyboardType: string=?,
    unit
  ) =>
  unit =
  "prompt";
