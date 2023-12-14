module Make = (T: {type t;}) => {
  type scrollToEndOptions;
  [@mel.obj]
  external scrollToEndOptions:
    (~animated: bool=?, ~duration: float=?, unit) => scrollToEndOptions;

  // multiple externals
  [@mel.send] external scrollToEnd: T.t => unit = "scrollToEnd";

  // multiple externals
  [@mel.send]
  external scrollToEndWithOptions: (T.t, scrollToEndOptions) => unit =
    "scrollToEnd";

  [@mel.send]
  external flashScrollIndicators: T.t => unit = "flashScrollIndicators";

  [@mel.send]
  external setNativeProps: (T.t, Js.t('a)) => unit = "setNativeProps";
};
