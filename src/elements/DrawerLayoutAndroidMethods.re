module Make = (T: {type t;}) => {
  [@mel.send] external openDrawer: (T.t, unit) => unit = "openDrawer";
  [@mel.send] external closeDrawer: (T.t, unit) => unit = "closeDrawer";
};
