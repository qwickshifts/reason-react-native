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

[@mel.module "AccessibilityInfo"]
external addEventListener:
  (~eventName: eventName, ~handler: event => unit) => emitterSubscription =
  "addEventListener";

[@mel.module "AccessibilityInfo"]
external announceForAccessibility: (~announcement: string) => unit =
  "announceForAccessibility";

type options = {queue: option(bool)};

[@mel.module "AccessibilityInfo"]
external announceForAccessibilityWithOptions:
  (~announcement: string, ~options: options) => unit =
  "announceForAccessibility";

[@mel.module "AccessibilityInfo"]
external getRecommendedTimeoutMillis:
  (~originalTimeout: int) => Js.Promise.t(int) =
  "getRecommendedTimeoutMillis";

[@mel.module "AccessibilityInfo"]
external isAccessibilityServiceEnabled: unit => Js.Promise.t(bool) =
  "isAccessibilityServiceEnabled";

[@mel.module "AccessibilityInfo"]
external isBoldTextEnabled: unit => Js.Promise.t(bool) = "isBoldTextEnabled";

[@mel.module "AccessibilityInfo"]
external isGrayscaleEnabled: unit => Js.Promise.t(bool) =
  "isGrayscaleEnabled";

[@mel.module "AccessibilityInfo"]
external isInvertColorsEnabled: unit => Js.Promise.t(bool) =
  "isInvertColorsEnabled";

[@mel.module "AccessibilityInfo"]
external isReduceMotionEnabled: unit => Js.Promise.t(bool) =
  "isReduceMotionEnabled";

[@mel.module "AccessibilityInfo"]
external isReduceTransparencyEnabled: unit => Js.Promise.t(bool) =
  "isReduceTransparencyEnabled";

[@mel.module "AccessibilityInfo"]
external isScreenReaderEnabled: unit => Js.Promise.t(bool) =
  "isScreenReaderEnabled";

external prefersCrossFadeTransitions: unit => Js.Promise.t(bool) =
  "prefersCrossFadeTransitions";

[@mel.module "AccessibilityInfo"]
external setAccessibilityFocus: (~reactTag: int) => unit =
  "setAccessibilityFocus";
