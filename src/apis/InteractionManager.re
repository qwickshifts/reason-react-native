/*
 https://reactnative.dev/docs/interactionmanager
 */

type interactionHandle;

[@mel.module "react-native"] [@mel.scope "InteractionManager"]
/* @todo this returns a cancellable "promise", we need to type return correctly */
external runAfterInteractions: (unit => unit) => Js.t({.}) =
  "runAfterInteractions";

[@mel.module "react-native"] [@mel.scope "InteractionManager"]
external createInteractionHandle: unit => interactionHandle =
  "createInteractionHandle";

[@mel.module "react-native"] [@mel.scope "InteractionManager"]
external clearInteractionHandle: interactionHandle => unit =
  "clearInteractionHandle";

[@mel.module "react-native"] [@mel.scope "InteractionManager"]
external setDeadline: float => unit = "setDeadline";
