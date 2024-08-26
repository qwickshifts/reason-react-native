type t = Js.Null.t([ | `light | `dark]);

[@mel.module "react-native"] [@mel.scope "Appearance"]
external getColorScheme: unit => t = "getColorScheme";
let getColorScheme = () => getColorScheme() |> Js.Null.toOption;
[@mel.module "react-native"] [@mel.scope "Appearance"]
external setColorScheme: t => unit = "setColorScheme";
let setColorScheme = color => color |> Js.Null.fromOption |> setColorScheme;

type listenerPayload = {colorScheme: t};
[@mel.module "react-native"] [@mel.scope "Appearance"]
external addChangeListener:
  (listenerPayload => unit) => NativeEventSubscription.t =
  "addChangeListener";
