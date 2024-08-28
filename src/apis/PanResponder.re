type t;

type gestureState = {
  stateID: int,
  moveX: float,
  moveY: float,
  x0: float,
  y0: float,
  dx: float,
  dy: float,
  vx: float,
  vy: float,
  numberActiveTouches: int,
};

type activeCallback = (PressEvent.t, gestureState) => bool;
type passiveCallback = (PressEvent.t, gestureState) => unit;
type config;
[@mel.obj]
external config:
  (
    ~onMoveShouldSetPanResponder: activeCallback=?,
    ~onMoveShouldSetPanResponderCapture: activeCallback=?,
    ~onStartShouldSetPanResponder: activeCallback=?,
    ~onStartShouldSetPanResponderCapture: activeCallback=?,
    ~onPanResponderGrant: activeCallback=?,
    ~onPanResponderReject: passiveCallback=?,
    ~onPanResponderStart: passiveCallback=?,
    ~onPanResponderEnd: passiveCallback=?,
    ~onPanResponderRelease: passiveCallback=?,
    ~onPanResponderMove: passiveCallback=?,
    ~onPanResponderTerminate: passiveCallback=?,
    ~onPanResponderTerminationRequest: activeCallback=?,
    ~onShouldBlockNativeResponder: activeCallback=?,
    unit
  ) =>
  config;

[@mel.module "react-native"] [@mel.scope "PanResponder"]
external create: config => t = "create";
