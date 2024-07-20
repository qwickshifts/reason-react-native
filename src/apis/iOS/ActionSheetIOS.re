type options;
[@mel.obj]
external options:
  (
    ~options: array(string),
    ~cancelButtonIndex: int=?,
    ~destructiveButtonIndex: array(int)=?,
    ~disabledButtonIndices: int=?,
    ~title: string=?,
    ~message: string=?,
    ~tintColor: Color.t=?,
    unit
  ) =>
  options;

[@mel.module "react-native"] [@mel.scope "ActionSheetIOS"]
external showActionSheetWithOptions: (options, int => unit) => unit =
  "showActionSheetWithOptions";

type shareOptions;
[@mel.obj]
external shareOptions:
  (
    ~url: string=?,
    ~message: string=?,
    ~subject: string=?,
    ~excludedActivityTypes: array(string)=?,
    unit
  ) =>
  shareOptions;

type error = {stack: option(string)};

[@mel.module "react-native"] [@mel.scope "ActionSheetIOS"]
external showShareActionSheetWithOptions:
  (shareOptions, error => unit, (bool, string) => unit) => unit =
  "showShareActionSheetWithOptions";
