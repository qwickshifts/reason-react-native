[@deriving jsProperties]
type dispatchConfig = {registrationName: string};

type t('event) = {
  bubbles: option(bool),
  cancelable: option(bool),
  currentTarget: [ | `Number(int) | `Element(React.element)],
  defaultPrevented: option(bool),
  dispatchConfig,
  eventPhase: option(int),
  preventDefault: unit => unit,
  isDefaultPrevented: unit => bool,
  stopPropagation: unit => unit,
  isPropagationStopped: unit => bool,
  isTrusted: option(bool),
  nativeEvent: 'event,
  persist: unit => unit,
  target: [ | `Number(int) | `Element(React.element)],
  timeStamp: int,
  [@mel.as "type"]
  type_: option(string),
};

[@mel.obj]
external make:
  (
    ~bubbles: option(bool)=?,
    ~cancelable: option(bool)=?,
    ~currentTarget: [@mel.unwrap] [ | `Number(int) | `Element(React.element)],
    ~defaultPrevented: option(bool)=?,
    ~dispatchConfig: dispatchConfig,
    ~eventPhase: option(int)=?,
    ~preventDefault: unit => unit,
    ~isDefaultPrevented: unit => bool,
    ~stopPropagation: unit => unit,
    ~isPropagationStopped: unit => bool,
    ~isTrusted: option(bool)=?,
    ~nativeEvent: 'event,
    ~persist: unit => unit,
    ~target: [@mel.unwrap] [ | `Number(int) | `Element(React.element)]=?,
    ~timeStamp: int,
    ~type_: option(string)=?,
    unit
  ) =>
  t('event);
