type eventArgs = Js.Dict.t(string);
type cookie = int;

[@mel.module "react-native"] [@mel.scope "Systrace"]
external isEnabled: unit => bool = "isEnabled";

[@mel.module "react-native"] [@mel.scope "Systrace"]
external beginEvent:
  (
    [@mel.unwrap] [
      | `EventName(string)
      | `EventNameFromFunction(unit => string)
    ],
    ~args: eventArgs=?
  ) =>
  unit =
  "beginEvent";

[@mel.module "react-native"] [@mel.scope "Systrace"]
external endEvent: (~args: eventArgs=?) => unit = "endEvent";

[@mel.module "react-native"] [@mel.scope "Systrace"]
external beginAsyncEvent:
  (
    [@mel.unwrap] [
      | `EventName(string)
      | `EventNameFromFunction(unit => string)
    ],
    ~args: eventArgs=?
  ) =>
  unit =
  "beginAsyncEvent";

[@mel.module "react-native"] [@mel.scope "Systrace"]
external endAsyncEvent:
  (
    [@mel.unwrap] [
      | `EventName(string)
      | `EventNameFromFunction(unit => string)
    ],
    cookie,
    ~args: eventArgs=?
  ) =>
  unit =
  "endAsyncEvent";

[@mel.module "react-native"] [@mel.scope "Systrace"]
external counterEvent:
  (
    [@mel.unwrap] [
      | `EventName(string)
      | `EventNameFromFunction(unit => string)
    ],
    int
  ) =>
  unit =
  "counterEvent";
