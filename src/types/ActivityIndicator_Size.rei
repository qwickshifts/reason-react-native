type t;

[@mel.inline "small"]
let small: t;

[@mel.inline "large"]
let large: t;

external exact: float => t = "%identity";
