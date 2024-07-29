type task = unit => unit;
type promiseTask = unit => Js.Promise.t(unit);
type handle = int;

// TODO: make this actually a cancellable promise
[@mel.module "react-native"] [@mel.scope "InteractionManager"]
external runAfterInteractions: task => Js.Promise.t('a) =
  "runAfterInteractions";

[@mel.module "react-native"] [@mel.scope "InteractionManager"]
external runAfterInteractionsPromise: promiseTask => Js.Promise.t('a) =
  "runAfterInteractions";

[@mel.module "react-native"] [@mel.scope "InteractionManager"]
external createInteractionHandle: unit => handle = "createInteractionHandle";

[@mel.module "react-native"] [@mel.scope "InteractionManager"]
external clearInteractionHandle: handle => unit = "clearInteractionHandle";

[@mel.module "react-native"] [@mel.scope "InteractionManager"]
external setDeadline: int => unit = "setDeadline";
