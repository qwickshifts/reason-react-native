type transformation;
type t = array(transformation);

type rotationUnits = [ | `deg | `rad];
let rotationUnitsToString =
  fun
  | `deg => "deg"
  | `rad => "rad";

[@mel.obj] external matrix: (~matrix: array(float)) => transformation;

[@mel.obj] external perspective: (~perspective: float) => transformation;

[@mel.obj] external rotate: (~rotate: string) => transformation;
let rotate = (value, unit) =>
  rotate(~rotate=string_of_float(value) ++ rotationUnitsToString(unit));

[@mel.obj] external rotateX: (~rotateX: string) => transformation;
let rotateX = (value, unit) =>
  rotateX(~rotateX=string_of_float(value) ++ rotationUnitsToString(unit));

[@mel.obj] external rotateY: (~rotateY: string) => transformation;
let rotateY = (value, unit) =>
  rotateY(~rotateY=string_of_float(value) ++ rotationUnitsToString(unit));

[@mel.obj] external rotateZ: (~rotateZ: string) => transformation;
let rotateZ = (value, unit) =>
  rotateZ(~rotateZ=string_of_float(value) ++ rotationUnitsToString(unit));

[@mel.obj] external scale: (~scale: float) => transformation;

[@mel.obj] external scaleX: (~scaleX: float) => transformation;

[@mel.obj] external scaleY: (~scaleY: float) => transformation;

[@mel.obj] external translateX: (~translateX: float) => transformation;

[@mel.obj] external translateY: (~translateY: float) => transformation;

[@mel.obj] external skewX: (~skewX: string) => transformation;
let skewX = (value, unit) =>
  skewX(~skewX=string_of_float(value) ++ rotationUnitsToString(unit));

[@mel.obj] external skewY: (~skewY: string) => transformation;
let skewY = (value, unit) =>
  skewY(~skewY=string_of_float(value) ++ rotationUnitsToString(unit));

// TODO: Currently unsafe, add type checking
[@mel.obj] external transformOrigin: (~transformOrigin: string) => Style.t;
