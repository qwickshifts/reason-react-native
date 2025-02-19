type maintainVisibleContentPosition = {
  minIndexForVisible: int,
  autoscrollToTopThreshold: float,
};
type separators('props) = {
  highlight: unit => unit,
  unhighlight: unit => unit,
  updateProps: ([ | `leading | `trailing], 'props) => unit,
};
type renderItemProps('props, 'item) = {
  item: 'item,
  index: int,
  separators: separators('props),
};
type itemLayout = {
  index: int,
  length: int,
  offset: int,
};

type onEndReachedPayload = {distanceFromEnd: float};
type onStartReachedPayload = {distanceFromStart: float};

[@react.component] [@mel.module "react-native"]
external make:
  (
    ~ref: Ref.t('ref)=?,
    ~children: React.element=?,
    // FlatList Props
    ~columnWrapperStyle: Style.t=?,
    ~extraData: 'data=?,
    ~numColumns: int=?,
    // VirtualizedList Props
    ~data: 'data,
    ~getItem: ('data, int) => option('item),
    ~getItemCount: 'data => int,
    ~renderItem: renderItemProps('renderItemProps, 'item) =>
                 option(React.element)
                   =?,
    ~_CellRendererComponent: React.element=?, // TODO: maybe needs to be specifically typed
    ~_ItemSeparatorComponent: React.element=?,
    ~_ListEmptyComponent: React.element=?,
    ~_ListItemComponent: React.element=?,
    ~_ListFooterComponent: React.element=?,
    ~_ListFooterComponentStyle: Style.t=?,
    ~_ListHeaderComponent: React.element=?,
    ~_ListHeaderComponentStyle: Style.t=?,
    ~debug: bool=?,
    ~extraData: 'extraData=?,
    ~getItemLayout: ('data, int) => itemLayout=?,
    ~horizontal: bool=?,
    ~initialNumToRender: int=?,
    ~initialScrollIndex: int=?,
    ~inverted: bool=?,
    ~keyExtractor: ('item, int) => string=?,
    ~maxToRenderPerBatch: int=?,
    ~onEndReached: onEndReachedPayload => unit=?,
    ~onEndReachedThreshold: float=?,
    ~onRefresh: unit => unit=?,
    ~onScrollToIndexFailed: {
                              .
                              "index": int,
                              "highestMeasuredFrameIndex": int,
                              "averageItemLength": float,
                            } =>
                            unit
                              =?,
    ~onStartReached: onStartReachedPayload => unit=?,
    ~onStartReachedThreshold: float=?,
    ~onViewableItemsChanged: Viewability.callback('item, 'section) => unit=?,
    ~persistentScrollbar: bool=?,
    ~progressViewOffset: float=?,
    ~refreshControl: React.element=?,
    ~refreshing: bool=?,
    ~removeClippedSubviews: bool=?,
    ~renderScrollComponent: 'scrollProps => React.element=?,
    ~viewabilityConfig: Viewability.Config.t=?,
    ~viewabilityConfigCallbackPairs: array(
                                       Viewability.ConfigCallbackPair.t(
                                         'item,
                                         'section,
                                       ),
                                     )
                                       =?,
    ~updateCellsBatchingPeriod: int=?,
    ~windowSize: int=?,
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
  "VirtualizedList";

[@mel.send]
external flashScrollIndicators: Ref.t('ref) => unit = "flashScrollIndicators";

[@mel.send] [@mel.return nullable]
external getNativeScrollRef: Ref.t('ref) => option(Ref.t('scrollRef)) =
  "getNativeScrollRef";

type scrollResponder; // TODO: implement this, maybe not useful
[@mel.send] [@mel.return nullable]
external getScrollResponder: Ref.t('ref) => option(scrollResponder) =
  "getScrollResponder";

[@mel.send]
external getScrollableNode: Ref.t('ref) => 'scrollableNode =
  "getScrollableNode";

[@mel.send.pipe: Ref.t('ref)]
external scrollToEnd: (~params: {. "animated": option(bool)}=?, unit) => unit =
  "scrollToEnd";

[@mel.send.pipe: Ref.t('ref)]
external scrollToIndex:
  {
    .
    "index": int,
    "animated": option(bool),
    "viewOffset": option(float),
    "viewPosition": option(float),
  } =>
  unit =
  "scrollToIndex";

[@mel.send.pipe: Ref.t('ref)]
external scrollToItem:
  {
    .
    "item": 'item,
    "animated": option(bool),
    "viewOffset": option(float),
    "viewPosition": option(float),
  } =>
  unit =
  "scrollToItem";

[@mel.send.pipe: Ref.t('ref)]
external scrollToOffset:
  {
    .
    "offset": float,
    "animated": option(bool),
  } =>
  unit =
  "scrollToOffset";
