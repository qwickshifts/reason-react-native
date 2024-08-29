// Hooks
[@mel.module "react-native"] [@mel.return nullable]
external useColorScheme: unit => option(Appearance.t) = "useColorScheme";

[@mel.module "react-native"]
external useWindowDimensions: unit => Dimensions.scaledSize =
  "useWindowDimensions";

// APIs
module AccessibilityInfo = AccessibilityInfo;
module Alert = Alert;
module Animated = Animated;
module Appearance = Appearance;
module AppRegistry = AppRegistry;
module AppState = AppState;
module DevSettings = DevSettings;
module Dimensions = Dimensions;
module Easing = Easing;
module InteractionManager = InteractionManager;
module Keyboard = Keyboard;
module LayoutAnimation = LayoutAnimation;
module Linking = Linking;
module PanResponder = PanResponder;
module PixelRatio = PixelRatio;
module Platform = Platform;
module PlatformColor = PlatformColor;
module RootTag = RootTag;
module Share = Share;
module StyleSheet = StyleSheet;
module Systrace = Systrace;
module Transforms = Transforms;
module Vibration = Vibration;

// Android APIs
module BackHandler = BackHandler;
module PermissionsAndroid = PermissionsAndroid;
module ToastAndroid = ToastAndroid;

// IOS APIs

// Components
module Button = Button;
module Text = Text;
module View = View;

// Types
module Accessibility = Accessibility;
module EventSubscription = EventSubscription;
module LayoutEvent = LayoutEvent;
module NativeEventSubscription = NativeEventSubscription;
module PressEvent = PressEvent;
module ReactNode = ReactNode;
module Rect = Rect;
module Ref = Ref;
module Style = Style;
module ViewToken = ViewToken;
