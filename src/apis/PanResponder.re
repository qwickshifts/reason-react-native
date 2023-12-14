type gestureState = {
  stateID: float,
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

type t;
type config;
type panHandlers;
type callback('a) = Event.pressEvent => 'a;

[@mel.obj]
external config:
  (
    ~onMoveShouldSetPanResponder: (Event.pressEvent, gestureState) => bool=?,
    ~onMoveShouldSetPanResponderCapture: (Event.pressEvent, gestureState) =>
                                         bool
                                           =?,
    ~onStartShouldSetPanResponder: (Event.pressEvent, gestureState) => bool=?,
    ~onStartShouldSetPanResponderCapture: (Event.pressEvent, gestureState) =>
                                          bool
                                            =?,
    ~onPanResponderReject: (Event.pressEvent, gestureState) => unit=?,
    ~onPanResponderGrant: (Event.pressEvent, gestureState) => unit=?,
    ~onPanResponderStart: (Event.pressEvent, gestureState) => unit=?,
    ~onPanResponderEnd: (Event.pressEvent, gestureState) => unit=?,
    ~onPanResponderRelease: (Event.pressEvent, gestureState) => unit=?,
    ~onPanResponderMove: (Event.pressEvent, gestureState) => unit=?,
    ~onPanResponderTerminate: (Event.pressEvent, gestureState) => unit=?,
    ~onPanResponderTerminationRequest: (Event.pressEvent, gestureState) => bool
                                         =?,
    ~onShouldBlockNativeResponder: (Event.pressEvent, gestureState) => bool=?,
    unit
  ) =>
  config;

[@mel.module "react-native"] [@mel.scope "PanResponder"]
external create: config => t = "create";

[@mel.get] external panHandlers: t => panHandlers = "panHandlers";

[@mel.get]
external onMoveShouldSetResponder: panHandlers => callback(bool) =
  "onMoveShouldSetResponder";
[@mel.get]
external onMoveShouldSetResponderCapture: panHandlers => callback(bool) =
  "onMoveShouldSetResponderCapture";
[@mel.get]
external onStartShouldSetResponder: panHandlers => callback(bool) =
  "onStartShouldSetResponder";
[@mel.get]
external onStartShouldSetResponderCapture: panHandlers => callback(bool) =
  "onStartShouldSetResponderCapture";
[@mel.get]
external onResponderReject: panHandlers => callback(unit) =
  "onResponderReject";
[@mel.get]
external onResponderGrant: panHandlers => callback(unit) = "onResponderGrant";
[@mel.get]
external onResponderRelease: panHandlers => callback(unit) =
  "onResponderRelease";
[@mel.get]
external onResponderMove: panHandlers => callback(unit) = "onResponderMove";
[@mel.get]
external onResponderTerminate: panHandlers => callback(unit) =
  "onResponderTerminate";
[@mel.get]
external onResponderTerminationRequest: panHandlers => callback(bool) =
  "onResponderTerminationRequest";
[@mel.get]
external onResponderStart: panHandlers => callback(unit) = "onResponderStart";
[@mel.get]
external onResponderEnd: panHandlers => callback(unit) = "onResponderEnd";
