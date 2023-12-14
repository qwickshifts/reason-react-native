type announcementResult = {
  announcement: string,
  success: bool,
};

[@mel.scope "AccessibilityInfo"] [@mel.module "react-native"]
external isBoldTextEnabled: unit => Js.Promise.t(bool) = "isBoldTextEnabled";

[@mel.scope "AccessibilityInfo"] [@mel.module "react-native"]
external isGrayscaleEnabled: unit => Js.Promise.t(bool) =
  "isGrayscaleEnabled";

[@mel.scope "AccessibilityInfo"] [@mel.module "react-native"]
external isInvertColorsEnabled: unit => Js.Promise.t(bool) =
  "isInvertColorsEnabled";

[@mel.scope "AccessibilityInfo"] [@mel.module "react-native"]
external isReduceMotionEnabled: unit => Js.Promise.t(bool) =
  "isReduceMotionEnabled";

[@mel.scope "AccessibilityInfo"] [@mel.module "react-native"]
external isReduceTransparencyEnabled: unit => Js.Promise.t(bool) =
  "isReduceTransparencyEnabled";

[@mel.scope "AccessibilityInfo"] [@mel.module "react-native"]
external isScreenReaderEnabled: unit => Js.Promise.t(bool) =
  "isScreenReaderEnabled";

[@mel.scope "AccessibilityInfo"] [@mel.module "react-native"]
external setAccessibilityFocus: NativeTypes.nodeHandle => unit =
  "setAccessibilityFocus";

[@mel.scope "AccessibilityInfo"] [@mel.module "react-native"]
external announceForAccessibility: string => unit = "announceForAccessibility";

[@mel.scope "AccessibilityInfo"] [@mel.module "react-native"]
external addEventListener:
  (
  [@mel.string]
  [
    | `boldTextChanged(bool => unit)
    | `grayscaleChanged(bool => unit)
    | `invertColorsChanged(bool => unit)
    | `reduceMotionChanged(bool => unit)
    | `screenReaderChanged(bool => unit)
    | `reduceTransparencyChanged(bool => unit)
    | `announcementFinished(announcementResult => unit)
  ]
  ) =>
  unit =
  "addEventListener";

[@mel.scope "AccessibilityInfo"] [@mel.module "react-native"]
external removeEventListener:
  (
  [@mel.string]
  [
    | `boldTextChanged(bool => unit)
    | `grayscaleChanged(bool => unit)
    | `invertColorsChanged(bool => unit)
    | `reduceMotionChanged(bool => unit)
    | `screenReaderChanged(bool => unit)
    | `reduceTransparencyChanged(bool => unit)
    | `announcementFinished(announcementResult => unit)
  ]
  ) =>
  unit =
  "removeEventListener";
