[@deriving jsProperties]
type payload = {url: string};

type extra;
[@mel.obj]
external extra:
  (
    ~key: string,
    ~value: [@mel.unwrap] [ | `String(string) | `Int(int) | `Bool(bool)]
  ) =>
  extra;

[@mel.module "react-native"] [@mel.scope "Linking"]
external addEventListener:
  ([@mel.as "url"] _, payload => unit) => EventSubscription.t =
  "addEventListener";

[@mel.module "react-native"] [@mel.scope "Linking"]
external canOpenURL: string => Js.Promise.t(bool) = "canOpenURL";

[@mel.module "react-native"] [@mel.scope "Linking"]
external getInitialURL: unit => Js.Promise.t(Js.Null.t(string)) =
  "getInitialURL";

[@mel.module "react-native"] [@mel.scope "Linking"]
external openSettings: unit => Js.Promise.t(unit) = "openSettings";

[@mel.module "react-native"] [@mel.scope "Linking"]
external openURL: string => Js.Promise.t('a) = "openURL";

[@mel.module "react-native"] [@mel.scope "Linking"]
external sendIntent:
  (~action: string, ~extras: array(extra)=?) => Js.Promise.t(unit) =
  "sendIntent";
let sendIntent = (~extras=?, action) => sendIntent(~action, ~extras?);
