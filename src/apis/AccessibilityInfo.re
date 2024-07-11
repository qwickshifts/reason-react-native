type announcementResult = {
  announcement: string,
  success: bool,
};

type announceForAccessibilityOptions = {queue: option(bool)};

[@mel.scope "AccessibilityInfo"] [@mel.module "react-native"]
external addEventListener:
  (
  [@mel.string]
  [
    | `accessibilityServiceChanged(bool => unit)
    | `boldTextChanged(bool => unit)
    | `grayscaleChanged(bool => unit)
    | `invertColorsChanged(bool => unit)
    | `reduceMotionChanged(bool => unit)
    | `screenReaderChanged(bool => unit)
    | `reduceTransparencyChanged(bool => unit)
    | `announcementFinished(announcementResult => unit)
  ]
  ) =>
  Js.Promise.t(unit) =
  "addEventListener";

[@mel.scope "AccessibilityInfo"] [@mel.module "react-native"]
external announceForAccessibility: string => unit = "announceForAccessibility";

[@mel.scope "AccessibilityInfo"] [@mel.module "react-native"]
external announceForAccessibilityWithOptions:
  (string, announceForAccessibilityOptions) => unit =
  "announceForAccessibilityWithOptions";

[@mel.scope "AccessibilityInfo"] [@mel.module "react-native"]
external getRecommendedTimeoutMillis: int => Js.Promise.t(int) =
  "getRecommendedTimeoutMillis";

[@mel.scope "AccessibilityInfo"] [@mel.module "react-native"]
external isAccessibilityServiceEnabled: unit => Js.Promise.t(bool) =
  "isAccessibilityServiceEnabled";

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
external prefersCrossFadeTransitions: unit => Js.Promise.t(bool) =
  "prefersCrossFadeTransitions";

[@mel.scope "AccessibilityInfo"] [@mel.module "react-native"]
external setAccessibilityFocus: NativeTypes.nodeHandle => unit =
  "setAccessibilityFocus";
