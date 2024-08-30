[@deriving jsProperties]
type xy = {
  x: float,
  y: float,
};

[@deriving jsProperties]
type hw = {
  height: float,
  width: float,
};

[@deriving jsProperties]
type nativeEvent = {
  contentInset: Inset.t,
  contentOffset: xy,
  contentSize: hw,
  layoutMeasurement: hw,
  [@mel.optional]
  zoomScale: option(float),
};

type t = {nativeEvent};
