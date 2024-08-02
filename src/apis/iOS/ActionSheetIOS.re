type options;
[@mel.obj]
external options:
  (
    ~title: string=?,
    ~options: array(string),
    ~cancelButtonIndex: int=?,
    ~destructiveButtonIndex: array(int)=?,
    ~message: string=?,
    ~anchor: int=?,
    ~tintColor: Color.t=?,
    ~cancelButtonTintColor: Color.t=?,
    ~userInterfaceStyle: [ | `light | `dark]=?,
    ~disabledButtonIndices: array(int)=?
  ) =>
  options;

type shareOptions;
[@mel.obj]
external shareOptions:
  (
    ~message: string=?,
    ~url: string=?,
    ~subject: string=?,
    ~anchor: int=?,
    ~excludedActivityTypes: array(string)=?
  ) =>
  shareOptions;

type error = {stack: option(string)};

[@mel.module "react-native"] [@mel.scope "ActionSheetIOS"]
external showActionSheetWithOptions: (options, int => unit) => unit =
  "showActionSheetWithOptions";

[@mel.module "react-native"] [@mel.scope "ActionSheetIOS"]
external dissmissActionSheet: unit => unit = "dismissActionSheet";

[@mel.module "react-native"] [@mel.scope "ActionSheetIOS"]
external showShareActionSheetWithOptions:
  (shareOptions, error => unit, (bool, string) => unit) => unit =
  "showShareActionSheetWithOptions";
