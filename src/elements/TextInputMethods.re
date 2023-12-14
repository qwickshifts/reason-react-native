module Make = (T: {type t;}) => {
  [@mel.send] external isFocused: T.t => bool = "isFocused";
  [@mel.send] external clear: T.t => unit = "clear";
};
