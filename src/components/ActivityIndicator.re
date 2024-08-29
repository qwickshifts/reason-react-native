[@react.component] [@mel.module "react-native"]
external make:
  (
    ~ref: Ref.t=?,
    ~children: React.element=?,
    // Props
    ~animating: bool=?,
    ~color: Color.t=?,
    ~hidesWhenStopped: bool=?,
    ~size: [ | `small | `large]=?,
    // View Props
    ~accessibilityActions: array(Accessibility.Action.t)=?,
    ~accessibilityElementsHidden: bool=?,
    ~accessibilityHint: string=?,
    ~accessibilityLanguage: string=?,
    ~accessibilityIgnoresInvertColors: bool=?,
    ~accessibilityLabel: string=?,
    ~accessibilityLiveRegion: [ | `none | `polite | `assertive]=?,
    ~accessibilityRole: Accessibility.AccessibilityRole.t=?,
    ~accessibilityState: Accessibility.State.t=?,
    ~accessibilityValue: Accessibility.Value.t=?,
    ~accessibilityViewIsModal: bool=?,
    ~accessible: bool=?,
    ~ariaBusy: bool=?,
    ~ariaChecked: Accessibility.Checked.t('a)=?,
    ~ariaDisabled: bool=?,
    ~ariaExpanded: bool=?,
    ~ariaHidden: bool=?,
    ~ariaLabel: string=?,
    ~ariaLabelledBy: string=?,
    ~ariaLive: [ | `assertive | `off | `polite]=?,
    ~ariaModal: bool=?,
    ~ariaSelected: bool=?,
    ~ariaValuemax: float=?,
    ~ariaValuemin: float=?,
    ~ariaValuenow: float=?,
    ~ariaValuetext: string=?,
    ~collapsable: bool=?,
    ~focusable: bool=?,
    ~hitSlop: View.hitSlop=?,
    ~id: string=?,
    ~importantForAccessibility: [@mel.string] [
                                  | `auto
                                  | `yes
                                  | `no
                                  | [@mel.as "no-hide-descendants"]
                                    `noHideDescendants
                                ]
                                  =?,
    ~nativeID: string=?,
    ~needsOffscreenAlphaCompositing: bool=?,
    ~nextFocusDown: int=?,
    ~nextFocusForward: int=?,
    ~nextFocusLeft: int=?,
    ~nextFocusRight: int=?,
    ~nextFocusUp: int=?,
    ~onAccessibilityAction: string => unit=?,
    ~onAccessibilityEscape: unit => unit=?,
    ~onAccessibilityTap: unit => unit=?,
    ~onLayout: LayoutEvent.t => unit=?,
    ~onMagicTap: unit => unit=?,
    ~onMoveShouldSetResponder: PressEvent.t => bool=?,
    ~onMoveShouldSetResponderCapture: PressEvent.t => bool=?,
    ~onResponderGrant: PressEvent.t => option(bool)=?,
    ~onResponderMove: PressEvent.t => unit=?,
    ~onResponderReject: PressEvent.t => unit=?,
    ~onResponderRelease: PressEvent.t => unit=?,
    ~onResponderTerminate: PressEvent.t => unit=?,
    ~onResponderTerminationRequest: PressEvent.t => unit=?,
    ~onStartShouldSetResponder: PressEvent.t => bool=?,
    ~onStartShouldSetResponderCapture: PressEvent.t => bool=?,
    ~pointerEvents: [@mel.string] [
                      | [@mel.as "box-none"] `boxNone
                      | `none
                      | [@mel.as "box-only"] `boxOnly
                      | `auto
                    ]
                      =?,
    ~removeClippedSubviews: bool=?,
    ~renderToHardwareTextureAndroid: bool=?,
    ~role: Accessibility.Role.t=?,
    ~shouldRasterizeIOS: bool=?,
    ~style: Style.t=?,
    ~tabIndex: [@mel.int] [
                 | [@mel.as 0] `focusable
                 | [@mel.as (-1)] `nonfocusable
               ]
                 =?,
    ~testID: string=?,
    unit
  ) =>
  React.element =
  "ActivityIndicator";
