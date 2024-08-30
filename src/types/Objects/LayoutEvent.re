type layout = {
  height: float,
  width: float,
  x: float,
  y: float,
};

type nativeEvent = {layout};

type t = SyntheticEvent.t(nativeEvent);
