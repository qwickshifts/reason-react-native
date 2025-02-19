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
module ActionSheetIOS = ActionSheetIOS;
module DynamicColorIOS = DynamicColorIOS;
module Settings = Settings;

// Components
module ActivityIndicator = ActivityIndicator;
module Button = Button;
module FlatList = FlatList;
module ScrollView = ScrollView;
module Text = Text;
module View = View;
module VirtualizedList = VirtualizedList;

// Types
module Accessibility = Accessibility;
module Color = Color;
module EventSubscription = EventSubscription;
module LayoutEvent = LayoutEvent;
module NativeEventSubscription = NativeEventSubscription;
module PressEvent = PressEvent;
module ReactNode = ReactNode;
module Rect = Rect;
module Ref = Ref;
module Style = Style;
module Viewability = Viewability;
