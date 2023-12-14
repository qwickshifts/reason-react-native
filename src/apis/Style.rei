type t;

external array: array(t) => t = "%identity";
external arrayOption: array(option(t)) => t = "%identity";
[@deprecated
  "Style.list has been deprecated in favor of Style.array (because it won't work with ReScript / BuckleScript 8.0.0)."
]
external list: list(t) => t = "%identity";
[@deprecated
  "Style.listOption has been deprecated in favor of Style.arrayOption (because it won't work with ReScript / BuckleScript 8.0.0)."
]
external listOption: list(option(t)) => t = "%identity";

external unsafeAddStyle: ([@mel.as {json|{}|json}] _, t, Js.t('a)) => t =
  "Object.assign";
external unsafeStyle: Js.t('a) => t = "%identity";

type size;

[@deprecated
  "Style.pt has been deprecated in favor of Style.dp (density-independent pixel)."
]
external pt: float => size = "%identity";

external dp: float => size = "%identity";

let pct: float => size;

type margin = size;

[@mel.inline "auto"]
let auto: margin;

type offset;
[@mel.obj] external offset: (~height: float, ~width: float) => offset;

type angle;
let deg: float => angle;
let rad: float => angle;

type transform;
[@mel.obj] external perspective: (~perspective: float) => transform;
[@mel.obj] external rotate: (~rotate: angle) => transform;
[@mel.obj] external rotateX: (~rotateX: angle) => transform;
[@mel.obj] external rotateY: (~rotateY: angle) => transform;
[@mel.obj] external rotateZ: (~rotateZ: angle) => transform;
[@mel.obj] external scale: (~scale: float) => transform;
[@mel.obj] external scaleX: (~scaleX: float) => transform;
[@mel.obj] external scaleY: (~scaleY: float) => transform;
[@mel.obj] external translateX: (~translateX: float) => transform;
[@mel.obj] external translateY: (~translateY: float) => transform;
[@mel.obj] external skewX: (~skewX: angle) => transform;
[@mel.obj] external skewY: (~skewY: angle) => transform;
// @todo matrix

external unsafeTransform: Js.t('a) => transform = "%identity";

type resizeMode = [ | `cover | `contain | `stretch | `repeat | `center];

type fontStyle = [ | `normal | `italic];

type textAlign = [ | `auto | `left | `right | `center | `justify];

type textAlignVertical = [ | `auto | `top | `bottom | `center];

type textDecorationStyle = [ | `solid | `double | `dotted | `dashed];

type textTransform = [ | `none | `uppercase | `lowercase | `capitalize];

type writingDirection = [ | `auto | `ltr | `rtl];

type backfaceVisibility = [ | `visible | `hidden];

type borderStyle = [ | `solid | `dotted | `dashed];

type display = [ | `none | `flex];

type overflow = [ | `visible | `hidden | `scroll];

type flexWrap = [ | `wrap | `nowrap];

type position = [ | `absolute | `relative];

// Styles are documented here
// https://github.com/facebook/react-native/blob/master/Libraries/StyleSheet/StyleSheetTypes.js

// Note that all border*Width are in layout styles & view styles too
// React Native JS codebase have those in View Styles Props again but with different types
// because layout styles props don't accept animated values.
// We don't do the distinction as ReasonML is an HMTS that doesn't support implicit subtyping

// ____DangerouslyImpreciseStyle_Internal
[@mel.obj]
// Dangerous Imprecise Style
// Contains all of
// - image style
// - text style
// - view style
// - transform style
// - shadow style
// - layout style
//
// *Comment below is supposed to be after the first ( below but refmt move it here*
// Image Style Props (https://reactnative.dev/docs/image-style-props)
external style:
  (
    ~resizeMode: resizeMode=?,
    ~overlayColor: Color.t=?,
    ~tintColor: Color.t=?,
    // Text Style Props (https://reactnative.dev/docs/text-style-props)
    ~color: Color.t=?,
    ~fontFamily: string=?,
    ~fontSize: float=?,
    ~fontStyle: fontStyle=?,
    ~fontVariant: array(FontVariant.t)=?,
    ~fontWeight: [@mel.string] [
                   | `normal
                   | `bold
                   | [@mel.as "100"] `_100
                   | [@mel.as "200"] `_200
                   | [@mel.as "300"] `_300
                   | [@mel.as "400"] `_400
                   | [@mel.as "500"] `_500
                   | [@mel.as "600"] `_600
                   | [@mel.as "700"] `_700
                   | [@mel.as "800"] `_800
                   | [@mel.as "900"] `_900
                 ]
                   =?,
    ~includeFontPadding: bool=?,
    ~letterSpacing: float=?,
    ~lineHeight: float=?,
    ~textAlign: textAlign=?,
    ~textAlignVertical: textAlignVertical=?,
    ~textDecorationColor: Color.t=?,
    ~textDecorationLine: [@mel.string] [
                           | `none
                           | `underline
                           | [@mel.as "line-through"] `lineThrough
                           | [@mel.as "underline line-through"]
                             `underlineLineThrough
                         ]
                           =?,
    ~textDecorationStyle: textDecorationStyle=?,
    ~textShadowColor: Color.t=?,
    ~textShadowOffset: offset=?,
    ~textShadowRadius: float=?,
    ~textTransform: textTransform=?,
    ~writingDirection: writingDirection=?,
    // View styles https://reactnative.dev/docs/view-style-props
    ~backfaceVisibility: backfaceVisibility=?,
    ~backgroundColor: Color.t=?,
    ~borderBottomColor: Color.t=?,
    ~borderBottomEndRadius: float=?,
    ~borderBottomLeftRadius: float=?,
    ~borderBottomRightRadius: float=?,
    ~borderBottomStartRadius: float=?,
    ~borderBottomWidth: float=?,
    ~borderColor: Color.t=?,
    ~borderEndColor: Color.t=?,
    ~borderEndWidth: float=?,
    ~borderLeftColor: Color.t=?,
    ~borderLeftWidth: float=?,
    ~borderRadius: float=?,
    ~borderRightColor: Color.t=?,
    ~borderRightWidth: float=?,
    ~borderStartColor: Color.t=?,
    ~borderStartWidth: float=?,
    ~borderStyle: borderStyle=?,
    ~borderTopColor: Color.t=?,
    ~borderTopEndRadius: float=?,
    ~borderTopLeftRadius: float=?,
    ~borderTopRightRadius: float=?,
    ~borderTopStartRadius: float=?,
    ~borderTopWidth: float=?,
    ~borderWidth: float=?,
    ~elevation: float=?,
    ~opacity: float=?,
    // Transform Props (https://reactnative.dev/docs/transforms#props)
    ~transform: array(transform)=?, // all other transform props are deprecated
    // Shadow Props (https://reactnative.dev/docs/shadow-props)
    ~shadowColor: Color.t=?,
    ~shadowOffset: offset=?,
    ~shadowOpacity: float=?,
    ~shadowRadius: float=?,
    // Layout Style Props (https://reactnative.dev/docs/layout-props)
    ~alignContent: [@mel.string] [
                     | [@mel.as "flex-start"] `flexStart
                     | [@mel.as "flex-end"] `flexEnd
                     | `center
                     | `stretch
                     | [@mel.as "space-around"] `spaceAround
                     | [@mel.as "space-between"] `spaceBetween
                   ]
                     =?,
    ~alignItems: [@mel.string] [
                   | [@mel.as "flex-start"] `flexStart
                   | [@mel.as "flex-end"] `flexEnd
                   | `center
                   | `stretch
                   | `baseline
                 ]
                   =?,
    ~alignSelf: [@mel.string] [
                  | `auto
                  | [@mel.as "flex-start"] `flexStart
                  | [@mel.as "flex-end"] `flexEnd
                  | `center
                  | `stretch
                  | `baseline
                ]
                  =?,
    ~aspectRatio: float=?,
    // border*Width are commented because already in view styles props (see explanation at the top)
    // ~borderBottomWidth: float=?,
    // ~borderEndWidth: float=?,
    // ~borderLeftWidth: float=?,
    // ~borderRightWidth: float=?,
    // ~borderStartWidth: float=?,
    // ~borderTopWidth: float=?,
    // ~borderWidth: float=?,
    ~bottom: size=?,
    ~direction: [@mel.string] [ | [@mel.as "inherit"] `inherit_ | `ltr | `rtl]=?,
    ~display: display=?,
    ~_end: size=?,
    ~flex: float=?,
    ~flexBasis: margin=?,
    ~flexDirection: [@mel.string] [
                      | `row
                      | [@mel.as "row-reverse"] `rowReverse
                      | `column
                      | [@mel.as "column-reverse"] `columnReverse
                    ]
                      =?,
    ~flexGrow: float=?,
    ~flexShrink: float=?,
    ~flexWrap: flexWrap=?,
    ~height: size=?,
    ~justifyContent: [@mel.string] [
                       | [@mel.as "flex-start"] `flexStart
                       | [@mel.as "flex-end"] `flexEnd
                       | `center
                       | [@mel.as "space-around"] `spaceAround
                       | [@mel.as "space-between"] `spaceBetween
                       | [@mel.as "space-evenly"] `spaceEvenly
                     ]
                       =?,
    ~left: size=?,
    ~margin: margin=?,
    ~marginBottom: margin=?,
    ~marginEnd: margin=?,
    ~marginHorizontal: margin=?,
    ~marginLeft: margin=?,
    ~marginRight: margin=?,
    ~marginStart: margin=?,
    ~marginTop: margin=?,
    ~marginVertical: margin=?,
    ~maxHeight: size=?,
    ~maxWidth: size=?,
    ~minHeight: size=?,
    ~minWidth: size=?,
    ~overflow: overflow=?,
    ~padding: size=?,
    ~paddingBottom: size=?,
    ~paddingEnd: size=?,
    ~paddingHorizontal: size=?,
    ~paddingLeft: size=?,
    ~paddingRight: size=?,
    ~paddingStart: size=?,
    ~paddingTop: size=?,
    ~paddingVertical: size=?,
    ~position: position=?,
    ~right: size=?,
    ~start: size=?,
    ~top: size=?,
    ~width: size=?,
    ~zIndex: int=?,
    unit
  ) =>
  t;

// ____ViewStyleProp_Internal
[@mel.obj]
// *Comment below is supposed to be after the first ( below but refmt move it here*
// View styles https://reactnative.dev/docs/view-style-props
external viewStyle:
  (
    ~backfaceVisibility: backfaceVisibility=?,
    ~backgroundColor: Color.t=?,
    ~borderBottomColor: Color.t=?,
    ~borderBottomEndRadius: float=?,
    ~borderBottomLeftRadius: float=?,
    ~borderBottomRightRadius: float=?,
    ~borderBottomStartRadius: float=?,
    ~borderBottomWidth: float=?,
    ~borderColor: Color.t=?,
    ~borderEndColor: Color.t=?,
    ~borderEndWidth: float=?,
    ~borderLeftColor: Color.t=?,
    ~borderLeftWidth: float=?,
    ~borderRadius: float=?,
    ~borderRightColor: Color.t=?,
    ~borderRightWidth: float=?,
    ~borderStartColor: Color.t=?,
    ~borderStartWidth: float=?,
    ~borderStyle: borderStyle=?,
    ~borderTopColor: Color.t=?,
    ~borderTopEndRadius: float=?,
    ~borderTopLeftRadius: float=?,
    ~borderTopRightRadius: float=?,
    ~borderTopStartRadius: float=?,
    ~borderTopWidth: float=?,
    ~borderWidth: float=?,
    ~elevation: float=?,
    ~opacity: float=?,
    // Transform Props (https://reactnative.dev/docs/transforms#props)
    ~transform: array(transform)=?, // all other transform props are deprecated
    // Shadow Props (https://reactnative.dev/docs/shadow-props)
    ~shadowColor: Color.t=?,
    ~shadowOffset: offset=?,
    ~shadowOpacity: float=?,
    ~shadowRadius: float=?,
    // Layout Style Props (https://reactnative.dev/docs/layout-props)
    ~alignContent: [@mel.string] [
                     | [@mel.as "flex-start"] `flexStart
                     | [@mel.as "flex-end"] `flexEnd
                     | `center
                     | `stretch
                     | [@mel.as "space-around"] `spaceAround
                     | [@mel.as "space-between"] `spaceBetween
                   ]
                     =?,
    ~alignItems: [@mel.string] [
                   | [@mel.as "flex-start"] `flexStart
                   | [@mel.as "flex-end"] `flexEnd
                   | `center
                   | `stretch
                   | `baseline
                 ]
                   =?,
    ~alignSelf: [@mel.string] [
                  | `auto
                  | [@mel.as "flex-start"] `flexStart
                  | [@mel.as "flex-end"] `flexEnd
                  | `center
                  | `stretch
                  | `baseline
                ]
                  =?,
    ~aspectRatio: float=?,
    // border*Width are commented because already in view styles props (see explanation at the top)
    // ~borderBottomWidth: float=?,
    // ~borderEndWidth: float=?,
    // ~borderLeftWidth: float=?,
    // ~borderRightWidth: float=?,
    // ~borderStartWidth: float=?,
    // ~borderTopWidth: float=?,
    // ~borderWidth: float=?,
    ~bottom: size=?,
    ~direction: [@mel.string] [ | [@mel.as "inherit"] `inherit_ | `ltr | `rtl]=?,
    ~display: display=?,
    ~_end: size=?,
    ~flex: float=?,
    ~flexBasis: margin=?,
    ~flexDirection: [@mel.string] [
                      | `row
                      | [@mel.as "row-reverse"] `rowReverse
                      | `column
                      | [@mel.as "column-reverse"] `columnReverse
                    ]
                      =?,
    ~flexGrow: float=?,
    ~flexShrink: float=?,
    ~flexWrap: flexWrap=?,
    ~height: size=?,
    ~justifyContent: [@mel.string] [
                       | [@mel.as "flex-start"] `flexStart
                       | [@mel.as "flex-end"] `flexEnd
                       | `center
                       | [@mel.as "space-around"] `spaceAround
                       | [@mel.as "space-between"] `spaceBetween
                       | [@mel.as "space-evenly"] `spaceEvenly
                     ]
                       =?,
    ~left: size=?,
    ~margin: margin=?,
    ~marginBottom: margin=?,
    ~marginEnd: margin=?,
    ~marginHorizontal: margin=?,
    ~marginLeft: margin=?,
    ~marginRight: margin=?,
    ~marginStart: margin=?,
    ~marginTop: margin=?,
    ~marginVertical: margin=?,
    ~maxHeight: size=?,
    ~maxWidth: size=?,
    ~minHeight: size=?,
    ~minWidth: size=?,
    ~overflow: overflow=?,
    ~padding: size=?,
    ~paddingBottom: size=?,
    ~paddingEnd: size=?,
    ~paddingHorizontal: size=?,
    ~paddingLeft: size=?,
    ~paddingRight: size=?,
    ~paddingStart: size=?,
    ~paddingTop: size=?,
    ~paddingVertical: size=?,
    ~position: position=?,
    ~right: size=?,
    ~start: size=?,
    ~top: size=?,
    ~width: size=?,
    ~zIndex: int=?,
    unit
  ) =>
  t;

// ____TextStyleProp_Internal
[@mel.obj]
// Text Style Props (https://reactnative.dev/docs/text-style-props)
external textStyle:
  (
    ~color: Color.t=?,
    ~fontFamily: string=?,
    ~fontSize: float=?,
    ~fontStyle: fontStyle=?,
    ~fontVariant: array(FontVariant.t)=?,
    ~fontWeight: [@mel.string] [
                   | `normal
                   | `bold
                   | [@mel.as "100"] `_100
                   | [@mel.as "200"] `_200
                   | [@mel.as "300"] `_300
                   | [@mel.as "400"] `_400
                   | [@mel.as "500"] `_500
                   | [@mel.as "600"] `_600
                   | [@mel.as "700"] `_700
                   | [@mel.as "800"] `_800
                   | [@mel.as "900"] `_900
                 ]
                   =?,
    ~includeFontPadding: bool=?,
    ~letterSpacing: float=?,
    ~lineHeight: float=?,
    ~textAlign: textAlign=?,
    ~textAlignVertical: textAlignVertical=?,
    ~textDecorationColor: Color.t=?,
    ~textDecorationLine: [@mel.string] [
                           | `none
                           | `underline
                           | [@mel.as "line-through"] `lineThrough
                           | [@mel.as "underline line-through"]
                             `underlineLineThrough
                         ]
                           =?,
    ~textDecorationStyle: textDecorationStyle=?,
    ~textShadowColor: Color.t=?,
    ~textShadowOffset: offset=?,
    ~textShadowRadius: float=?,
    ~textTransform: textTransform=?,
    ~writingDirection: writingDirection=?,
    // View styles https://reactnative.dev/docs/view-style-props
    ~backfaceVisibility: backfaceVisibility=?,
    ~backgroundColor: Color.t=?,
    ~borderBottomColor: Color.t=?,
    ~borderBottomEndRadius: float=?,
    ~borderBottomLeftRadius: float=?,
    ~borderBottomRightRadius: float=?,
    ~borderBottomStartRadius: float=?,
    ~borderBottomWidth: float=?,
    ~borderColor: Color.t=?,
    ~borderEndColor: Color.t=?,
    ~borderEndWidth: float=?,
    ~borderLeftColor: Color.t=?,
    ~borderLeftWidth: float=?,
    ~borderRadius: float=?,
    ~borderRightColor: Color.t=?,
    ~borderRightWidth: float=?,
    ~borderStartColor: Color.t=?,
    ~borderStartWidth: float=?,
    ~borderStyle: borderStyle=?,
    ~borderTopColor: Color.t=?,
    ~borderTopEndRadius: float=?,
    ~borderTopLeftRadius: float=?,
    ~borderTopRightRadius: float=?,
    ~borderTopStartRadius: float=?,
    ~borderTopWidth: float=?,
    ~borderWidth: float=?,
    ~elevation: float=?,
    ~opacity: float=?,
    // Transform Props (https://reactnative.dev/docs/transforms#props)
    ~transform: array(transform)=?, // all other transform props are deprecated
    // Shadow Props (https://reactnative.dev/docs/shadow-props)
    ~shadowColor: Color.t=?,
    ~shadowOffset: offset=?,
    ~shadowOpacity: float=?,
    ~shadowRadius: float=?,
    // Layout Style Props (https://reactnative.dev/docs/layout-props)
    ~alignContent: [@mel.string] [
                     | [@mel.as "flex-start"] `flexStart
                     | [@mel.as "flex-end"] `flexEnd
                     | `center
                     | `stretch
                     | [@mel.as "space-around"] `spaceAround
                     | [@mel.as "space-between"] `spaceBetween
                   ]
                     =?,
    ~alignItems: [@mel.string] [
                   | [@mel.as "flex-start"] `flexStart
                   | [@mel.as "flex-end"] `flexEnd
                   | `center
                   | `stretch
                   | `baseline
                 ]
                   =?,
    ~alignSelf: [@mel.string] [
                  | `auto
                  | [@mel.as "flex-start"] `flexStart
                  | [@mel.as "flex-end"] `flexEnd
                  | `center
                  | `stretch
                  | `baseline
                ]
                  =?,
    ~aspectRatio: float=?,
    // border*Width are commented because already in view styles props (see explanation at the top)
    // ~borderBottomWidth: float=?,
    // ~borderEndWidth: float=?,
    // ~borderLeftWidth: float=?,
    // ~borderRightWidth: float=?,
    // ~borderStartWidth: float=?,
    // ~borderTopWidth: float=?,
    // ~borderWidth: float=?,
    ~bottom: size=?,
    ~direction: [@mel.string] [ | [@mel.as "inherit"] `inherit_ | `ltr | `rtl]=?,
    ~display: display=?,
    ~_end: size=?,
    ~flex: float=?,
    ~flexBasis: margin=?,
    ~flexDirection: [@mel.string] [
                      | `row
                      | [@mel.as "row-reverse"] `rowReverse
                      | `column
                      | [@mel.as "column-reverse"] `columnReverse
                    ]
                      =?,
    ~flexGrow: float=?,
    ~flexShrink: float=?,
    ~flexWrap: flexWrap=?,
    ~height: size=?,
    ~justifyContent: [@mel.string] [
                       | [@mel.as "flex-start"] `flexStart
                       | [@mel.as "flex-end"] `flexEnd
                       | `center
                       | [@mel.as "space-around"] `spaceAround
                       | [@mel.as "space-between"] `spaceBetween
                       | [@mel.as "space-evenly"] `spaceEvenly
                     ]
                       =?,
    ~left: size=?,
    ~margin: margin=?,
    ~marginBottom: margin=?,
    ~marginEnd: margin=?,
    ~marginHorizontal: margin=?,
    ~marginLeft: margin=?,
    ~marginRight: margin=?,
    ~marginStart: margin=?,
    ~marginTop: margin=?,
    ~marginVertical: margin=?,
    ~maxHeight: size=?,
    ~maxWidth: size=?,
    ~minHeight: size=?,
    ~minWidth: size=?,
    ~overflow: overflow=?,
    ~padding: size=?,
    ~paddingBottom: size=?,
    ~paddingEnd: size=?,
    ~paddingHorizontal: size=?,
    ~paddingLeft: size=?,
    ~paddingRight: size=?,
    ~paddingStart: size=?,
    ~paddingTop: size=?,
    ~paddingVertical: size=?,
    ~position: position=?,
    ~right: size=?,
    ~start: size=?,
    ~top: size=?,
    ~width: size=?,
    ~zIndex: int=?,
    unit
  ) =>
  t;

// ____ImageStyleProp_Internal
[@mel.obj]
// Image Style Props (https://reactnative.dev/docs/image-style-props)
external imageStyle:
  (
    ~resizeMode: resizeMode=?,
    ~overlayColor: Color.t=?,
    ~tintColor: Color.t=?,
    // View styles https://reactnative.dev/docs/view-style-props
    ~backfaceVisibility: backfaceVisibility=?,
    ~backgroundColor: Color.t=?,
    ~borderBottomColor: Color.t=?,
    ~borderBottomEndRadius: float=?,
    ~borderBottomLeftRadius: float=?,
    ~borderBottomRightRadius: float=?,
    ~borderBottomStartRadius: float=?,
    ~borderBottomWidth: float=?,
    ~borderColor: Color.t=?,
    ~borderEndColor: Color.t=?,
    ~borderEndWidth: float=?,
    ~borderLeftColor: Color.t=?,
    ~borderLeftWidth: float=?,
    ~borderRadius: float=?,
    ~borderRightColor: Color.t=?,
    ~borderRightWidth: float=?,
    ~borderStartColor: Color.t=?,
    ~borderStartWidth: float=?,
    ~borderStyle: borderStyle=?,
    ~borderTopColor: Color.t=?,
    ~borderTopEndRadius: float=?,
    ~borderTopLeftRadius: float=?,
    ~borderTopRightRadius: float=?,
    ~borderTopStartRadius: float=?,
    ~borderTopWidth: float=?,
    ~borderWidth: float=?,
    ~elevation: float=?,
    ~opacity: float=?,
    // Transform Props (https://reactnative.dev/docs/transforms#props)
    ~transform: array(transform)=?, // all other transform props are deprecated
    // Shadow Props (https://reactnative.dev/docs/shadow-props)
    ~shadowColor: Color.t=?,
    ~shadowOffset: offset=?,
    ~shadowOpacity: float=?,
    ~shadowRadius: float=?,
    // Layout Style Props (https://reactnative.dev/docs/layout-props)
    ~alignContent: [@mel.string] [
                     | [@mel.as "flex-start"] `flexStart
                     | [@mel.as "flex-end"] `flexEnd
                     | `center
                     | `stretch
                     | [@mel.as "space-around"] `spaceAround
                     | [@mel.as "space-between"] `spaceBetween
                   ]
                     =?,
    ~alignItems: [@mel.string] [
                   | [@mel.as "flex-start"] `flexStart
                   | [@mel.as "flex-end"] `flexEnd
                   | `center
                   | `stretch
                   | `baseline
                 ]
                   =?,
    ~alignSelf: [@mel.string] [
                  | `auto
                  | [@mel.as "flex-start"] `flexStart
                  | [@mel.as "flex-end"] `flexEnd
                  | `center
                  | `stretch
                  | `baseline
                ]
                  =?,
    ~aspectRatio: float=?,
    // border*Width are commented because already in view styles props (see explanation at the top)
    // ~borderBottomWidth: float=?,
    // ~borderEndWidth: float=?,
    // ~borderLeftWidth: float=?,
    // ~borderRightWidth: float=?,
    // ~borderStartWidth: float=?,
    // ~borderTopWidth: float=?,
    // ~borderWidth: float=?,
    ~bottom: size=?,
    ~direction: [@mel.string] [ | [@mel.as "inherit"] `inherit_ | `ltr | `rtl]=?,
    ~display: display=?,
    ~_end: size=?,
    ~flex: float=?,
    ~flexBasis: margin=?,
    ~flexDirection: [@mel.string] [
                      | `row
                      | [@mel.as "row-reverse"] `rowReverse
                      | `column
                      | [@mel.as "column-reverse"] `columnReverse
                    ]
                      =?,
    ~flexGrow: float=?,
    ~flexShrink: float=?,
    ~flexWrap: flexWrap=?,
    ~height: size=?,
    ~justifyContent: [@mel.string] [
                       | [@mel.as "flex-start"] `flexStart
                       | [@mel.as "flex-end"] `flexEnd
                       | `center
                       | [@mel.as "space-around"] `spaceAround
                       | [@mel.as "space-between"] `spaceBetween
                       | [@mel.as "space-evenly"] `spaceEvenly
                     ]
                       =?,
    ~left: size=?,
    ~margin: margin=?,
    ~marginBottom: margin=?,
    ~marginEnd: margin=?,
    ~marginHorizontal: margin=?,
    ~marginLeft: margin=?,
    ~marginRight: margin=?,
    ~marginStart: margin=?,
    ~marginTop: margin=?,
    ~marginVertical: margin=?,
    ~maxHeight: size=?,
    ~maxWidth: size=?,
    ~minHeight: size=?,
    ~minWidth: size=?,
    ~overflow: overflow=?,
    ~padding: size=?,
    ~paddingBottom: size=?,
    ~paddingEnd: size=?,
    ~paddingHorizontal: size=?,
    ~paddingLeft: size=?,
    ~paddingRight: size=?,
    ~paddingStart: size=?,
    ~paddingTop: size=?,
    ~paddingVertical: size=?,
    ~position: position=?,
    ~right: size=?,
    ~start: size=?,
    ~top: size=?,
    ~width: size=?,
    ~zIndex: int=?,
    unit
  ) =>
  t;
