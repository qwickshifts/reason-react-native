[@deriving jsProperties]
type options = {
  [@mel.optional]
  title: option(string),
  [@mel.optional]
  message: option(string),
  options: array(string),
  [@mel.optional]
  destructiveButtonIndex: option(array(int)),
  [@mel.optional]
  cancelButtonIndex: option(int),
  [@mel.optional]
  anchor: option(float),
  [@mel.optional]
  tintColor: option(Color.t),
  [@mel.optional]
  cancelButtonTintColor: option(Color.t),
  [@mel.optional]
  userInterfaceStyle: option(string),
  [@mel.optional]
  disabledButtonIndices: option(array(int)),
};

[@deriving jsProperties]
type shareOptions = {
  [@mel.optional]
  url: option(string),
  [@mel.optional]
  message: option(string),
  [@mel.optional]
  subject: option(string),
  [@mel.optional]
  excludedActivityTypes: option(array(string)),
};

[@mel.module "react-native"] [@mel.scope "ActionSheetIOS"]
external showActionSheetWithOptions: (options, int => unit) => unit =
  "showActionSheetWithOptions";

[@mel.module "react-native"] [@mel.scope "ActionSheetIOS"]
external dismissActionSheet: unit => unit = "dismiss";

[@mel.module "react-native"] [@mel.scope "ActionSheetIOS"]
external showShareActionSheetWithOptions:
  (
    shareOptions,
    ~failureCallback: unit => unit, // TODO: should be an error type to unit
    ~successCallback: (bool, string) => unit
  ) =>
  unit =
  "showShareActionSheetWithOptions";
