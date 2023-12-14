open NativeTypes;

module Make = (T: {type t;}) => {
  [@mel.module "react-native"]
  external findNodeHandle: T.t => nodeHandle = "findNodeHandle";

  [@mel.send]
  external setNativeProps: (T.t, Js.t('a)) => unit = "setNativeProps";

  [@mel.send] external focus: T.t => unit = "focus";
  [@mel.send] external blur: T.t => unit = "blur";

  [@mel.send]
  external measure:
    (
      T.t,
      (
        ~x: float,
        ~y: float,
        ~width: float,
        ~height: float,
        ~pageX: float,
        ~pageY: float
      ) =>
      unit
    ) =>
    unit =
    "measure";
  [@mel.send]
  external measureInWindow:
    (T.t, (~x: float, ~y: float, ~width: float, ~height: float) => unit) =>
    unit =
    "measureInWindow";

  [@mel.send]
  external measureLayout:
    (
      T.t,
      ~relativeToNativeNode: nodeHandle,
      ~onSuccess: (~left: float, ~top: float, ~width: float, ~height: float) =>
                  unit,
      ~onFail: unit => unit
    ) =>
    unit =
    "measureLayout";
};
