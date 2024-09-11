type t = {url: string};

[@mel.module "react-native"] [@mel.scope "Linking"]
external addEventListener: (string, t => unit) => EventSubscription.t =
  "addEventListener";
let addEventListener = addEventListener("url");

[@mel.module "react-native"] [@mel.scope "Linking"]
external canOpenURL: string => Js.Promise.t(bool) = "canOpenURL";

[@mel.module "react-native"] [@mel.scope "Linking"]
external getInitialURL: unit => Js.Promise.t(Js.Null.t(string)) =
  "getInitialURL";

[@mel.module "react-native"] [@mel.scope "Linking"]
external openSettings: unit => Js.Promise.t(unit) = "openSettings";

[@mel.module "react-native"] [@mel.scope "Linking"]
external openURL: string => Js.Promise.t(unit) = "openURL";

[@mel.module "react-native"] [@mel.scope "Linking"]
external sendIntent:
  (
    string,
    option(
      array({
        .
        key: string,
        // TODO: This is a union type, maybe a better way to represent this?
        value: 'a,
      }),
    )
  ) =>
  Js.Promise.t(unit) =
  "sendIntent";
