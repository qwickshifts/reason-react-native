// see https://github.com/facebook/react-native/blob/master/Libraries/Types/CoreEventTypes.js

type registrationName = {registrationName: string};

module EventMethods = (T: {
                         type event;
                       }) => {
  [@mel.get] [@mel.return nullable]
  external bubbles: T.event => option(bool) = "bubbles";
  [@mel.get] [@mel.return nullable]
  external cancelable: T.event => option(bool) = "cancelable";
  [@mel.get] external currentTarget: T.event => float = "currentTarget";
  [@mel.get] [@mel.return nullable]
  external defaultPrevented: T.event => option(bool) = "defaultPrevented";
  [@mel.get]
  external dispatchConfig: T.event => registrationName = "dispatchConfig";
  [@mel.get] [@mel.return nullable]
  external eventPhase: T.event => option(float) = "eventPhase";
  [@mel.send] external preventDefault: T.event => unit = "preventDefault";
  [@mel.send]
  external isDefaultPrevented: T.event => bool = "isDefaultPrevented";
  [@mel.send] external stopPropagation: T.event => unit = "stopPropagation";
  [@mel.send]
  external isPropagationStopped: T.event => bool = "isPropagationStopped";
  [@mel.get] [@mel.return nullable]
  external isTrusted: T.event => option(bool) = "isTrusted";
  [@mel.get] external nativeEvent: T.event => 'a = "nativeEvent";
  [@mel.send] external persist: T.event => unit = "persist";
  [@mel.get] [@mel.return nullable]
  external target: T.event => option(float) = "target";
  [@mel.get] external timeStamp: T.event => float = "timeStamp";
  [@mel.get] [@mel.return nullable]
  external _type: T.event => option(string) = "type";
};

module SyntheticEvent = (T: {
                           type _payload;
                         }) => {
  type t = {
    bubbles: Js.Nullable.t(bool),
    cancelable: Js.Nullable.t(bool),
    currentTarget: float,
    defaultPrevented: Js.Nullable.t(bool),
    dispatchConfig: registrationName,
    eventPhase: Js.Nullable.t(float),
    isTrusted: Js.Nullable.t(bool),
    nativeEvent: T._payload,
    target: Js.Nullable.t(float),
    timeStamp: float,
    [@mel.as "type"]
    _type: Js.Nullable.t(string),
  };

  include EventMethods({
    type event = t;
  });
};

module ResponderSyntheticEvent = (T: {
                                    type _payload;
                                  }) => {
  type touchBank = {
    touchActive: bool,
    startPageX: float,
    startPageY: float,
    startTimeStamp: float,
    currentPageX: float,
    currentPageY: float,
    currentTimeStamp: float,
    previousPageX: float,
    previousPageY: float,
    previousTimeStamp: float,
  };

  type touchHistory = {
    indexOfSingleActiveTouch: float,
    mostRecentTimeStamp: float,
    numberActiveTouches: float,
    touchBank: array(touchBank),
  };

  type t = {
    bubbles: Js.Nullable.t(bool),
    cancelable: Js.Nullable.t(bool),
    currentTarget: float,
    defaultPrevented: Js.Nullable.t(bool),
    dispatchConfig: registrationName,
    eventPhase: Js.Nullable.t(float),
    isTrusted: Js.Nullable.t(bool),
    nativeEvent: T._payload,
    target: Js.Nullable.t(float),
    timeStamp: float,
    [@mel.as "type"]
    _type: Js.Nullable.t(string),
    touchHistory,
  };

  include EventMethods({
    type event = t;
  });

  [@mel.get] external touchHistory: t => touchHistory = "touchHistory";
};

module LayoutEvent = {
  type layout = {
    x: float,
    y: float,
    width: float,
    height: float,
  };

  type payload = {layout};

  include SyntheticEvent({
    type _payload = payload;
  });
};

module TextLayoutEvent = {
  type line = {
    x: float,
    y: float,
    width: float,
    height: float,
    ascender: float, // verify
    capHeight: float, // verify
    descender: float, // verify
    text: string,
    xHeight: float // verify
  };

  type payload = {lines: array(line)};

  include SyntheticEvent({
    type _payload = payload;
  });
};

module PressEvent = {
  type payload = {
    changedTouches: array(payload),
    force: float,
    identifier: int,
    locationX: float,
    locationY: float,
    pageX: float,
    pageY: float,
    target: Js.Nullable.t(float),
    timestamp: float,
    touches: array(payload),
  };

  include ResponderSyntheticEvent({
    type _payload = payload;
  });
};

module ScrollEvent = {
  type contentOffset = {
    x: float,
    y: float,
  };
  type contentInset = {
    bottom: float,
    left: float,
    right: float,
    top: float,
  };
  type dimensions = {
    height: float,
    width: float,
  };

  type payload = {
    contentInset,
    contentOffset,
    contentSize: dimensions,
    layoutMeasurement: dimensions,
  };

  include SyntheticEvent({
    type _payload = payload;
  });
};

module SwitchChangeEvent = {
  type payload = {value: bool};

  include SyntheticEvent({
    type _payload = payload;
  });
};

module TargetEvent = {
  type payload = {target: int};

  include SyntheticEvent({
    type _payload = payload;
  });
};

type layoutEvent = LayoutEvent.t;
type textLayoutEvent = TextLayoutEvent.t;
type pressEvent = PressEvent.t;
type scrollEvent = ScrollEvent.t;
type switchChangeEvent = SwitchChangeEvent.t;
type targetEvent = TargetEvent.t;

type t;
