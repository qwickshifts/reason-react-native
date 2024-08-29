type eventArgs = Js.Dict.t(string);

[@mel.module "react-native"] [@mel.scope "Systrace"]
external isEnabled: unit => bool = "isEnabled";

[@mel.module "react-native"] [@mel.scope "Systrace"]
external beginEvent: (~label: unit => string, ~args: eventArgs=?) => unit =
  "beginEvent";
let beginEvent = (~args=?, label) => beginEvent(~label, ~args?);

[@mel.module "react-native"] [@mel.scope "Systrace"]
external endEvent: (~args: eventArgs=?, unit) => unit = "endEvent";

[@mel.module "react-native"] [@mel.scope "Systrace"]
external beginAsyncEvent:
  (~eventName: unit => string, ~args: eventArgs=?) => float =
  "beginAsyncEvent";
let beginAsyncEvent = (~args=?, eventName) =>
  beginAsyncEvent(~eventName, ~args?);

[@mel.module "react-native"] [@mel.scope "Systrace"]
external endAsyncEvent:
  (~eventName: unit => string, ~cookie: float, ~args: eventArgs=?) => unit =
  "endAsyncEvent";
let endAsyncEvent = (~args=?, cookie, eventName) =>
  endAsyncEvent(~eventName, ~cookie, ~args?);

[@mel.module "react-native"] [@mel.scope "Systrace"]
external counterEvent: (~eventName: unit => string, ~value: float) => unit =
  "counterEvent";
let counterEvent = (value, eventName) => counterEvent(~eventName, ~value);
