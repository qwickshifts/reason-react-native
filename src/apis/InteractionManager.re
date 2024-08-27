type simpleTask = {
  name: string,
  run: unit => unit,
};
type promiseTask('a) = {
  name: string,
  run: unit => Js.Promise.t('a),
};

module CancelableObject = {
  type t;
  [@mel.send.pipe: t]
  external then_:
    (
      ~onFulfill: unit => Js.Promise.t('a),
      ~onReject: unit => Js.Promise.t('a)
    ) =>
    Js.Promise.t('a) =
    "then";
  [@mel.send] external cancel: t => unit = "cancel";
};

[@mel.module "react-native"] [@mel.scope "InteractionManager"]
external runAfterInteractions:
  (
  [@mel.unwrap]
  [
    | `anonymous(unit => 'a)
    | `simple(simpleTask)
    | `promise(promiseTask('a))
  ]
  ) =>
  CancelableObject.t =
  "runAfterInteractions";

[@mel.module "react-native"] [@mel.scope "InteractionManager"]
external createInteractionHandle: unit => float = "createInteractionHandle";

[@mel.module "react-native"] [@mel.scope "InteractionManager"]
external clearInteractionHandle: float => unit = "clearInteractionHandle";

[@mel.module "react-native"] [@mel.scope "InteractionManager"]
external setDeadline: float => unit = "setDeadline";
