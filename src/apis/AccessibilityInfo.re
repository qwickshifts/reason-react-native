type emitterSubscription; // TODO: Get this from EventEmitter.re

type accessibilityChangeEventName =
  | Change // deprecated, maps to screenReaderChanged
  | BoldTextChanged // iOS-only Event
  | GrayscaleChanged // iOS-only Event
  | InvertColorsChanged // iOS-only Event
  | ReduceMotionChanged
  | ScreenReaderChanged
  | ReduceTransparencyChanged; // iOS-only Event

type accessibilityAnnouncementEventName =
  | AnnouncementFinished; // iOS-only Event

type eventName =
  | AccessibilityChangeEventName(accessibilityChangeEventName)
  | AccessibilityAnnouncementEventName(accessibilityAnnouncementEventName);

type accessibilityChangeEvent = bool;

type accessibilityAnnouncementFinishedEvent = {
  announcement: string,
  success: bool,
};

type event =
  | AccessibilityChangeEvent(accessibilityChangeEvent)
  | AccessibilityAnnouncementEvent(accessibilityAnnouncementFinishedEvent);

[@mel.scope "AccessibilityInfo"] [@mel.module "react-native"]
external addEventListener:
  (~eventName: eventName, ~handler: event => unit) => emitterSubscription =
  "addEventListener";

[@mel.scope "AccessibilityInfo"] [@mel.module "react-native"]
external announceForAccessibility: (~announcement: string) => unit =
  "announceForAccessibility";

type options = {queue: option(bool)};

[@mel.scope "AccessibilityInfo"] [@mel.module "react-native"]
external announceForAccessibilityWithOptions:
  (~announcement: string, ~options: options) => unit =
  "announceForAccessibility";

[@mel.scope "AccessibilityInfo"] [@mel.module "react-native"]
external getRecommendedTimeoutMillis:
  (~originalTimeout: int) => Js.Promise.t(int) =
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
external setAccessibilityFocus: (~reactTag: int) => unit =
  "setAccessibilityFocus";
