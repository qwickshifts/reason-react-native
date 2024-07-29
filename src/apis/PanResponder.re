type gestureResponderHandlers;
type gestureResponderEvent;

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

type activeCallback = (gestureResponderEvent, gestureState) => bool;
type passiveCallback = (gestureResponderEvent, gestureState) => unit;

type panResponderCallbacks = {
  onMoveShouldSetPanResponder: option(activeCallback),
  onMoveShouldSetPanResponderCapture: option(activeCallback),
  onStartShouldSetPanResponder: option(activeCallback),
  onStartShouldSetPanResponderCapture: option(activeCallback),
  onPanResponderGrant: option(passiveCallback),
  onPanResponderReject: option(passiveCallback),
  onPanResponderStart: option(passiveCallback),
  onPanResponderEnd: option(passiveCallback),
  onPanResponderRelease: option(passiveCallback),
  onPanResponderMove: option(passiveCallback),
  onPanResponderTerminate: option(passiveCallback),
  onPanResponderTerminationRequest: option(activeCallback),
  onShouldBlockNativeResponder: option(activeCallback),
};

type panResponderInstance = {panHandlers: gestureResponderHandlers};

[@mel.module "react-native"] [@mel.scope "PanResponder"]
external create: panResponderCallbacks => panResponderInstance = "create";
