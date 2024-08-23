type t;

type size;
external dp: float => size = "%identity";
external pct: string => size = "%identity";
let pct = value => (value |> Js.Float.toString) ++ "%" |> pct;

[@deriving jsProperties]
type offset = {
  height: float,
  width: float,
};

[@mel.obj]
external imageProps:
  (
    ~backfaceVisibility: [ | `visible | `hidden]=?,
    ~backgroundColor: Color.t=?,
    ~borderBottomLeftRadius: float=?,
    ~borderBottomRightRadius: float=?,
    ~borderColor: Color.t=?,
    ~borderRadius: float=?,
    ~borderTopLeftRadius: float=?,
    ~borderTopRightRadius: float=?,
    ~borderWidth: float=?,
    ~opacity: float=?,
    ~overflow: [ | `visible | `hidden]=?,
    ~overlayColor: Color.t=?,
    ~resizeMode: [ | `cover | `contain | `stretch | `repeat | `center]=?,
    ~objectFit: [@mel.string] [
                  | `cover
                  | `contain
                  | `fill
                  | [@mel.as "scale-down"] `scaleDown
                ]
                  =?,
    ~tintColor: Color.t=?,
    unit
  ) =>
  t;

[@mel.obj]
external layoutProps:
  (
    ~alignContent: [@mel.string] [
                     | [@mel.as "flex-start"] `flexStart
                     | [@mel.as "flex-end"] `flexEnd
                     | `center
                     | `stretch
                     | [@mel.as "space-between"] `spaceBetween
                     | [@mel.as "space-around"] `spaceAround
                     | [@mel.as "space-evenly"] `spaceEvenly
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
    ~borderBottomWidth: float=?,
    ~borderEndWidth: float=?,
    ~borderLeftWidth: float=?,
    ~borderRightWidth: float=?,
    ~borderStartWidth: float=?,
    ~borderTopWidth: float=?,
    ~borderWidth: float=?,
    ~bottom: size=?,
    ~columnGap: float=?,
    ~direction: [@mel.string] [ | [@mel.as "inherit"] `inherit_ | `ltr | `rtl]
                  =?,
    ~display: [ | `none | `flex]=?,
    ~_end: size=?,
    ~flex: float=?,
    ~flexBasis: size=?,
    ~flexDirection: [@mel.string] [
                      | `row
                      | [@mel.as "row-reverse"] `rowReverse
                      | `column
                      | [@mel.as "column-reverse"] `columnReverse
                    ]
                      =?,
    ~flexGrow: float=?,
    ~flexShrink: float=?,
    ~flexWrap: [@mel.string] [
                 | `wrap
                 | `nowrap
                 | [@mel.as "wrap-reverse"] `wrapReverse
               ]
                 =?,
    ~gap: float=?,
    ~height: size=?,
    ~justifyContent: [@mel.string] [
                       | [@mel.as "flex-start"] `flexStart
                       | [@mel.as "flex-end"] `flexEnd
                       | `center
                       | [@mel.as "space-between"] `spaceBetween
                       | [@mel.as "space-around"] `spaceAround
                       | [@mel.as "space-evenly"] `spaceEvenly
                     ]
                       =?,
    ~left: size=?,
    ~margin: size=?,
    ~marginBottom: size=?,
    ~marginEnd: size=?,
    ~marginHorizontal: size=?,
    ~marginLeft: size=?,
    ~marginRight: size=?,
    ~marginStart: size=?,
    ~marginTop: size=?,
    ~marginVertical: size=?,
    ~maxHeight: size=?,
    ~maxWidth: size=?,
    ~minHeight: size=?,
    ~minWidth: size=?,
    ~overflow: [ | `visible | `hidden | `scroll]=?,
    ~padding: size=?,
    ~paddingBottom: size=?,
    ~paddingEnd: size=?,
    ~paddingHorizontal: size=?,
    ~paddingLeft: size=?,
    ~paddingRight: size=?,
    ~paddingStart: size=?,
    ~paddingTop: size=?,
    ~paddingVertical: size=?,
    ~position: [ | `absolute | `relative]=?,
    ~right: size=?,
    ~rowGap: float=?,
    ~start: size=?,
    ~top: size=?,
    ~width: size=?,
    ~zIndex: int=?,
    unit
  ) =>
  t;

[@mel.obj]
external shadowProps:
  (
    ~shadowColor: Color.t=?,
    ~shadowOffset: offset=?,
    ~shadowOpacity: float=?,
    ~shadowRadius: float=?,
    unit
  ) =>
  t;

[@mel.obj]
external textProps:
  (
    ~color: Color.t=?,
    ~fontFamily: string=?,
    ~fontSize: int=?,
    ~fontStyle: [ | `normal | `italic]=?,
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
    ~fontVariant: array(FontVariant.t)=?,
    ~letterSpacing: float=?,
    ~lineHeight: float=?,
    ~textAlign: [ | `auto | `left | `right | `center | `justify]=?,
    ~textAlignVertical: [ | `auto | `top | `bottom | `center]=?,
    ~textDecorationColor: Color.t=?,
    ~textDecorationLine: [@mel.string] [
                           | `none
                           | `underline
                           | [@mel.as "line-through"] `lineThrough
                           | [@mel.as "underline line-through"]
                             `underlineLineThrough
                         ]
                           =?,
    ~textDecorationStyle: [ | `solid | `double | `dotted | `dashed]=?,
    ~textShadowColor: Color.t=?,
    ~textShadowOffset: offset=?,
    ~textShadowRadius: float=?,
    ~textTransform: [ | `none | `uppercase | `lowercase | `capitalize]=?,
    ~verticalAlign: [ | `auto | `top | `bottom | `middle]=?,
    ~writingDirection: [ | `auto | `ltr | `rtl]=?,
    ~userSelect: [ | `auto | `text | `none | `contain | `all]=?,
    unit
  ) =>
  t;

[@mel.obj]
external viewProps:
  (
    ~backfaceVisibility: [ | `visible | `hidden]=?,
    ~backgroundColor: Color.t=?,
    ~borderBottomColor: Color.t=?,
    ~borderBottomEndRadius: float=?,
    ~borderBottomLeftRadius: float=?,
    ~borderBottomRightRadius: float=?,
    ~borderBottomStartRadius: float=?,
    ~borderStartEndRadius: float=?,
    ~borderStartStartRadius: float=?,
    ~borderEndEndRadius: float=?,
    ~borderEndStartRadius: float=?,
    ~borderBottomWidth: float=?,
    ~borderColor: Color.t=?,
    ~borderCurve: [ | `circular | `continuous]=?,
    ~borderEndColor: Color.t=?,
    ~borderLeftColor: Color.t=?,
    ~borderLeftWidth: float=?,
    ~borderRadius: float=?,
    ~borderRightColor: Color.t=?,
    ~borderRightWidth: float=?,
    ~borderStartColor: Color.t=?,
    ~borderStyle: [ | `solid | `dotted | `dashed]=?,
    ~borderTopColor: Color.t=?,
    ~borderTopEndRadius: float=?,
    ~borderTopLeftRadius: float=?,
    ~borderTopRightRadius: float=?,
    ~borderTopStartRadius: float=?,
    ~borderTopWidth: float=?,
    ~borderWidth: float=?,
    ~cursor: [ | `auto | `pointer]=?,
    ~elevation: float=?,
    ~opacity: float=?,
    ~pointerEvents: [@mel.string] [
                      | `auto
                      | [@mel.as "box-none"] `boxNone
                      | [@mel.as "box-only"] `boxOnly
                      | `none
                    ]
                      =?,
    unit
  ) =>
  t;

// Unsafe combination object for all style properties
[@mel.obj]
// Image props
external style:
  (
    ~backfaceVisibility: [ | `visible | `hidden]=?,
    ~backgroundColor: Color.t=?,
    ~borderBottomLeftRadius: float=?,
    ~borderBottomRightRadius: float=?,
    ~borderColor: Color.t=?,
    ~borderRadius: float=?,
    ~borderTopLeftRadius: float=?,
    ~borderTopRightRadius: float=?,
    ~borderWidth: float=?,
    ~opacity: float=?,
    ~overflow: [ | `visible | `hidden]=?,
    ~overlayColor: Color.t=?,
    ~resizeMode: [ | `cover | `contain | `stretch | `repeat | `center]=?,
    ~objectFit: [@mel.string] [
                  | `cover
                  | `contain
                  | `fill
                  | [@mel.as "scale-down"] `scaleDown
                ]
                  =?,
    ~tintColor: Color.t=?,
    // Layout props
    ~alignContent: [@mel.string] [
                     | [@mel.as "flex-start"] `flexStart
                     | [@mel.as "flex-end"] `flexEnd
                     | `center
                     | `stretch
                     | [@mel.as "space-between"] `spaceBetween
                     | [@mel.as "space-around"] `spaceAround
                     | [@mel.as "space-evenly"] `spaceEvenly
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
    ~borderBottomWidth: float=?,
    ~borderEndWidth: float=?,
    ~borderLeftWidth: float=?,
    ~borderRightWidth: float=?,
    ~borderStartWidth: float=?,
    ~borderTopWidth: float=?,
    ~borderWidth: float=?,
    ~bottom: size=?,
    ~columnGap: float=?,
    ~direction: [@mel.string] [ | [@mel.as "inherit"] `inherit_ | `ltr | `rtl]
                  =?,
    ~display: [ | `none | `flex]=?,
    ~_end: size=?,
    ~flex: float=?,
    ~flexBasis: size=?,
    ~flexDirection: [@mel.string] [
                      | `row
                      | [@mel.as "row-reverse"] `rowReverse
                      | `column
                      | [@mel.as "column-reverse"] `columnReverse
                    ]
                      =?,
    ~flexGrow: float=?,
    ~flexShrink: float=?,
    ~flexWrap: [@mel.string] [
                 | `wrap
                 | `nowrap
                 | [@mel.as "wrap-reverse"] `wrapReverse
               ]
                 =?,
    ~gap: float=?,
    ~height: size=?,
    ~justifyContent: [@mel.string] [
                       | [@mel.as "flex-start"] `flexStart
                       | [@mel.as "flex-end"] `flexEnd
                       | `center
                       | [@mel.as "space-between"] `spaceBetween
                       | [@mel.as "space-around"] `spaceAround
                       | [@mel.as "space-evenly"] `spaceEvenly
                     ]
                       =?,
    ~left: size=?,
    ~margin: size=?,
    ~marginBottom: size=?,
    ~marginEnd: size=?,
    ~marginHorizontal: size=?,
    ~marginLeft: size=?,
    ~marginRight: size=?,
    ~marginStart: size=?,
    ~marginTop: size=?,
    ~marginVertical: size=?,
    ~maxHeight: size=?,
    ~maxWidth: size=?,
    ~minHeight: size=?,
    ~minWidth: size=?,
    ~overflow: [ | `visible | `hidden | `scroll]=?,
    ~padding: size=?,
    ~paddingBottom: size=?,
    ~paddingEnd: size=?,
    ~paddingHorizontal: size=?,
    ~paddingLeft: size=?,
    ~paddingRight: size=?,
    ~paddingStart: size=?,
    ~paddingTop: size=?,
    ~paddingVertical: size=?,
    ~position: [ | `absolute | `relative]=?,
    ~right: size=?,
    ~rowGap: float=?,
    ~start: size=?,
    ~top: size=?,
    ~width: size=?,
    ~zIndex: int=?,
    // Shadow props
    ~shadowColor: Color.t=?,
    ~shadowOffset: offset=?,
    ~shadowOpacity: float=?,
    ~shadowRadius: float=?,
    // Text props
    ~color: Color.t=?,
    ~fontFamily: string=?,
    ~fontSize: int=?,
    ~fontStyle: [ | `normal | `italic]=?,
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
    ~fontVariant: array(FontVariant.t)=?,
    ~letterSpacing: float=?,
    ~lineHeight: float=?,
    ~textAlign: [ | `auto | `left | `right | `center | `justify]=?,
    ~textAlignVertical: [ | `auto | `top | `bottom | `center]=?,
    ~textDecorationColor: Color.t=?,
    ~textDecorationLine: [@mel.string] [
                           | `none
                           | `underline
                           | [@mel.as "line-through"] `lineThrough
                           | [@mel.as "underline line-through"]
                             `underlineLineThrough
                         ]
                           =?,
    ~textDecorationStyle: [ | `solid | `double | `dotted | `dashed]=?,
    ~textShadowColor: Color.t=?,
    ~textShadowOffset: offset=?,
    ~textShadowRadius: float=?,
    ~textTransform: [ | `none | `uppercase | `lowercase | `capitalize]=?,
    ~verticalAlign: [ | `auto | `top | `bottom | `middle]=?,
    ~writingDirection: [ | `auto | `ltr | `rtl]=?,
    ~userSelect: [ | `auto | `text | `none | `contain | `all]=?,
    // View props
    ~backfaceVisibility: [ | `visible | `hidden]=?,
    ~backgroundColor: Color.t=?,
    ~borderBottomColor: Color.t=?,
    ~borderBottomEndRadius: float=?,
    ~borderBottomLeftRadius: float=?,
    ~borderBottomRightRadius: float=?,
    ~borderBottomStartRadius: float=?,
    ~borderStartEndRadius: float=?,
    ~borderStartStartRadius: float=?,
    ~borderEndEndRadius: float=?,
    ~borderEndStartRadius: float=?,
    ~borderBottomWidth: float=?,
    ~borderColor: Color.t=?,
    ~borderCurve: [ | `circular | `continuous]=?,
    ~borderEndColor: Color.t=?,
    ~borderLeftColor: Color.t=?,
    ~borderLeftWidth: float=?,
    ~borderRadius: float=?,
    ~borderRightColor: Color.t=?,
    ~borderRightWidth: float=?,
    ~borderStartColor: Color.t=?,
    ~borderStyle: [ | `solid | `dotted | `dashed]=?,
    ~borderTopColor: Color.t=?,
    ~borderTopEndRadius: float=?,
    ~borderTopLeftRadius: float=?,
    ~borderTopRightRadius: float=?,
    ~borderTopStartRadius: float=?,
    ~borderTopWidth: float=?,
    ~borderWidth: float=?,
    ~cursor: [ | `auto | `pointer]=?,
    ~elevation: float=?,
    ~opacity: float=?,
    ~pointerEvents: [@mel.string] [
                      | `auto
                      | [@mel.as "box-none"] `boxNone
                      | [@mel.as "box-only"] `boxOnly
                      | `none
                    ]
                      =?,
    unit
  ) =>
  t;
