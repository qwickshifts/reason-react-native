include VirtualizedSectionListElement;

[@mel.send]
external flashScrollIndicators: element => unit = "flashScrollIndicators";

[@mel.send] external recordInteraction: element => unit = "recordInteraction";

[@mel.send]
external setNativeProps: (element, Js.t('a)) => unit = "setNativeProps";

[@react.component] [@mel.module "react-native"]
external make:
  (
    ~ref: ref=?,
    // VirtualizedSectionList props
    ~_ItemSeparatorComponent: React.component(
                                VirtualizedSectionList.separatorProps(
                                  'item,
                                  'sectionData,
                                ),
                              )
                                =?,
    ~_SectionSeparatorComponent: React.component(
                                   VirtualizedSectionList.separatorProps(
                                     'item,
                                     'sectionData,
                                   ),
                                 )
                                   =?,
    ~renderItem: VirtualizedSectionList.renderItemCallback(
                   'item,
                   'sectionData,
                 ),
    ~renderSectionFooter: VirtualizedSectionList.renderSectionHeaderCallback(
                            'item,
                            'sectionData,
                          )
                            =?,
    ~renderSectionHeader: VirtualizedSectionList.renderSectionHeaderCallback(
                            'item,
                            'sectionData,
                          )
                            =?,
    ~sections: array(VirtualizedSectionList.section('item, 'sectionData)),
    ~stickySectionHeadersEnabled: bool=?,
    // VirtualizedList props
    ~_CellRendererComponent: VirtualizedList.cellRendererComponent('item)=?,
    ~_ListEmptyComponent: unit => React.element=?,
    ~_ListFooterComponent: unit => React.element=?,
    ~_ListFooterComponentStyle: Style.t=?,
    ~_ListHeaderComponent: unit => React.element=?,
    ~_ListHeaderComponentStyle: Style.t=?,
    ~debug: bool=?,
    // ~enableVirtualization: bool=?, // not working, disableVirtualization?
    // ~data: 'data, // any collection of 'item
    ~disableVirtualization: bool=?, // deprecated
    ~extraData: 'extraData=?,
    ~getItem: ('data, int) => 'item=?,
    ~getItemCount: 'data => int=?,
    ~getItemLayout: ('data, int) => VirtualizedList.itemLayout=?,
    ~initialNumToRender: int=?,
    ~initialScrollIndex: int=?,
    ~inverted: bool=?,
    ~keyExtractor: ('item, int) => string,
    ~maxToRenderPerBatch: int=?,
    ~onEndReached: VirtualizedList.onEndReachedParams => unit=?,
    ~onEndReachedThreshold: float=?,
    ~onRefresh: unit => unit=?,
    ~onScrollToIndexFailed: VirtualizedList.onScrollToIndexFailedParams => unit
                              =?,
    ~onViewableItemsChanged: VirtualizedList.viewableItemsChanged('item) =>
                             unit
                               =?,
    ~progressViewOffset: float=?,
    ~refreshing: bool=?,
    // ~renderItem: VirtualizedList.renderItemCallback('item),
    ~renderScrollComponent: unit => React.element=?, // TODO: params?
    ~updateCellsBatchingPeriod: float=?,
    ~viewabilityConfig: VirtualizedList.viewabilityConfig=?,
    ~viewabilityConfigCallbackPairs: VirtualizedList.viewabilityConfigCallbackPairs(
                                       'item,
                                     )
                                       =?,
    ~windowSize: int=?,
    // ScrollView props
    ~alwaysBounceHorizontal: bool=?,
    ~alwaysBounceVertical: bool=?,
    ~automaticallyAdjustContentInsets: bool=?,
    ~bounces: bool=?,
    ~bouncesZoom: bool=?,
    ~canCancelContentTouches: bool=?,
    ~centerContent: bool=?,
    ~contentContainerStyle: Style.t=?,
    ~contentInset: View.edgeInsets=?,
    ~contentInsetAdjustmentBehavior: ScrollView.contentInsetAdjustmentBehavior
                                       =?,
    ~contentOffset: ScrollView.contentOffset=?,
    ~decelerationRate: ScrollView.decelerationRate=?,
    ~directionalLockEnabled: bool=?,
    ~endFillColor: Color.t=?,
    ~fadingEdgeLength: float=?,
    ~horizontal: bool=?,
    ~indicatorStyle: ScrollView.indicatorStyle=?,
    ~keyboardDismissMode: [@mel.string] [
                            | `none
                            | `interactive
                            | [@mel.as "on-drag"] `onDrag
                          ]
                            =?,
    ~keyboardShouldPersistTaps: ScrollView.keyboardShouldPersistTaps=?,
    ~maximumZoomScale: float=?,
    ~minimumZoomScale: float=?,
    ~nestedScrollEnabled: bool=?,
    ~onContentSizeChange: ((float, float)) => unit=?,
    ~onMomentumScrollBegin: Event.scrollEvent => unit=?,
    ~onMomentumScrollEnd: Event.scrollEvent => unit=?,
    ~onScroll: Event.scrollEvent => unit=?,
    ~onScrollBeginDrag: Event.scrollEvent => unit=?,
    ~onScrollEndDrag: Event.scrollEvent => unit=?,
    ~overScrollMode: ScrollView.overScrollMode=?,
    ~pagingEnabled: bool=?,
    ~pinchGestureEnabled: bool=?,
    ~refreshControl: React.element=?,
    ~scrollEnabled: bool=?,
    ~scrollEventThrottle: int=?,
    ~scrollIndicatorInsets: View.edgeInsets=?,
    ~scrollPerfTag: string=?,
    ~scrollsToTop: bool=?,
    ~scrollToOverflowEnabled: bool=?,
    ~showsHorizontalScrollIndicator: bool=?,
    ~showsVerticalScrollIndicator: bool=?,
    ~snapToAlignment: ScrollView.snapToAlignment=?,
    ~snapToEnd: bool=?,
    ~snapToInterval: float=?,
    ~snapToOffsets: array(float)=?,
    ~snapToStart: bool=?,
    ~stickyHeaderIndices: array(int)=?,
    ~zoomScale: float=?,
    // View props 0.63.0
    ~accessibilityActions: array(Accessibility.actionInfo)=?,
    ~accessibilityElementsHidden: bool=?,
    ~accessibilityHint: string=?,
    ~accessibilityIgnoresInvertColors: bool=?,
    ~accessibilityLabel: string=?,
    ~accessibilityLiveRegion: Accessibility.liveRegion=?,
    ~accessibilityRole: Accessibility.role=?,
    ~accessibilityState: Accessibility.state=?,
    ~accessibilityValue: Accessibility.value=?,
    ~accessibilityViewIsModal: bool=?,
    ~accessible: bool=?,
    ~collapsable: bool=?,
    ~hitSlop: View.edgeInsets=?,
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
    ~onAccessibilityAction: Accessibility.actionEvent => unit=?,
    ~onAccessibilityEscape: unit => unit=?,
    ~onAccessibilityTap: unit => unit=?,
    ~onLayout: Event.layoutEvent => unit=?,
    ~onMagicTap: unit => unit=?,
    // Gesture Responder props
    ~onMoveShouldSetResponder: Event.pressEvent => bool=?,
    ~onMoveShouldSetResponderCapture: Event.pressEvent => bool=?,
    ~onResponderEnd: Event.pressEvent => unit=?,
    ~onResponderGrant: Event.pressEvent => unit=?,
    ~onResponderMove: Event.pressEvent => unit=?,
    ~onResponderReject: Event.pressEvent => unit=?,
    ~onResponderRelease: Event.pressEvent => unit=?,
    ~onResponderStart: Event.pressEvent => unit=?,
    ~onResponderTerminate: Event.pressEvent => unit=?,
    ~onResponderTerminationRequest: Event.pressEvent => bool=?,
    ~onStartShouldSetResponder: Event.pressEvent => bool=?,
    ~onStartShouldSetResponderCapture: Event.pressEvent => bool=?,
    ~pointerEvents: [@mel.string] [
                      | `auto
                      | `none
                      | [@mel.as "box-none"] `boxNone
                      | [@mel.as "box-only"] `boxOnly
                    ]
                      =?,
    ~removeClippedSubviews: bool=?,
    ~renderToHardwareTextureAndroid: bool=?,
    ~shouldRasterizeIOS: bool=?,
    ~style: Style.t=?,
    ~testID: string=?,
    ~children: React.element=?,
    // React Native Web Props
    ~onMouseDown: React.Event.Mouse.t => unit=?,
    ~onMouseEnter: React.Event.Mouse.t => unit=?,
    ~onMouseLeave: React.Event.Mouse.t => unit=?,
    ~onMouseMove: React.Event.Mouse.t => unit=?,
    ~onMouseOver: React.Event.Mouse.t => unit=?,
    ~onMouseOut: React.Event.Mouse.t => unit=?,
    ~onMouseUp: React.Event.Mouse.t => unit=?
  ) =>
  React.element =
  "SectionList";
