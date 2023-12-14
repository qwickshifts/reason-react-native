type showHideTransition = [ | `fade | `none | `slide];

[@react.component] [@mel.module "react-native"]
external make:
  (
    ~animated: bool=?,
    ~barStyle: [@mel.string] [
                 | `default
                 | [@mel.as "light-content"] `lightContent
                 | [@mel.as "dark-content"] `darkContent
               ]
                 =?,
    ~hidden: bool=?,
    ~backgroundColor: string=?,
    ~translucent: bool=?,
    ~networkActivityIndicatorVisible: bool=?,
    ~showHideTransition: showHideTransition=?
  ) =>
  React.element =
  "StatusBar";

[@mel.module "react-native"] [@mel.scope "StatusBar"]
external setHidden: (bool, showHideTransition) => unit = "setHidden";

[@mel.module "react-native"] [@mel.scope "StatusBar"]
external setBarStyle:
  (
    [@mel.string] [
      | `default
      | [@mel.as "light-content"] `lightContent
      | [@mel.as "dark-content"] `darkContent
    ],
    bool
  ) =>
  unit =
  "setBarStyle";

[@mel.module "react-native"] [@mel.scope "StatusBar"]
external setNetworkActivityIndicatorVisible: bool => unit =
  "setNetworkActivityIndicatorVisible";

[@mel.module "react-native"] [@mel.scope "StatusBar"]
external setBackgroundColor: (Color.t, bool) => unit = "setBackgroundColor";

[@mel.module "react-native"] [@mel.scope "StatusBar"]
external setTranslucent: bool => unit = "setTranslucent";

[@mel.module "react-native"] [@mel.scope "StatusBar"]
external currentHeight: float = "currentHeight";
