module Make = (T: {type t;}) => {
  [@mel.send] external setPage: (T.t, int) => unit = "setPage";
  [@mel.send]
  external setPageWithoutAnimation: (T.t, int) => unit =
    "setPageWithoutAnimation";
};
