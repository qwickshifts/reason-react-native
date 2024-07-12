type emitterSubscription; // TODO: Grab this from the Emitter binding

type accessibilityChangeEventName = [
  | `change
  | `boldTextChanged
  | `grayscaleChanged
  | `invertColorsChanged
  | `reduceMotionChanged
  | `screenReaderChanged
  | `reduceTransparencyChanged
];

type accessibilityChangeEvent = bool;

type accessibilityChangeEventHandler = accessibilityChangeEvent => unit;

type accessibilityAnnouncementEventName = [ | `announcementFinished];

type accessibilityAnnouncementFinishedEvent = {
  announcement: string,
  success: bool,
};

type accessibilityAnnouncementFinishedEventHandler =
  accessibilityAnnouncementFinishedEvent => unit;

type accessibilityEventTypes = [ | `click | `focus | `viewHoverEnter];

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
external prefersCrossFadeTransitions: unit => Js.Promise.t(bool) =
  "prefersCrossFadeTransitions";

[@mel.scope "AccessibilityInfo"] [@mel.module "react-native"]
external isReduceTransparencyEnabled: unit => Js.Promise.t(bool) =
  "isReduceTransparencyEnabled";

[@mel.scope "AccessibilityInfo"] [@mel.module "react-native"]
external isScreenReaderEnabled: unit => Js.Promise.t(bool) =
  "isScreenReaderEnabled";

[@mel.scope "AccessibilityInfo"] [@mel.module "react-native"]
external isAccessibilityServiceEnabled: unit => Js.Promise.t(bool) =
  "isAccessibilityServiceEnabled";

[@mel.scope "AccessibilityInfo"] [@mel.module "react-native"]
external addAccessibilityChangeEventListener:
  (accessibilityChangeEventName, accessibilityChangeEventHandler) =>
  emitterSubscription =
  "addEventListener";

[@mel.scope "AccessibilityInfo"] [@mel.module "react-native"]
external addAccessibilityAnnouncementEventListener:
  (
    accessibilityAnnouncementEventName,
    accessibilityAnnouncementFinishedEventHandler
  ) =>
  emitterSubscription =
  "addEventListener";

[@mel.scope "AccessibilityInfo"] [@mel.module "react-native"]
external setAccessibilityFocus: int => unit = "setAccessibilityFocus";

[@mel.scope "AccessibilityInfo"] [@mel.module "react-native"]
external announceForAccessibility: string => unit = "announceForAccessibility";

type announceForAccessibilityOptions = {queue: option(bool)};
[@mel.scope "AccessibilityInfo"] [@mel.module "react-native"] // TODO: Make this pipe last
external announceForAccessibilityWithOptions:
  (string, announceForAccessibilityOptions) => unit =
  "announceForAccessibilityWithOptions";

[@mel.scope "AccessibilityInfo"] [@mel.module "react-native"]
external getRecommendedTimeoutMillis: int => Js.Promise.t(int) =
  "getRecommendedTimeoutMillis";

[@mel.scope "AccessibilityInfo"] [@mel.module "react-native"]
external sendAccessibilityEvent:
  (React.ref(React.element), accessibilityEventTypes) => unit =
  "sendAccessibilityEvent";
