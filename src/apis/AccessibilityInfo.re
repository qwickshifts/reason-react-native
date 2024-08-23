type eventName = [
  | `accessibilityServiceChanged
  | `boldTextChanged
  | `grayscaleChanged
  | `invertColorsChanged
  | `reduceMotionChanged
  | `reduceTransparencyChanged
  | `screenReaderChanged
];

type announcementFinishedEvent = {
  announcement: string,
  success: bool,
};

[@deriving jsProperties]
type options = {
  [@mel.optional]
  queue: option(bool),
};

[@mel.module "react-native"] [@mel.scope "AccessibilityInfo"]
external addChangeEventListener:
  (eventName, bool => unit) => EventSubscription.t =
  "addEventListener";

[@mel.module "react-native"] [@mel.scope "AccessibilityInfo"]
external addAnnouncementEventListener:
  ([@mel.as "announcementFinished"] _, announcementFinishedEvent => unit) =>
  EventSubscription.t =
  "addEventListener";

[@mel.module "react-native"] [@mel.scope "AccessibilityInfo"]
external announceForAccessibility: string => unit = "announceForAccessibility";

[@mel.module "react-native"] [@mel.scope "AccessibilityInfo"]
external announceForAccessibilityWithOptions: (string, options) => unit =
  "announceForAccessibility";

[@mel.module "react-native"] [@mel.scope "AccessibilityInfo"]
external getRecommendedTimeoutMillis: int => Js.Promise.t(int) =
  "getRecommendedTimeoutMillis";

[@mel.module "react-native"] [@mel.scope "AccessibilityInfo"]
external isAccessibilityServiceEnabled: unit => Js.Promise.t(bool) =
  "isAccessibilityServiceEnabled";

[@mel.module "react-native"] [@mel.scope "AccessibilityInfo"]
external isBoldTextEnabled: unit => Js.Promise.t(bool) = "isBoldTextEnabled";

[@mel.module "react-native"] [@mel.scope "AccessibilityInfo"]
external isGrayscaleEnabled: unit => Js.Promise.t(bool) =
  "isGrayscaleEnabled";

[@mel.module "react-native"] [@mel.scope "AccessibilityInfo"]
external isInvertColorsEnabled: unit => Js.Promise.t(bool) =
  "isInvertColorsEnabled";

[@mel.module "react-native"] [@mel.scope "AccessibilityInfo"]
external isReduceMotionEnabled: unit => Js.Promise.t(bool) =
  "isReduceMotionEnabled";

[@mel.module "react-native"] [@mel.scope "AccessibilityInfo"]
external isReduceTransparencyEnabled: unit => Js.Promise.t(bool) =
  "isReduceTransparencyEnabled";

[@mel.module "react-native"] [@mel.scope "AccessibilityInfo"]
external isScreenReaderEnabled: unit => Js.Promise.t(bool) =
  "isScreenReaderEnabled";

[@mel.module "react-native"] [@mel.scope "AccessibilityInfo"]
external prefersCrossFadeTransitions: unit => Js.Promise.t(bool) =
  "prefersCrossFadeTransitions";

[@mel.module "react-native"] [@mel.scope "AccessibilityInfo"]
external setAccessibilityFocus: int => unit = "setAccessibilityFocus";
