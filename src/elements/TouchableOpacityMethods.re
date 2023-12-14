module Make = (T: {type t;}) => {
  [@mel.send]
  external setOpacityTo: (T.t, ~value: float, ~duration: float) => unit =
    "setOpacityTo";
};
