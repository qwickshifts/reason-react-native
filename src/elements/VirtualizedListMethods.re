module Make = (T: {type t;}) => {
  type scrollToIndexParams;
  [@mel.obj]
  external scrollToIndexParams:
    (
      ~viewOffset: float=?,
      ~viewPosition: float=?,
      ~animated: bool=?,
      ~index: int,
      unit
    ) =>
    scrollToIndexParams;
  [@mel.send]
  external scrollToIndex: (T.t, scrollToIndexParams) => unit = "scrollToIndex";

  type scrollToItemParams('item);
  [@mel.obj]
  external scrollToItemParams:
    (~viewPosition: float=?, ~animated: bool=?, ~item: 'item, unit) =>
    scrollToItemParams('item);
  [@mel.send]
  external scrollToItem: (T.t, scrollToItemParams('item)) => unit =
    "scrollToItem";

  type scrollToOffsetParams;
  [@mel.obj]
  external scrollToOffsetParams:
    (~animated: bool=?, ~offset: float, unit) => scrollToOffsetParams;
  [@mel.send]
  external scrollToOffset: (T.t, scrollToOffsetParams) => unit =
    "scrollToOffset";

  [@mel.send] external recordInteraction: T.t => unit = "recordInteraction";
};
