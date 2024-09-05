type maintainVisibleContentPosition = {
  minIndexForVisible: int,
  autoscrollToTopThreshold: float,
};
[@react.component] [@mel.module "react-native"]
external make:
  (
    ~ref: Ref.t('ref)=?,
    ~children: React.element=?,
    // ScrollView Props
    ~_StickyHeaderComponent: React.element=?,
    ~alwaysBounceHorizontal: bool=?,
    ~alwaysBounceVertical: bool=?,
    ~automaticallyAdjustContentInsets: bool=?,
    ~automaticallyAdjustKeyboardInsets: bool=?,
    ~automaticallyAdjustsScrollIndicatorInsets: bool=?,
    ~bounces: bool=?,
    ~bouncesZoom: bool=?,
    ~canCancelContentTouches: bool=?,
    ~centerContent: bool=?,
    ~contentContainerStyle: Style.t=?,
    ~contentInset: Inset.t=?,
    ~contentInsetAdjustmentBehavior: [
                                       | `automatic
                                       | `scrollableAxes
                                       | `never
                                       | `always
                                     ]
                                       =?,
    ~contentOffset: Point.t=?,
    ~decelerationRate: [ | `normal | `fast]=?,
    ~directionalLockEnabled: bool=?,
    ~disableIntervalMomentum: bool=?,
    ~disableScrollViewPanResponder: bool=?,
    ~endFillColor: Color.t=?,
    ~fadingEdgeLength: float=?,
    ~horizontal: bool=?,
    ~indicatorStyle: [ | `default | `black | `white]=?,
    ~invertStickyHeaders: bool=?,
    ~keyboardDismissMode: [@mel.string] [
                            | `none
                            | [@mel.as "on-drag"] `onDrag
                            | `interactive
                          ]
                            =?,
    ~keyboardShouldPersistTaps: [ | `never | `always | `handled]=?,
    ~maintainVisibleContentPosition: maintainVisibleContentPosition=?,
    ~maximumZoomScale: float=?,
    ~minimumZoomScale: float=?,
    ~nestedScrollEnabled: bool=?,
    ~onContentSizeChange: (float, float) => unit=?,
    ~onMomentumScrollBegin: ScrollEvent.t => unit=?,
    ~onMomentumScrollEnd: ScrollEvent.t => unit=?,
    ~onScroll: ScrollEvent.t => unit=?,
    ~onScrollBeginDrag: ScrollEvent.t => unit=?,
    ~onScrollEndDrag: ScrollEvent.t => unit=?,
    ~onScrollToTop: ScrollEvent.t => unit=?,
    ~overScrollMode: [ | `auto | `always | `never]=?,
    ~pagingEnabled: bool=?,
    ~persistentScrollbar: bool=?,
    ~pinchGestureEnabled: bool=?,
    ~refreshControl: React.element=?,
    ~removeClippedSubviews: bool=?,
    ~scrollEnabled: bool=?,
    ~scrollEventThrottle: float=?,
    ~scrollIndicatorInsets: Inset.t=?,
    ~scrollPerfTag: string=?,
    ~scrollToOverflowEnabled: bool=?,
    ~scrollsToTop: bool=?,
    ~showsHorizontalScrollIndicator: bool=?,
    ~showsVerticalScrollIndicator: bool=?,
    ~snapToAlignment: [@mel.string] [
                        | `start
                        | `center
                        | [@mel.as "end"] `end_
                      ]
                        =?,
    ~snapToEnd: bool=?,
    ~snapToInterval: float=?,
    ~snapToOffsets: array(float)=?,
    ~snapToStart: bool=?,
    ~stickyHeaderHiddenOnScroll: bool=?,
    ~stickyHeaderIndices: array(int)=?,
    ~zoomScale: float=?,
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
    ~ariaChecked: [
                    | [@mel.as "true"] `true_
                    | [@mel.as "false"] `false_
                    | `mixed
                  ]
                    =?,
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
    ~hitSlop: Inset.t=?,
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
  "ScrollView";
