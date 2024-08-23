type textLayout = {
  ascender: float,
  capHeight: float,
  descender: float,
  height: float,
  width: float,
  x: float,
  xHeight: float,
  y: float,
};

type textLayoutEvent = {
  lines: array(textLayout),
  target: int,
};

[@react.component] [@mel.module "react-native"]
external make:
  (
    ~ref: Ref.t=?,
    ~children: React.element=?,
    ~accessibilityHint: string=?,
    ~accessibilityLanguage: string=?,
    ~accessibillityLabel: string=?,
    ~accessibilityRole: Accessibility.AccessibilityRole.t=?,
    ~accessibilityState: Accessibility.State.t=?,
    ~accessibilityActions: array(Accessibility.Action.t)=?,
    ~onAccessibilityAction: string => unit=?,
    ~accessible: bool=?,
    ~adjustsFontSizeToFit: bool=?,
    ~allowFontScaling: bool=?,
    ~android_hyphenationFrequency: [ | `none | `normal | `full]=?,
    ~ariaBusy: bool=?,
    ~ariaChecked: Accessibility.Checked.t('a)=?,
    ~ariaDisabled: bool=?,
    ~ariaExpanded: bool=?,
    ~ariaLabel: string=?,
    ~ariaSelected: bool=?,
    ~dataDetectorType: [ | `phoneNumber | `link | `email | `none | `all]=?,
    ~disabled: bool=?,
    ~dynamicTypeRamp: [
                        | `caption2
                        | `caption1
                        | `footnote
                        | `subheadline
                        | `callout
                        | `body
                        | `headline
                        | `title3
                        | `title2
                        | `title1
                        | `largeTitle
                      ]
                        =?,
    ~ellipsizeMode: [ | `head | `middle | `tail | `clip]=?,
    ~id: string=?,
    ~maxFontSizeMultiplier: float=?,
    ~minimumFontScale: float=?,
    ~nativeID: string=?,
    ~numberOfLines: int=?,
    ~onLayout: LayoutEvent.t => unit=?,
    ~onLongPress: PressEvent.t => unit=?,
    ~onMoveShouldSetResponder: PressEvent.t => bool=?,
    ~onPress: PressEvent.t => unit=?,
    ~onPressIn: PressEvent.t => unit=?,
    ~onPressOut: PressEvent.t => unit=?,
    ~onResponderGrant: PressEvent.t => option(bool)=?,
    ~onResponderMove: PressEvent.t => unit=?,
    ~onResponderRelease: PressEvent.t => unit=?,
    ~onResponderTerminate: PressEvent.t => unit=?,
    ~onResponderTerminationRequest: PressEvent.t => bool=?,
    ~onStartShouldSetResponderCapture: PressEvent.t => bool=?,
    ~onTextLayout: textLayoutEvent => unit=?,
    ~pressRetentionOffset: Rect.t=?,
    ~role: Accessibility.Role.t=?,
    ~selectable: bool=?,
    ~selectionColor: Color.t=?,
    ~style: Style.t=?,
    ~suppressHighlighting: bool=?,
    ~testID: string=?,
    ~textBreakStrategy: [ | `simple | `highQuality | `balanced]=?,
    ~lineBreakStrategyIOS: [@mel.string] [
                             | `none
                             | `standard
                             | [@mel.as "hangul-word"] `hangulWord
                             | [@mel.as "push-out"] `pushOut
                           ]
                             =?,
    unit
  ) =>
  React.element =
  "Text";
