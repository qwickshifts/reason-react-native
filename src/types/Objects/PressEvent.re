type nativeEvent = {
  changedTouches: array(nativeEvent),
  force: float,
  identifier: int,
  locationX: float,
  locationY: float,
  pageX: float,
  pageY: float,
  target: Js.Nullable.t(int),
  timestamp: float,
  touches: array(nativeEvent),
};

type t = ResponderSyntheticEvent.t(nativeEvent);
