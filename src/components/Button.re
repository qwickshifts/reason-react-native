include NativeElement;

[@react.component] [@mel.module "react-native"]
external make:
  (
    ~ref: ref=?,
    // Button props
    ~accessibilityLabel: string=?,
    ~color: Color.t=?,
    ~disabled: bool=?,
    ~hasTVPreferredFocus: bool=?,
    ~nextFocusDown: int=?,
    ~nextFocusForward: int=?,
    ~nextFocusLeft: int=?,
    ~nextFocusRight: int=?,
    ~nextFocusUp: int=?,
    ~onPress: Event.pressEvent => unit,
    ~testID: string=?,
    ~title: string,
    ~touchSoundDisabled: bool=?
  ) =>
  React.element =
  "Button";
