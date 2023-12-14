type t = string;

[@mel.inline]
let small = "small";

[@mel.inline]
let large = "large";

external exact: float => t = "%identity";
