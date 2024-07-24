type t = [ | `dark | `light];

type nativeEventSubscription; // TODO: maybe needs to come from elsewhere

[@mel.scope "Appearance"] [@mel.module "react-native"]
external getColorScheme: unit => Js.Null.t(t) = "getColorScheme";
let getColorScheme = () => () |> getColorScheme |> Js.Null.toOption;

[@mel.scope "Appearance"] [@mel.module "react-native"]
external setColorScheme: Js.Null.t(t) => unit = "setColorScheme";
let setColorScheme = (scheme: option(t)) =>
  scheme |> Js.Null.fromOption |> setColorScheme;

[@mel.scope "Appearance"] [@mel.module "react-native"]
external addChangeListener: (Js.Null.t(t) => unit) => nativeEventSubscription =
  "addChangeListener";
