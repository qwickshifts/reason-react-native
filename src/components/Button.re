[@react.component] [@mel.module "react-native"]
external make:
  (
    ~ref: Ref.t('ref)=?,
    ~children: React.element=?,
    ~onPress: PressEvent.t => unit,
    ~title: string,
    ~accessibilityLabel: string=?,
    ~accessibilityLanguage: string=?,
    ~accessibilityActions: array(Accessibility.Action.t)=?,
    ~onAccessibilityAction: string => unit=?,
    ~color: Color.t=?,
    ~disabled: bool=?,
    ~hasTVPreferredFocus: bool=?,
    ~nextFocusDown: int=?,
    ~nextFocusForward: int=?,
    ~nextFocusLeft: int=?,
    ~nextFocusRight: int=?,
    ~nextFocusUp: int=?,
    ~testID: string=?,
    ~touchSoundDisabled: bool=?,
    unit
  ) =>
  React.element =
  "Button";
