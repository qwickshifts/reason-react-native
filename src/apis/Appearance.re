type t = [ | `light | `dark];

[@mel.module "react-native"] [@mel.scope "Appearance"] [@mel.return nullable]
external getColorScheme: unit => option(t) = "getColorScheme";
[@mel.module "react-native"] [@mel.scope "Appearance"]
external setColorScheme: Js.Null.t(t) => unit = "setColorScheme";
let setColorScheme = color => color |> Js.Null.fromOption |> setColorScheme;

type listenerPayload = {colorScheme: t};
[@mel.module "react-native"] [@mel.scope "Appearance"]
external addChangeListener:
  (listenerPayload => unit) => NativeEventSubscription.t =
  "addChangeListener";
