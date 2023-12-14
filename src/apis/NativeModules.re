// We recommend that you bind your own custom native modules like this:
//
// [@mel.module "react-native"] [@mel.scope ("NativeModules", "MyCustomModule")]
// external myFunc: unit => unit = "myFunc"

[@mel.module "react-native"]
external nativeModules: Js.Dict.t('a) = "NativeModules";

[@mel.module "react-native"]
external requireNativeComponent:
  (string, [@mel.as {json|null|json}] _) => React.component('a) =
  "requireNativeComponent";
