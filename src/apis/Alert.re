type buttonStyle = [ | `default | `cancel | `destructive];

[@deriving jsProperties]
type button = {
  [@mel.optional]
  text: option(string),
  [@mel.optional]
  onPress: option(option(string) => unit),
  [@mel.optional]
  isPreferred: option(bool),
  [@mel.optional]
  style: option(buttonStyle),
};

[@deriving jsProperties]
type options = {
  [@mel.optional]
  cancelable: option(bool),
  [@mel.optional]
  userInterfaceStyle: option([ | `light | `dark]),
  [@mel.optional]
  onDismiss: option(unit => unit),
};

[@mel.module "react-native"] [@mel.scope "Alert"]
external alert:
  (
    ~title: string,
    ~message: string=?,
    ~buttons: array(button)=?,
    ~options: options=?
  ) =>
  unit =
  "alert";
let alert = (~message=?, ~buttons=?, ~options=?, title) =>
  alert(~title, ~message?, ~buttons?, ~options?);

[@mel.module "react-native"] [@mel.scope "Alert"]
external prompt:
  (
    ~title: string,
    ~message: string=?,
    ~callbackOrButtons: [@mel.unwrap] [
                          | `callback(string => unit)
                          | `buttons(array(button))
                        ]
                          =?,
    ~_type: [@mel.string] [
              | `default
              | [@mel.as "plain-text"] `plainText
              | [@mel.as "secure-text"] `secureText
              | [@mes.as "login-password"] `loginPassword
            ]
              =?,
    ~defaultValue: string=?,
    ~keyboardType: string=?
  ) =>
  unit =
  "prompt";
let prompt =
    (
      ~message=?,
      ~callbackOrButtons=?,
      ~_type=?,
      ~defaultValue=?,
      ~keyboardType=?,
      title,
    ) =>
  prompt(
    ~title,
    ~message?,
    ~callbackOrButtons?,
    ~_type?,
    ~defaultValue?,
    ~keyboardType?,
  );
