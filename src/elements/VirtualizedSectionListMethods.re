module Make = (T: {type t;}) => {
  type scrollToLocationParams;
  [@mel.obj]
  external scrollToLocationParams:
    (
      ~animated: bool=?,
      ~itemIndex: int,
      ~sectionIndex: int,
      ~viewOffset: int=?,
      ~viewPosition: float=?,
      unit
    ) =>
    scrollToLocationParams;

  [@mel.send]
  external scrollToLocation: (T.t, scrollToLocationParams) => unit =
    "scrollToLocation";
};
