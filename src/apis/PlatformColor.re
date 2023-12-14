[@mel.module "react-native"]
external unsafeGet: string => Color.t = "PlatformColor";

[@mel.module "react-native"]
external unsafeGet2: (string, string) => Color.t = "PlatformColor";

[@mel.module "react-native"]
external unsafeGet3: (string, string, string) => Color.t = "PlatformColor";

[@mel.module "react-native"]
external unsafeGet4: (string, string, string, string) => Color.t =
  "PlatformColor";

[@mel.module "react-native"]
external unsafeGet5: (string, string, string, string, string) => Color.t =
  "PlatformColor";

[@mel.module "react-native"]
external unsafeGet6:
  (string, string, string, string, string, string) => Color.t =
  "PlatformColor";

[@mel.module "react-native"]
external unsafeGet7:
  (string, string, string, string, string, string, string) => Color.t =
  "PlatformColor";

[@mel.module "react-native"] [@mel.variadic]
external unsafeGetMultiple: array(string) => Color.t = "PlatformColor";

module Ios = {
  type t = [
    | `clear
    | `darkText
    | `label
    | `lightText
    | `link
    | `opaqueSeparator
    | `placeholderText
    | `quaternaryLabel
    | `quaternarySystemFill
    | `secondaryLabel
    | `secondarySystemBackground
    | `secondarySystemFill
    | `secondarySystemGroupedBackground
    | `separator
    | `systemBackground
    | `systemFill
    | `systemGroupedBackground
    | `tertiaryLabel
    | `tertiarySystemBackground
    | `tertiarySystemFill
    | `tertiarySystemGroupedBackground
  ];
  [@mel.module "react-native"] external get: t => Color.t = "PlatformColor";
  [@mel.module "react-native"]
  external get2: (t, t) => Color.t = "PlatformColor";
  [@mel.module "react-native"]
  external get3: (t, t, t) => Color.t = "PlatformColor";
  [@mel.module "react-native"]
  external get4: (t, t, t, t) => Color.t = "PlatformColor";
  [@mel.module "react-native"]
  external get5: (t, t, t, t, t) => Color.t = "PlatformColor";
  [@mel.module "react-native"]
  external get6: (t, t, t, t, t, t) => Color.t = "PlatformColor";
  [@mel.module "react-native"]
  external get7: (t, t, t, t, t, t) => Color.t = "PlatformColor";
};

[@deprecated "Please PlatformColor.Ios instead of PlatformColor.IOS"]
module IOS = Ios;
module Android = {
  [@deprecated
    "Please use PlatformColor.unsafeGet instead of PlatformColor.Android.unsafeGet"
  ]
  [@mel.module "react-native"]
  external unsafeGet: string => Color.t = "PlatformColor";

  [@mel.module "react-native"]
  external getColor:
    (
    [@mel.string]
    [
      | [@mel.as "@android:color/background_dark"] `background_dark
      | [@mel.as "@android:color/background_light"] `background_light
      | [@mel.as "@android:color/black"] `black
      | [@mel.as "@android:color/darker_gray"] `darker_gray
      | [@mel.as "@android:color/holo_blue_bright"] `holo_blue_bright
      | [@mel.as "@android:color/holo_blue_dark"] `holo_blue_dark
      | [@mel.as "@android:color/holo_blue_light"] `holo_blue_light
      | [@mel.as "@android:color/holo_green_dark"] `holo_green_dark
      | [@mel.as "@android:color/holo_green_light"] `holo_green_light
      | [@mel.as "@android:color/holo_orange_dark"] `holo_orange_dark
      | [@mel.as "@android:color/holo_orange_light"] `holo_orange_light
      | [@mel.as "@android:color/holo_purple"] `holo_purple
      | [@mel.as "@android:color/holo_red_dark"] `holo_red_dark
      | [@mel.as "@android:color/holo_red_light"] `holo_red_light
      | [@mel.as "@android:color/primary_text_dark"] `primary_text_dark
      | [@mel.as "@android:color/primary_text_dark_nodisable"]
        `primary_text_dark_nodisable
      | [@mel.as "@android:color/primary_text_light"] `primary_text_light
      | [@mel.as "@android:color/primary_text_light_nodisable"]
        `primary_text_light_nodisable
      | [@mel.as "@android:color/secondary_text_dark"] `secondary_text_dark
      | [@mel.as "@android:color/secondary_text_dark_nodisable"]
        `secondary_text_dark_nodisable
      | [@mel.as "@android:color/secondary_text_light"] `secondary_text_light
      | [@mel.as "@android:color/secondary_text_light_nodisable"]
        `secondary_text_light_nodisable
      | [@mel.as "@android:color/tab_indicator_text"] `tab_indicator_text
      | [@mel.as "@android:color/tertiary_text_dark"] `tertiary_text_dark
      | [@mel.as "@android:color/tertiary_text_light"] `tertiary_text_light
      | [@mel.as "@android:color/transparent"] `transparent
      | [@mel.as "@android:color/white"] `white
      | [@mel.as "@android:color/widget_edittext_dark"] `widget_edittext_dark
    ]
    ) =>
    Color.t =
    "PlatformColor";

  [@mel.module "react-native"]
  external getAttr:
    (
    [@mel.string]
    [
      | [@mel.as "?android:attr/colorAccent"] `colorAccent
      | [@mel.as "?android:attr/colorActivatedHighlight"]
        `colorActivatedHighlight
      | [@mel.as "?android:attr/colorBackground"] `colorBackground
      | [@mel.as "?android:attr/colorBackgroundFloating"]
        `colorBackgroundFloating
      | [@mel.as "?android:attr/colorButtonNormal"] `colorButtonNormal
      | [@mel.as "?android:attr/colorControlHighlight"] `colorControlHighlight
      | [@mel.as "?android:attr/colorControlNormal"] `colorControlNormal
      | [@mel.as "?android:attr/colorEdgeEffect"] `colorEdgeEffect
      | [@mel.as "?android:attr/colorError"] `colorError
      | [@mel.as "?android:attr/colorFocusedHighlight"] `colorFocusedHighlight
      | [@mel.as "?android:attr/colorForeground"] `colorForeground
      | [@mel.as "?android:attr/colorForegroundInverse"] `colorForegroundInverse
      | [@mel.as "?android:attr/colorLongPressedHighlight"]
        `colorLongPressedHighlight
      | [@mel.as "?android:attr/colorMultiSelectHighlight"]
        `colorMultiSelectHighlight
      | [@mel.as "?android:attr/colorPressedHighlight"] `colorPressedHighlight
      | [@mel.as "?android:attr/colorPrimary"] `colorPrimary
      | [@mel.as "?android:attr/colorPrimaryDark"] `colorPrimaryDark
      | [@mel.as "?android:attr/colorSecondary"] `colorSecondary
    ]
    ) =>
    Color.t =
    "PlatformColor";

  [@mel.module "react-native"]
  external get:
    (
      [@mel.string] [
        | [@mel.as "@android:color/background_dark"] `background_dark
        | [@mel.as "@android:color/background_light"] `background_light
        | [@mel.as "@android:color/black"] `black
        | [@mel.as "@android:color/darker_gray"] `darker_gray
        | [@mel.as "@android:color/holo_blue_bright"] `holo_blue_bright
        | [@mel.as "@android:color/holo_blue_dark"] `holo_blue_dark
        | [@mel.as "@android:color/holo_blue_light"] `holo_blue_light
        | [@mel.as "@android:color/holo_green_dark"] `holo_green_dark
        | [@mel.as "@android:color/holo_green_light"] `holo_green_light
        | [@mel.as "@android:color/holo_orange_dark"] `holo_orange_dark
        | [@mel.as "@android:color/holo_orange_light"] `holo_orange_light
        | [@mel.as "@android:color/holo_purple"] `holo_purple
        | [@mel.as "@android:color/holo_red_dark"] `holo_red_dark
        | [@mel.as "@android:color/holo_red_light"] `holo_red_light
        | [@mel.as "@android:color/primary_text_dark"] `primary_text_dark
        | [@mel.as "@android:color/primary_text_dark_nodisable"]
          `primary_text_dark_nodisable
        | [@mel.as "@android:color/primary_text_light"] `primary_text_light
        | [@mel.as "@android:color/primary_text_light_nodisable"]
          `primary_text_light_nodisable
        | [@mel.as "@android:color/secondary_text_dark"] `secondary_text_dark
        | [@mel.as "@android:color/secondary_text_dark_nodisable"]
          `secondary_text_dark_nodisable
        | [@mel.as "@android:color/secondary_text_light"] `secondary_text_light
        | [@mel.as "@android:color/secondary_text_light_nodisable"]
          `secondary_text_light_nodisable
        | [@mel.as "@android:color/tab_indicator_text"] `tab_indicator_text
        | [@mel.as "@android:color/tertiary_text_dark"] `tertiary_text_dark
        | [@mel.as "@android:color/tertiary_text_light"] `tertiary_text_light
        | [@mel.as "@android:color/transparent"] `transparent
        | [@mel.as "@android:color/white"] `white
        | [@mel.as "@android:color/widget_edittext_dark"] `widget_edittext_dark
        | [@mel.as "?android:attr/colorAccent"] `colorAccent
        | [@mel.as "?android:attr/colorActivatedHighlight"]
          `colorActivatedHighlight
        | [@mel.as "?android:attr/colorBackground"] `colorBackground
        | [@mel.as "?android:attr/colorBackgroundFloating"]
          `colorBackgroundFloating
        | [@mel.as "?android:attr/colorButtonNormal"] `colorButtonNormal
        | [@mel.as "?android:attr/colorControlHighlight"] `colorControlHighlight
        | [@mel.as "?android:attr/colorControlNormal"] `colorControlNormal
        | [@mel.as "?android:attr/colorEdgeEffect"] `colorEdgeEffect
        | [@mel.as "?android:attr/colorError"] `colorError
        | [@mel.as "?android:attr/colorFocusedHighlight"] `colorFocusedHighlight
        | [@mel.as "?android:attr/colorForeground"] `colorForeground
        | [@mel.as "?android:attr/colorForegroundInverse"]
          `colorForegroundInverse
        | [@mel.as "?android:attr/colorLongPressedHighlight"]
          `colorLongPressedHighlight
        | [@mel.as "?android:attr/colorMultiSelectHighlight"]
          `colorMultiSelectHighlight
        | [@mel.as "?android:attr/colorPressedHighlight"] `colorPressedHighlight
        | [@mel.as "?android:attr/colorPrimary"] `colorPrimary
        | [@mel.as "?android:attr/colorPrimaryDark"] `colorPrimaryDark
        | [@mel.as "?android:attr/colorSecondary"] `colorSecondary
      ],
      [@mel.string] [
        | [@mel.as "@android:color/background_dark"] `background_dark
        | [@mel.as "@android:color/background_light"] `background_light
        | [@mel.as "@android:color/black"] `black
        | [@mel.as "@android:color/darker_gray"] `darker_gray
        | [@mel.as "@android:color/holo_blue_bright"] `holo_blue_bright
        | [@mel.as "@android:color/holo_blue_dark"] `holo_blue_dark
        | [@mel.as "@android:color/holo_blue_light"] `holo_blue_light
        | [@mel.as "@android:color/holo_green_dark"] `holo_green_dark
        | [@mel.as "@android:color/holo_green_light"] `holo_green_light
        | [@mel.as "@android:color/holo_orange_dark"] `holo_orange_dark
        | [@mel.as "@android:color/holo_orange_light"] `holo_orange_light
        | [@mel.as "@android:color/holo_purple"] `holo_purple
        | [@mel.as "@android:color/holo_red_dark"] `holo_red_dark
        | [@mel.as "@android:color/holo_red_light"] `holo_red_light
        | [@mel.as "@android:color/primary_text_dark"] `primary_text_dark
        | [@mel.as "@android:color/primary_text_dark_nodisable"]
          `primary_text_dark_nodisable
        | [@mel.as "@android:color/primary_text_light"] `primary_text_light
        | [@mel.as "@android:color/primary_text_light_nodisable"]
          `primary_text_light_nodisable
        | [@mel.as "@android:color/secondary_text_dark"] `secondary_text_dark
        | [@mel.as "@android:color/secondary_text_dark_nodisable"]
          `secondary_text_dark_nodisable
        | [@mel.as "@android:color/secondary_text_light"] `secondary_text_light
        | [@mel.as "@android:color/secondary_text_light_nodisable"]
          `secondary_text_light_nodisable
        | [@mel.as "@android:color/tab_indicator_text"] `tab_indicator_text
        | [@mel.as "@android:color/tertiary_text_dark"] `tertiary_text_dark
        | [@mel.as "@android:color/tertiary_text_light"] `tertiary_text_light
        | [@mel.as "@android:color/transparent"] `transparent
        | [@mel.as "@android:color/white"] `white
        | [@mel.as "@android:color/widget_edittext_dark"] `widget_edittext_dark
        | [@mel.as "?android:attr/colorAccent"] `colorAccent
        | [@mel.as "?android:attr/colorActivatedHighlight"]
          `colorActivatedHighlight
        | [@mel.as "?android:attr/colorBackground"] `colorBackground
        | [@mel.as "?android:attr/colorBackgroundFloating"]
          `colorBackgroundFloating
        | [@mel.as "?android:attr/colorButtonNormal"] `colorButtonNormal
        | [@mel.as "?android:attr/colorControlHighlight"] `colorControlHighlight
        | [@mel.as "?android:attr/colorControlNormal"] `colorControlNormal
        | [@mel.as "?android:attr/colorEdgeEffect"] `colorEdgeEffect
        | [@mel.as "?android:attr/colorError"] `colorError
        | [@mel.as "?android:attr/colorFocusedHighlight"] `colorFocusedHighlight
        | [@mel.as "?android:attr/colorForeground"] `colorForeground
        | [@mel.as "?android:attr/colorForegroundInverse"]
          `colorForegroundInverse
        | [@mel.as "?android:attr/colorLongPressedHighlight"]
          `colorLongPressedHighlight
        | [@mel.as "?android:attr/colorMultiSelectHighlight"]
          `colorMultiSelectHighlight
        | [@mel.as "?android:attr/colorPressedHighlight"] `colorPressedHighlight
        | [@mel.as "?android:attr/colorPrimary"] `colorPrimary
        | [@mel.as "?android:attr/colorPrimaryDark"] `colorPrimaryDark
        | [@mel.as "?android:attr/colorSecondary"] `colorSecondary
      ]
    ) =>
    Color.t =
    "PlatformColor";

  [@mel.module "react-native"]
  external get2:
    (
      [@mel.string] [
        | [@mel.as "@android:color/background_dark"] `background_dark
        | [@mel.as "@android:color/background_light"] `background_light
        | [@mel.as "@android:color/black"] `black
        | [@mel.as "@android:color/darker_gray"] `darker_gray
        | [@mel.as "@android:color/holo_blue_bright"] `holo_blue_bright
        | [@mel.as "@android:color/holo_blue_dark"] `holo_blue_dark
        | [@mel.as "@android:color/holo_blue_light"] `holo_blue_light
        | [@mel.as "@android:color/holo_green_dark"] `holo_green_dark
        | [@mel.as "@android:color/holo_green_light"] `holo_green_light
        | [@mel.as "@android:color/holo_orange_dark"] `holo_orange_dark
        | [@mel.as "@android:color/holo_orange_light"] `holo_orange_light
        | [@mel.as "@android:color/holo_purple"] `holo_purple
        | [@mel.as "@android:color/holo_red_dark"] `holo_red_dark
        | [@mel.as "@android:color/holo_red_light"] `holo_red_light
        | [@mel.as "@android:color/primary_text_dark"] `primary_text_dark
        | [@mel.as "@android:color/primary_text_dark_nodisable"]
          `primary_text_dark_nodisable
        | [@mel.as "@android:color/primary_text_light"] `primary_text_light
        | [@mel.as "@android:color/primary_text_light_nodisable"]
          `primary_text_light_nodisable
        | [@mel.as "@android:color/secondary_text_dark"] `secondary_text_dark
        | [@mel.as "@android:color/secondary_text_dark_nodisable"]
          `secondary_text_dark_nodisable
        | [@mel.as "@android:color/secondary_text_light"] `secondary_text_light
        | [@mel.as "@android:color/secondary_text_light_nodisable"]
          `secondary_text_light_nodisable
        | [@mel.as "@android:color/tab_indicator_text"] `tab_indicator_text
        | [@mel.as "@android:color/tertiary_text_dark"] `tertiary_text_dark
        | [@mel.as "@android:color/tertiary_text_light"] `tertiary_text_light
        | [@mel.as "@android:color/transparent"] `transparent
        | [@mel.as "@android:color/white"] `white
        | [@mel.as "@android:color/widget_edittext_dark"] `widget_edittext_dark
        | [@mel.as "?android:attr/colorAccent"] `colorAccent
        | [@mel.as "?android:attr/colorActivatedHighlight"]
          `colorActivatedHighlight
        | [@mel.as "?android:attr/colorBackground"] `colorBackground
        | [@mel.as "?android:attr/colorBackgroundFloating"]
          `colorBackgroundFloating
        | [@mel.as "?android:attr/colorButtonNormal"] `colorButtonNormal
        | [@mel.as "?android:attr/colorControlHighlight"] `colorControlHighlight
        | [@mel.as "?android:attr/colorControlNormal"] `colorControlNormal
        | [@mel.as "?android:attr/colorEdgeEffect"] `colorEdgeEffect
        | [@mel.as "?android:attr/colorError"] `colorError
        | [@mel.as "?android:attr/colorFocusedHighlight"] `colorFocusedHighlight
        | [@mel.as "?android:attr/colorForeground"] `colorForeground
        | [@mel.as "?android:attr/colorForegroundInverse"]
          `colorForegroundInverse
        | [@mel.as "?android:attr/colorLongPressedHighlight"]
          `colorLongPressedHighlight
        | [@mel.as "?android:attr/colorMultiSelectHighlight"]
          `colorMultiSelectHighlight
        | [@mel.as "?android:attr/colorPressedHighlight"] `colorPressedHighlight
        | [@mel.as "?android:attr/colorPrimary"] `colorPrimary
        | [@mel.as "?android:attr/colorPrimaryDark"] `colorPrimaryDark
        | [@mel.as "?android:attr/colorSecondary"] `colorSecondary
      ],
      [@mel.string] [
        | [@mel.as "@android:color/background_dark"] `background_dark
        | [@mel.as "@android:color/background_light"] `background_light
        | [@mel.as "@android:color/black"] `black
        | [@mel.as "@android:color/darker_gray"] `darker_gray
        | [@mel.as "@android:color/holo_blue_bright"] `holo_blue_bright
        | [@mel.as "@android:color/holo_blue_dark"] `holo_blue_dark
        | [@mel.as "@android:color/holo_blue_light"] `holo_blue_light
        | [@mel.as "@android:color/holo_green_dark"] `holo_green_dark
        | [@mel.as "@android:color/holo_green_light"] `holo_green_light
        | [@mel.as "@android:color/holo_orange_dark"] `holo_orange_dark
        | [@mel.as "@android:color/holo_orange_light"] `holo_orange_light
        | [@mel.as "@android:color/holo_purple"] `holo_purple
        | [@mel.as "@android:color/holo_red_dark"] `holo_red_dark
        | [@mel.as "@android:color/holo_red_light"] `holo_red_light
        | [@mel.as "@android:color/primary_text_dark"] `primary_text_dark
        | [@mel.as "@android:color/primary_text_dark_nodisable"]
          `primary_text_dark_nodisable
        | [@mel.as "@android:color/primary_text_light"] `primary_text_light
        | [@mel.as "@android:color/primary_text_light_nodisable"]
          `primary_text_light_nodisable
        | [@mel.as "@android:color/secondary_text_dark"] `secondary_text_dark
        | [@mel.as "@android:color/secondary_text_dark_nodisable"]
          `secondary_text_dark_nodisable
        | [@mel.as "@android:color/secondary_text_light"] `secondary_text_light
        | [@mel.as "@android:color/secondary_text_light_nodisable"]
          `secondary_text_light_nodisable
        | [@mel.as "@android:color/tab_indicator_text"] `tab_indicator_text
        | [@mel.as "@android:color/tertiary_text_dark"] `tertiary_text_dark
        | [@mel.as "@android:color/tertiary_text_light"] `tertiary_text_light
        | [@mel.as "@android:color/transparent"] `transparent
        | [@mel.as "@android:color/white"] `white
        | [@mel.as "@android:color/widget_edittext_dark"] `widget_edittext_dark
        | [@mel.as "?android:attr/colorAccent"] `colorAccent
        | [@mel.as "?android:attr/colorActivatedHighlight"]
          `colorActivatedHighlight
        | [@mel.as "?android:attr/colorBackground"] `colorBackground
        | [@mel.as "?android:attr/colorBackgroundFloating"]
          `colorBackgroundFloating
        | [@mel.as "?android:attr/colorButtonNormal"] `colorButtonNormal
        | [@mel.as "?android:attr/colorControlHighlight"] `colorControlHighlight
        | [@mel.as "?android:attr/colorControlNormal"] `colorControlNormal
        | [@mel.as "?android:attr/colorEdgeEffect"] `colorEdgeEffect
        | [@mel.as "?android:attr/colorError"] `colorError
        | [@mel.as "?android:attr/colorFocusedHighlight"] `colorFocusedHighlight
        | [@mel.as "?android:attr/colorForeground"] `colorForeground
        | [@mel.as "?android:attr/colorForegroundInverse"]
          `colorForegroundInverse
        | [@mel.as "?android:attr/colorLongPressedHighlight"]
          `colorLongPressedHighlight
        | [@mel.as "?android:attr/colorMultiSelectHighlight"]
          `colorMultiSelectHighlight
        | [@mel.as "?android:attr/colorPressedHighlight"] `colorPressedHighlight
        | [@mel.as "?android:attr/colorPrimary"] `colorPrimary
        | [@mel.as "?android:attr/colorPrimaryDark"] `colorPrimaryDark
        | [@mel.as "?android:attr/colorSecondary"] `colorSecondary
      ]
    ) =>
    Color.t =
    "PlatformColor";

  [@mel.module "react-native"]
  external get3:
    (
      [@mel.string] [
        | [@mel.as "@android:color/background_dark"] `background_dark
        | [@mel.as "@android:color/background_light"] `background_light
        | [@mel.as "@android:color/black"] `black
        | [@mel.as "@android:color/darker_gray"] `darker_gray
        | [@mel.as "@android:color/holo_blue_bright"] `holo_blue_bright
        | [@mel.as "@android:color/holo_blue_dark"] `holo_blue_dark
        | [@mel.as "@android:color/holo_blue_light"] `holo_blue_light
        | [@mel.as "@android:color/holo_green_dark"] `holo_green_dark
        | [@mel.as "@android:color/holo_green_light"] `holo_green_light
        | [@mel.as "@android:color/holo_orange_dark"] `holo_orange_dark
        | [@mel.as "@android:color/holo_orange_light"] `holo_orange_light
        | [@mel.as "@android:color/holo_purple"] `holo_purple
        | [@mel.as "@android:color/holo_red_dark"] `holo_red_dark
        | [@mel.as "@android:color/holo_red_light"] `holo_red_light
        | [@mel.as "@android:color/primary_text_dark"] `primary_text_dark
        | [@mel.as "@android:color/primary_text_dark_nodisable"]
          `primary_text_dark_nodisable
        | [@mel.as "@android:color/primary_text_light"] `primary_text_light
        | [@mel.as "@android:color/primary_text_light_nodisable"]
          `primary_text_light_nodisable
        | [@mel.as "@android:color/secondary_text_dark"] `secondary_text_dark
        | [@mel.as "@android:color/secondary_text_dark_nodisable"]
          `secondary_text_dark_nodisable
        | [@mel.as "@android:color/secondary_text_light"] `secondary_text_light
        | [@mel.as "@android:color/secondary_text_light_nodisable"]
          `secondary_text_light_nodisable
        | [@mel.as "@android:color/tab_indicator_text"] `tab_indicator_text
        | [@mel.as "@android:color/tertiary_text_dark"] `tertiary_text_dark
        | [@mel.as "@android:color/tertiary_text_light"] `tertiary_text_light
        | [@mel.as "@android:color/transparent"] `transparent
        | [@mel.as "@android:color/white"] `white
        | [@mel.as "@android:color/widget_edittext_dark"] `widget_edittext_dark
        | [@mel.as "?android:attr/colorAccent"] `colorAccent
        | [@mel.as "?android:attr/colorActivatedHighlight"]
          `colorActivatedHighlight
        | [@mel.as "?android:attr/colorBackground"] `colorBackground
        | [@mel.as "?android:attr/colorBackgroundFloating"]
          `colorBackgroundFloating
        | [@mel.as "?android:attr/colorButtonNormal"] `colorButtonNormal
        | [@mel.as "?android:attr/colorControlHighlight"] `colorControlHighlight
        | [@mel.as "?android:attr/colorControlNormal"] `colorControlNormal
        | [@mel.as "?android:attr/colorEdgeEffect"] `colorEdgeEffect
        | [@mel.as "?android:attr/colorError"] `colorError
        | [@mel.as "?android:attr/colorFocusedHighlight"] `colorFocusedHighlight
        | [@mel.as "?android:attr/colorForeground"] `colorForeground
        | [@mel.as "?android:attr/colorForegroundInverse"]
          `colorForegroundInverse
        | [@mel.as "?android:attr/colorLongPressedHighlight"]
          `colorLongPressedHighlight
        | [@mel.as "?android:attr/colorMultiSelectHighlight"]
          `colorMultiSelectHighlight
        | [@mel.as "?android:attr/colorPressedHighlight"] `colorPressedHighlight
        | [@mel.as "?android:attr/colorPrimary"] `colorPrimary
        | [@mel.as "?android:attr/colorPrimaryDark"] `colorPrimaryDark
        | [@mel.as "?android:attr/colorSecondary"] `colorSecondary
      ],
      [@mel.string] [
        | [@mel.as "@android:color/background_dark"] `background_dark
        | [@mel.as "@android:color/background_light"] `background_light
        | [@mel.as "@android:color/black"] `black
        | [@mel.as "@android:color/darker_gray"] `darker_gray
        | [@mel.as "@android:color/holo_blue_bright"] `holo_blue_bright
        | [@mel.as "@android:color/holo_blue_dark"] `holo_blue_dark
        | [@mel.as "@android:color/holo_blue_light"] `holo_blue_light
        | [@mel.as "@android:color/holo_green_dark"] `holo_green_dark
        | [@mel.as "@android:color/holo_green_light"] `holo_green_light
        | [@mel.as "@android:color/holo_orange_dark"] `holo_orange_dark
        | [@mel.as "@android:color/holo_orange_light"] `holo_orange_light
        | [@mel.as "@android:color/holo_purple"] `holo_purple
        | [@mel.as "@android:color/holo_red_dark"] `holo_red_dark
        | [@mel.as "@android:color/holo_red_light"] `holo_red_light
        | [@mel.as "@android:color/primary_text_dark"] `primary_text_dark
        | [@mel.as "@android:color/primary_text_dark_nodisable"]
          `primary_text_dark_nodisable
        | [@mel.as "@android:color/primary_text_light"] `primary_text_light
        | [@mel.as "@android:color/primary_text_light_nodisable"]
          `primary_text_light_nodisable
        | [@mel.as "@android:color/secondary_text_dark"] `secondary_text_dark
        | [@mel.as "@android:color/secondary_text_dark_nodisable"]
          `secondary_text_dark_nodisable
        | [@mel.as "@android:color/secondary_text_light"] `secondary_text_light
        | [@mel.as "@android:color/secondary_text_light_nodisable"]
          `secondary_text_light_nodisable
        | [@mel.as "@android:color/tab_indicator_text"] `tab_indicator_text
        | [@mel.as "@android:color/tertiary_text_dark"] `tertiary_text_dark
        | [@mel.as "@android:color/tertiary_text_light"] `tertiary_text_light
        | [@mel.as "@android:color/transparent"] `transparent
        | [@mel.as "@android:color/white"] `white
        | [@mel.as "@android:color/widget_edittext_dark"] `widget_edittext_dark
        | [@mel.as "?android:attr/colorAccent"] `colorAccent
        | [@mel.as "?android:attr/colorActivatedHighlight"]
          `colorActivatedHighlight
        | [@mel.as "?android:attr/colorBackground"] `colorBackground
        | [@mel.as "?android:attr/colorBackgroundFloating"]
          `colorBackgroundFloating
        | [@mel.as "?android:attr/colorButtonNormal"] `colorButtonNormal
        | [@mel.as "?android:attr/colorControlHighlight"] `colorControlHighlight
        | [@mel.as "?android:attr/colorControlNormal"] `colorControlNormal
        | [@mel.as "?android:attr/colorEdgeEffect"] `colorEdgeEffect
        | [@mel.as "?android:attr/colorError"] `colorError
        | [@mel.as "?android:attr/colorFocusedHighlight"] `colorFocusedHighlight
        | [@mel.as "?android:attr/colorForeground"] `colorForeground
        | [@mel.as "?android:attr/colorForegroundInverse"]
          `colorForegroundInverse
        | [@mel.as "?android:attr/colorLongPressedHighlight"]
          `colorLongPressedHighlight
        | [@mel.as "?android:attr/colorMultiSelectHighlight"]
          `colorMultiSelectHighlight
        | [@mel.as "?android:attr/colorPressedHighlight"] `colorPressedHighlight
        | [@mel.as "?android:attr/colorPrimary"] `colorPrimary
        | [@mel.as "?android:attr/colorPrimaryDark"] `colorPrimaryDark
        | [@mel.as "?android:attr/colorSecondary"] `colorSecondary
      ],
      [@mel.string] [
        | [@mel.as "@android:color/background_dark"] `background_dark
        | [@mel.as "@android:color/background_light"] `background_light
        | [@mel.as "@android:color/black"] `black
        | [@mel.as "@android:color/darker_gray"] `darker_gray
        | [@mel.as "@android:color/holo_blue_bright"] `holo_blue_bright
        | [@mel.as "@android:color/holo_blue_dark"] `holo_blue_dark
        | [@mel.as "@android:color/holo_blue_light"] `holo_blue_light
        | [@mel.as "@android:color/holo_green_dark"] `holo_green_dark
        | [@mel.as "@android:color/holo_green_light"] `holo_green_light
        | [@mel.as "@android:color/holo_orange_dark"] `holo_orange_dark
        | [@mel.as "@android:color/holo_orange_light"] `holo_orange_light
        | [@mel.as "@android:color/holo_purple"] `holo_purple
        | [@mel.as "@android:color/holo_red_dark"] `holo_red_dark
        | [@mel.as "@android:color/holo_red_light"] `holo_red_light
        | [@mel.as "@android:color/primary_text_dark"] `primary_text_dark
        | [@mel.as "@android:color/primary_text_dark_nodisable"]
          `primary_text_dark_nodisable
        | [@mel.as "@android:color/primary_text_light"] `primary_text_light
        | [@mel.as "@android:color/primary_text_light_nodisable"]
          `primary_text_light_nodisable
        | [@mel.as "@android:color/secondary_text_dark"] `secondary_text_dark
        | [@mel.as "@android:color/secondary_text_dark_nodisable"]
          `secondary_text_dark_nodisable
        | [@mel.as "@android:color/secondary_text_light"] `secondary_text_light
        | [@mel.as "@android:color/secondary_text_light_nodisable"]
          `secondary_text_light_nodisable
        | [@mel.as "@android:color/tab_indicator_text"] `tab_indicator_text
        | [@mel.as "@android:color/tertiary_text_dark"] `tertiary_text_dark
        | [@mel.as "@android:color/tertiary_text_light"] `tertiary_text_light
        | [@mel.as "@android:color/transparent"] `transparent
        | [@mel.as "@android:color/white"] `white
        | [@mel.as "@android:color/widget_edittext_dark"] `widget_edittext_dark
        | [@mel.as "?android:attr/colorAccent"] `colorAccent
        | [@mel.as "?android:attr/colorActivatedHighlight"]
          `colorActivatedHighlight
        | [@mel.as "?android:attr/colorBackground"] `colorBackground
        | [@mel.as "?android:attr/colorBackgroundFloating"]
          `colorBackgroundFloating
        | [@mel.as "?android:attr/colorButtonNormal"] `colorButtonNormal
        | [@mel.as "?android:attr/colorControlHighlight"] `colorControlHighlight
        | [@mel.as "?android:attr/colorControlNormal"] `colorControlNormal
        | [@mel.as "?android:attr/colorEdgeEffect"] `colorEdgeEffect
        | [@mel.as "?android:attr/colorError"] `colorError
        | [@mel.as "?android:attr/colorFocusedHighlight"] `colorFocusedHighlight
        | [@mel.as "?android:attr/colorForeground"] `colorForeground
        | [@mel.as "?android:attr/colorForegroundInverse"]
          `colorForegroundInverse
        | [@mel.as "?android:attr/colorLongPressedHighlight"]
          `colorLongPressedHighlight
        | [@mel.as "?android:attr/colorMultiSelectHighlight"]
          `colorMultiSelectHighlight
        | [@mel.as "?android:attr/colorPressedHighlight"] `colorPressedHighlight
        | [@mel.as "?android:attr/colorPrimary"] `colorPrimary
        | [@mel.as "?android:attr/colorPrimaryDark"] `colorPrimaryDark
        | [@mel.as "?android:attr/colorSecondary"] `colorSecondary
      ]
    ) =>
    Color.t =
    "PlatformColor";

  [@mel.module "react-native"]
  external get4:
    (
      [@mel.string] [
        | [@mel.as "@android:color/background_dark"] `background_dark
        | [@mel.as "@android:color/background_light"] `background_light
        | [@mel.as "@android:color/black"] `black
        | [@mel.as "@android:color/darker_gray"] `darker_gray
        | [@mel.as "@android:color/holo_blue_bright"] `holo_blue_bright
        | [@mel.as "@android:color/holo_blue_dark"] `holo_blue_dark
        | [@mel.as "@android:color/holo_blue_light"] `holo_blue_light
        | [@mel.as "@android:color/holo_green_dark"] `holo_green_dark
        | [@mel.as "@android:color/holo_green_light"] `holo_green_light
        | [@mel.as "@android:color/holo_orange_dark"] `holo_orange_dark
        | [@mel.as "@android:color/holo_orange_light"] `holo_orange_light
        | [@mel.as "@android:color/holo_purple"] `holo_purple
        | [@mel.as "@android:color/holo_red_dark"] `holo_red_dark
        | [@mel.as "@android:color/holo_red_light"] `holo_red_light
        | [@mel.as "@android:color/primary_text_dark"] `primary_text_dark
        | [@mel.as "@android:color/primary_text_dark_nodisable"]
          `primary_text_dark_nodisable
        | [@mel.as "@android:color/primary_text_light"] `primary_text_light
        | [@mel.as "@android:color/primary_text_light_nodisable"]
          `primary_text_light_nodisable
        | [@mel.as "@android:color/secondary_text_dark"] `secondary_text_dark
        | [@mel.as "@android:color/secondary_text_dark_nodisable"]
          `secondary_text_dark_nodisable
        | [@mel.as "@android:color/secondary_text_light"] `secondary_text_light
        | [@mel.as "@android:color/secondary_text_light_nodisable"]
          `secondary_text_light_nodisable
        | [@mel.as "@android:color/tab_indicator_text"] `tab_indicator_text
        | [@mel.as "@android:color/tertiary_text_dark"] `tertiary_text_dark
        | [@mel.as "@android:color/tertiary_text_light"] `tertiary_text_light
        | [@mel.as "@android:color/transparent"] `transparent
        | [@mel.as "@android:color/white"] `white
        | [@mel.as "@android:color/widget_edittext_dark"] `widget_edittext_dark
        | [@mel.as "?android:attr/colorAccent"] `colorAccent
        | [@mel.as "?android:attr/colorActivatedHighlight"]
          `colorActivatedHighlight
        | [@mel.as "?android:attr/colorBackground"] `colorBackground
        | [@mel.as "?android:attr/colorBackgroundFloating"]
          `colorBackgroundFloating
        | [@mel.as "?android:attr/colorButtonNormal"] `colorButtonNormal
        | [@mel.as "?android:attr/colorControlHighlight"] `colorControlHighlight
        | [@mel.as "?android:attr/colorControlNormal"] `colorControlNormal
        | [@mel.as "?android:attr/colorEdgeEffect"] `colorEdgeEffect
        | [@mel.as "?android:attr/colorError"] `colorError
        | [@mel.as "?android:attr/colorFocusedHighlight"] `colorFocusedHighlight
        | [@mel.as "?android:attr/colorForeground"] `colorForeground
        | [@mel.as "?android:attr/colorForegroundInverse"]
          `colorForegroundInverse
        | [@mel.as "?android:attr/colorLongPressedHighlight"]
          `colorLongPressedHighlight
        | [@mel.as "?android:attr/colorMultiSelectHighlight"]
          `colorMultiSelectHighlight
        | [@mel.as "?android:attr/colorPressedHighlight"] `colorPressedHighlight
        | [@mel.as "?android:attr/colorPrimary"] `colorPrimary
        | [@mel.as "?android:attr/colorPrimaryDark"] `colorPrimaryDark
        | [@mel.as "?android:attr/colorSecondary"] `colorSecondary
      ],
      [@mel.string] [
        | [@mel.as "@android:color/background_dark"] `background_dark
        | [@mel.as "@android:color/background_light"] `background_light
        | [@mel.as "@android:color/black"] `black
        | [@mel.as "@android:color/darker_gray"] `darker_gray
        | [@mel.as "@android:color/holo_blue_bright"] `holo_blue_bright
        | [@mel.as "@android:color/holo_blue_dark"] `holo_blue_dark
        | [@mel.as "@android:color/holo_blue_light"] `holo_blue_light
        | [@mel.as "@android:color/holo_green_dark"] `holo_green_dark
        | [@mel.as "@android:color/holo_green_light"] `holo_green_light
        | [@mel.as "@android:color/holo_orange_dark"] `holo_orange_dark
        | [@mel.as "@android:color/holo_orange_light"] `holo_orange_light
        | [@mel.as "@android:color/holo_purple"] `holo_purple
        | [@mel.as "@android:color/holo_red_dark"] `holo_red_dark
        | [@mel.as "@android:color/holo_red_light"] `holo_red_light
        | [@mel.as "@android:color/primary_text_dark"] `primary_text_dark
        | [@mel.as "@android:color/primary_text_dark_nodisable"]
          `primary_text_dark_nodisable
        | [@mel.as "@android:color/primary_text_light"] `primary_text_light
        | [@mel.as "@android:color/primary_text_light_nodisable"]
          `primary_text_light_nodisable
        | [@mel.as "@android:color/secondary_text_dark"] `secondary_text_dark
        | [@mel.as "@android:color/secondary_text_dark_nodisable"]
          `secondary_text_dark_nodisable
        | [@mel.as "@android:color/secondary_text_light"] `secondary_text_light
        | [@mel.as "@android:color/secondary_text_light_nodisable"]
          `secondary_text_light_nodisable
        | [@mel.as "@android:color/tab_indicator_text"] `tab_indicator_text
        | [@mel.as "@android:color/tertiary_text_dark"] `tertiary_text_dark
        | [@mel.as "@android:color/tertiary_text_light"] `tertiary_text_light
        | [@mel.as "@android:color/transparent"] `transparent
        | [@mel.as "@android:color/white"] `white
        | [@mel.as "@android:color/widget_edittext_dark"] `widget_edittext_dark
        | [@mel.as "?android:attr/colorAccent"] `colorAccent
        | [@mel.as "?android:attr/colorActivatedHighlight"]
          `colorActivatedHighlight
        | [@mel.as "?android:attr/colorBackground"] `colorBackground
        | [@mel.as "?android:attr/colorBackgroundFloating"]
          `colorBackgroundFloating
        | [@mel.as "?android:attr/colorButtonNormal"] `colorButtonNormal
        | [@mel.as "?android:attr/colorControlHighlight"] `colorControlHighlight
        | [@mel.as "?android:attr/colorControlNormal"] `colorControlNormal
        | [@mel.as "?android:attr/colorEdgeEffect"] `colorEdgeEffect
        | [@mel.as "?android:attr/colorError"] `colorError
        | [@mel.as "?android:attr/colorFocusedHighlight"] `colorFocusedHighlight
        | [@mel.as "?android:attr/colorForeground"] `colorForeground
        | [@mel.as "?android:attr/colorForegroundInverse"]
          `colorForegroundInverse
        | [@mel.as "?android:attr/colorLongPressedHighlight"]
          `colorLongPressedHighlight
        | [@mel.as "?android:attr/colorMultiSelectHighlight"]
          `colorMultiSelectHighlight
        | [@mel.as "?android:attr/colorPressedHighlight"] `colorPressedHighlight
        | [@mel.as "?android:attr/colorPrimary"] `colorPrimary
        | [@mel.as "?android:attr/colorPrimaryDark"] `colorPrimaryDark
        | [@mel.as "?android:attr/colorSecondary"] `colorSecondary
      ],
      [@mel.string] [
        | [@mel.as "@android:color/background_dark"] `background_dark
        | [@mel.as "@android:color/background_light"] `background_light
        | [@mel.as "@android:color/black"] `black
        | [@mel.as "@android:color/darker_gray"] `darker_gray
        | [@mel.as "@android:color/holo_blue_bright"] `holo_blue_bright
        | [@mel.as "@android:color/holo_blue_dark"] `holo_blue_dark
        | [@mel.as "@android:color/holo_blue_light"] `holo_blue_light
        | [@mel.as "@android:color/holo_green_dark"] `holo_green_dark
        | [@mel.as "@android:color/holo_green_light"] `holo_green_light
        | [@mel.as "@android:color/holo_orange_dark"] `holo_orange_dark
        | [@mel.as "@android:color/holo_orange_light"] `holo_orange_light
        | [@mel.as "@android:color/holo_purple"] `holo_purple
        | [@mel.as "@android:color/holo_red_dark"] `holo_red_dark
        | [@mel.as "@android:color/holo_red_light"] `holo_red_light
        | [@mel.as "@android:color/primary_text_dark"] `primary_text_dark
        | [@mel.as "@android:color/primary_text_dark_nodisable"]
          `primary_text_dark_nodisable
        | [@mel.as "@android:color/primary_text_light"] `primary_text_light
        | [@mel.as "@android:color/primary_text_light_nodisable"]
          `primary_text_light_nodisable
        | [@mel.as "@android:color/secondary_text_dark"] `secondary_text_dark
        | [@mel.as "@android:color/secondary_text_dark_nodisable"]
          `secondary_text_dark_nodisable
        | [@mel.as "@android:color/secondary_text_light"] `secondary_text_light
        | [@mel.as "@android:color/secondary_text_light_nodisable"]
          `secondary_text_light_nodisable
        | [@mel.as "@android:color/tab_indicator_text"] `tab_indicator_text
        | [@mel.as "@android:color/tertiary_text_dark"] `tertiary_text_dark
        | [@mel.as "@android:color/tertiary_text_light"] `tertiary_text_light
        | [@mel.as "@android:color/transparent"] `transparent
        | [@mel.as "@android:color/white"] `white
        | [@mel.as "@android:color/widget_edittext_dark"] `widget_edittext_dark
        | [@mel.as "?android:attr/colorAccent"] `colorAccent
        | [@mel.as "?android:attr/colorActivatedHighlight"]
          `colorActivatedHighlight
        | [@mel.as "?android:attr/colorBackground"] `colorBackground
        | [@mel.as "?android:attr/colorBackgroundFloating"]
          `colorBackgroundFloating
        | [@mel.as "?android:attr/colorButtonNormal"] `colorButtonNormal
        | [@mel.as "?android:attr/colorControlHighlight"] `colorControlHighlight
        | [@mel.as "?android:attr/colorControlNormal"] `colorControlNormal
        | [@mel.as "?android:attr/colorEdgeEffect"] `colorEdgeEffect
        | [@mel.as "?android:attr/colorError"] `colorError
        | [@mel.as "?android:attr/colorFocusedHighlight"] `colorFocusedHighlight
        | [@mel.as "?android:attr/colorForeground"] `colorForeground
        | [@mel.as "?android:attr/colorForegroundInverse"]
          `colorForegroundInverse
        | [@mel.as "?android:attr/colorLongPressedHighlight"]
          `colorLongPressedHighlight
        | [@mel.as "?android:attr/colorMultiSelectHighlight"]
          `colorMultiSelectHighlight
        | [@mel.as "?android:attr/colorPressedHighlight"] `colorPressedHighlight
        | [@mel.as "?android:attr/colorPrimary"] `colorPrimary
        | [@mel.as "?android:attr/colorPrimaryDark"] `colorPrimaryDark
        | [@mel.as "?android:attr/colorSecondary"] `colorSecondary
      ],
      [@mel.string] [
        | [@mel.as "@android:color/background_dark"] `background_dark
        | [@mel.as "@android:color/background_light"] `background_light
        | [@mel.as "@android:color/black"] `black
        | [@mel.as "@android:color/darker_gray"] `darker_gray
        | [@mel.as "@android:color/holo_blue_bright"] `holo_blue_bright
        | [@mel.as "@android:color/holo_blue_dark"] `holo_blue_dark
        | [@mel.as "@android:color/holo_blue_light"] `holo_blue_light
        | [@mel.as "@android:color/holo_green_dark"] `holo_green_dark
        | [@mel.as "@android:color/holo_green_light"] `holo_green_light
        | [@mel.as "@android:color/holo_orange_dark"] `holo_orange_dark
        | [@mel.as "@android:color/holo_orange_light"] `holo_orange_light
        | [@mel.as "@android:color/holo_purple"] `holo_purple
        | [@mel.as "@android:color/holo_red_dark"] `holo_red_dark
        | [@mel.as "@android:color/holo_red_light"] `holo_red_light
        | [@mel.as "@android:color/primary_text_dark"] `primary_text_dark
        | [@mel.as "@android:color/primary_text_dark_nodisable"]
          `primary_text_dark_nodisable
        | [@mel.as "@android:color/primary_text_light"] `primary_text_light
        | [@mel.as "@android:color/primary_text_light_nodisable"]
          `primary_text_light_nodisable
        | [@mel.as "@android:color/secondary_text_dark"] `secondary_text_dark
        | [@mel.as "@android:color/secondary_text_dark_nodisable"]
          `secondary_text_dark_nodisable
        | [@mel.as "@android:color/secondary_text_light"] `secondary_text_light
        | [@mel.as "@android:color/secondary_text_light_nodisable"]
          `secondary_text_light_nodisable
        | [@mel.as "@android:color/tab_indicator_text"] `tab_indicator_text
        | [@mel.as "@android:color/tertiary_text_dark"] `tertiary_text_dark
        | [@mel.as "@android:color/tertiary_text_light"] `tertiary_text_light
        | [@mel.as "@android:color/transparent"] `transparent
        | [@mel.as "@android:color/white"] `white
        | [@mel.as "@android:color/widget_edittext_dark"] `widget_edittext_dark
        | [@mel.as "?android:attr/colorAccent"] `colorAccent
        | [@mel.as "?android:attr/colorActivatedHighlight"]
          `colorActivatedHighlight
        | [@mel.as "?android:attr/colorBackground"] `colorBackground
        | [@mel.as "?android:attr/colorBackgroundFloating"]
          `colorBackgroundFloating
        | [@mel.as "?android:attr/colorButtonNormal"] `colorButtonNormal
        | [@mel.as "?android:attr/colorControlHighlight"] `colorControlHighlight
        | [@mel.as "?android:attr/colorControlNormal"] `colorControlNormal
        | [@mel.as "?android:attr/colorEdgeEffect"] `colorEdgeEffect
        | [@mel.as "?android:attr/colorError"] `colorError
        | [@mel.as "?android:attr/colorFocusedHighlight"] `colorFocusedHighlight
        | [@mel.as "?android:attr/colorForeground"] `colorForeground
        | [@mel.as "?android:attr/colorForegroundInverse"]
          `colorForegroundInverse
        | [@mel.as "?android:attr/colorLongPressedHighlight"]
          `colorLongPressedHighlight
        | [@mel.as "?android:attr/colorMultiSelectHighlight"]
          `colorMultiSelectHighlight
        | [@mel.as "?android:attr/colorPressedHighlight"] `colorPressedHighlight
        | [@mel.as "?android:attr/colorPrimary"] `colorPrimary
        | [@mel.as "?android:attr/colorPrimaryDark"] `colorPrimaryDark
        | [@mel.as "?android:attr/colorSecondary"] `colorSecondary
      ]
    ) =>
    Color.t =
    "PlatformColor";

  [@mel.module "react-native"]
  external get5:
    (
      [@mel.string] [
        | [@mel.as "@android:color/background_dark"] `background_dark
        | [@mel.as "@android:color/background_light"] `background_light
        | [@mel.as "@android:color/black"] `black
        | [@mel.as "@android:color/darker_gray"] `darker_gray
        | [@mel.as "@android:color/holo_blue_bright"] `holo_blue_bright
        | [@mel.as "@android:color/holo_blue_dark"] `holo_blue_dark
        | [@mel.as "@android:color/holo_blue_light"] `holo_blue_light
        | [@mel.as "@android:color/holo_green_dark"] `holo_green_dark
        | [@mel.as "@android:color/holo_green_light"] `holo_green_light
        | [@mel.as "@android:color/holo_orange_dark"] `holo_orange_dark
        | [@mel.as "@android:color/holo_orange_light"] `holo_orange_light
        | [@mel.as "@android:color/holo_purple"] `holo_purple
        | [@mel.as "@android:color/holo_red_dark"] `holo_red_dark
        | [@mel.as "@android:color/holo_red_light"] `holo_red_light
        | [@mel.as "@android:color/primary_text_dark"] `primary_text_dark
        | [@mel.as "@android:color/primary_text_dark_nodisable"]
          `primary_text_dark_nodisable
        | [@mel.as "@android:color/primary_text_light"] `primary_text_light
        | [@mel.as "@android:color/primary_text_light_nodisable"]
          `primary_text_light_nodisable
        | [@mel.as "@android:color/secondary_text_dark"] `secondary_text_dark
        | [@mel.as "@android:color/secondary_text_dark_nodisable"]
          `secondary_text_dark_nodisable
        | [@mel.as "@android:color/secondary_text_light"] `secondary_text_light
        | [@mel.as "@android:color/secondary_text_light_nodisable"]
          `secondary_text_light_nodisable
        | [@mel.as "@android:color/tab_indicator_text"] `tab_indicator_text
        | [@mel.as "@android:color/tertiary_text_dark"] `tertiary_text_dark
        | [@mel.as "@android:color/tertiary_text_light"] `tertiary_text_light
        | [@mel.as "@android:color/transparent"] `transparent
        | [@mel.as "@android:color/white"] `white
        | [@mel.as "@android:color/widget_edittext_dark"] `widget_edittext_dark
        | [@mel.as "?android:attr/colorAccent"] `colorAccent
        | [@mel.as "?android:attr/colorActivatedHighlight"]
          `colorActivatedHighlight
        | [@mel.as "?android:attr/colorBackground"] `colorBackground
        | [@mel.as "?android:attr/colorBackgroundFloating"]
          `colorBackgroundFloating
        | [@mel.as "?android:attr/colorButtonNormal"] `colorButtonNormal
        | [@mel.as "?android:attr/colorControlHighlight"] `colorControlHighlight
        | [@mel.as "?android:attr/colorControlNormal"] `colorControlNormal
        | [@mel.as "?android:attr/colorEdgeEffect"] `colorEdgeEffect
        | [@mel.as "?android:attr/colorError"] `colorError
        | [@mel.as "?android:attr/colorFocusedHighlight"] `colorFocusedHighlight
        | [@mel.as "?android:attr/colorForeground"] `colorForeground
        | [@mel.as "?android:attr/colorForegroundInverse"]
          `colorForegroundInverse
        | [@mel.as "?android:attr/colorLongPressedHighlight"]
          `colorLongPressedHighlight
        | [@mel.as "?android:attr/colorMultiSelectHighlight"]
          `colorMultiSelectHighlight
        | [@mel.as "?android:attr/colorPressedHighlight"] `colorPressedHighlight
        | [@mel.as "?android:attr/colorPrimary"] `colorPrimary
        | [@mel.as "?android:attr/colorPrimaryDark"] `colorPrimaryDark
        | [@mel.as "?android:attr/colorSecondary"] `colorSecondary
      ],
      [@mel.string] [
        | [@mel.as "@android:color/background_dark"] `background_dark
        | [@mel.as "@android:color/background_light"] `background_light
        | [@mel.as "@android:color/black"] `black
        | [@mel.as "@android:color/darker_gray"] `darker_gray
        | [@mel.as "@android:color/holo_blue_bright"] `holo_blue_bright
        | [@mel.as "@android:color/holo_blue_dark"] `holo_blue_dark
        | [@mel.as "@android:color/holo_blue_light"] `holo_blue_light
        | [@mel.as "@android:color/holo_green_dark"] `holo_green_dark
        | [@mel.as "@android:color/holo_green_light"] `holo_green_light
        | [@mel.as "@android:color/holo_orange_dark"] `holo_orange_dark
        | [@mel.as "@android:color/holo_orange_light"] `holo_orange_light
        | [@mel.as "@android:color/holo_purple"] `holo_purple
        | [@mel.as "@android:color/holo_red_dark"] `holo_red_dark
        | [@mel.as "@android:color/holo_red_light"] `holo_red_light
        | [@mel.as "@android:color/primary_text_dark"] `primary_text_dark
        | [@mel.as "@android:color/primary_text_dark_nodisable"]
          `primary_text_dark_nodisable
        | [@mel.as "@android:color/primary_text_light"] `primary_text_light
        | [@mel.as "@android:color/primary_text_light_nodisable"]
          `primary_text_light_nodisable
        | [@mel.as "@android:color/secondary_text_dark"] `secondary_text_dark
        | [@mel.as "@android:color/secondary_text_dark_nodisable"]
          `secondary_text_dark_nodisable
        | [@mel.as "@android:color/secondary_text_light"] `secondary_text_light
        | [@mel.as "@android:color/secondary_text_light_nodisable"]
          `secondary_text_light_nodisable
        | [@mel.as "@android:color/tab_indicator_text"] `tab_indicator_text
        | [@mel.as "@android:color/tertiary_text_dark"] `tertiary_text_dark
        | [@mel.as "@android:color/tertiary_text_light"] `tertiary_text_light
        | [@mel.as "@android:color/transparent"] `transparent
        | [@mel.as "@android:color/white"] `white
        | [@mel.as "@android:color/widget_edittext_dark"] `widget_edittext_dark
        | [@mel.as "?android:attr/colorAccent"] `colorAccent
        | [@mel.as "?android:attr/colorActivatedHighlight"]
          `colorActivatedHighlight
        | [@mel.as "?android:attr/colorBackground"] `colorBackground
        | [@mel.as "?android:attr/colorBackgroundFloating"]
          `colorBackgroundFloating
        | [@mel.as "?android:attr/colorButtonNormal"] `colorButtonNormal
        | [@mel.as "?android:attr/colorControlHighlight"] `colorControlHighlight
        | [@mel.as "?android:attr/colorControlNormal"] `colorControlNormal
        | [@mel.as "?android:attr/colorEdgeEffect"] `colorEdgeEffect
        | [@mel.as "?android:attr/colorError"] `colorError
        | [@mel.as "?android:attr/colorFocusedHighlight"] `colorFocusedHighlight
        | [@mel.as "?android:attr/colorForeground"] `colorForeground
        | [@mel.as "?android:attr/colorForegroundInverse"]
          `colorForegroundInverse
        | [@mel.as "?android:attr/colorLongPressedHighlight"]
          `colorLongPressedHighlight
        | [@mel.as "?android:attr/colorMultiSelectHighlight"]
          `colorMultiSelectHighlight
        | [@mel.as "?android:attr/colorPressedHighlight"] `colorPressedHighlight
        | [@mel.as "?android:attr/colorPrimary"] `colorPrimary
        | [@mel.as "?android:attr/colorPrimaryDark"] `colorPrimaryDark
        | [@mel.as "?android:attr/colorSecondary"] `colorSecondary
      ],
      [@mel.string] [
        | [@mel.as "@android:color/background_dark"] `background_dark
        | [@mel.as "@android:color/background_light"] `background_light
        | [@mel.as "@android:color/black"] `black
        | [@mel.as "@android:color/darker_gray"] `darker_gray
        | [@mel.as "@android:color/holo_blue_bright"] `holo_blue_bright
        | [@mel.as "@android:color/holo_blue_dark"] `holo_blue_dark
        | [@mel.as "@android:color/holo_blue_light"] `holo_blue_light
        | [@mel.as "@android:color/holo_green_dark"] `holo_green_dark
        | [@mel.as "@android:color/holo_green_light"] `holo_green_light
        | [@mel.as "@android:color/holo_orange_dark"] `holo_orange_dark
        | [@mel.as "@android:color/holo_orange_light"] `holo_orange_light
        | [@mel.as "@android:color/holo_purple"] `holo_purple
        | [@mel.as "@android:color/holo_red_dark"] `holo_red_dark
        | [@mel.as "@android:color/holo_red_light"] `holo_red_light
        | [@mel.as "@android:color/primary_text_dark"] `primary_text_dark
        | [@mel.as "@android:color/primary_text_dark_nodisable"]
          `primary_text_dark_nodisable
        | [@mel.as "@android:color/primary_text_light"] `primary_text_light
        | [@mel.as "@android:color/primary_text_light_nodisable"]
          `primary_text_light_nodisable
        | [@mel.as "@android:color/secondary_text_dark"] `secondary_text_dark
        | [@mel.as "@android:color/secondary_text_dark_nodisable"]
          `secondary_text_dark_nodisable
        | [@mel.as "@android:color/secondary_text_light"] `secondary_text_light
        | [@mel.as "@android:color/secondary_text_light_nodisable"]
          `secondary_text_light_nodisable
        | [@mel.as "@android:color/tab_indicator_text"] `tab_indicator_text
        | [@mel.as "@android:color/tertiary_text_dark"] `tertiary_text_dark
        | [@mel.as "@android:color/tertiary_text_light"] `tertiary_text_light
        | [@mel.as "@android:color/transparent"] `transparent
        | [@mel.as "@android:color/white"] `white
        | [@mel.as "@android:color/widget_edittext_dark"] `widget_edittext_dark
        | [@mel.as "?android:attr/colorAccent"] `colorAccent
        | [@mel.as "?android:attr/colorActivatedHighlight"]
          `colorActivatedHighlight
        | [@mel.as "?android:attr/colorBackground"] `colorBackground
        | [@mel.as "?android:attr/colorBackgroundFloating"]
          `colorBackgroundFloating
        | [@mel.as "?android:attr/colorButtonNormal"] `colorButtonNormal
        | [@mel.as "?android:attr/colorControlHighlight"] `colorControlHighlight
        | [@mel.as "?android:attr/colorControlNormal"] `colorControlNormal
        | [@mel.as "?android:attr/colorEdgeEffect"] `colorEdgeEffect
        | [@mel.as "?android:attr/colorError"] `colorError
        | [@mel.as "?android:attr/colorFocusedHighlight"] `colorFocusedHighlight
        | [@mel.as "?android:attr/colorForeground"] `colorForeground
        | [@mel.as "?android:attr/colorForegroundInverse"]
          `colorForegroundInverse
        | [@mel.as "?android:attr/colorLongPressedHighlight"]
          `colorLongPressedHighlight
        | [@mel.as "?android:attr/colorMultiSelectHighlight"]
          `colorMultiSelectHighlight
        | [@mel.as "?android:attr/colorPressedHighlight"] `colorPressedHighlight
        | [@mel.as "?android:attr/colorPrimary"] `colorPrimary
        | [@mel.as "?android:attr/colorPrimaryDark"] `colorPrimaryDark
        | [@mel.as "?android:attr/colorSecondary"] `colorSecondary
      ],
      [@mel.string] [
        | [@mel.as "@android:color/background_dark"] `background_dark
        | [@mel.as "@android:color/background_light"] `background_light
        | [@mel.as "@android:color/black"] `black
        | [@mel.as "@android:color/darker_gray"] `darker_gray
        | [@mel.as "@android:color/holo_blue_bright"] `holo_blue_bright
        | [@mel.as "@android:color/holo_blue_dark"] `holo_blue_dark
        | [@mel.as "@android:color/holo_blue_light"] `holo_blue_light
        | [@mel.as "@android:color/holo_green_dark"] `holo_green_dark
        | [@mel.as "@android:color/holo_green_light"] `holo_green_light
        | [@mel.as "@android:color/holo_orange_dark"] `holo_orange_dark
        | [@mel.as "@android:color/holo_orange_light"] `holo_orange_light
        | [@mel.as "@android:color/holo_purple"] `holo_purple
        | [@mel.as "@android:color/holo_red_dark"] `holo_red_dark
        | [@mel.as "@android:color/holo_red_light"] `holo_red_light
        | [@mel.as "@android:color/primary_text_dark"] `primary_text_dark
        | [@mel.as "@android:color/primary_text_dark_nodisable"]
          `primary_text_dark_nodisable
        | [@mel.as "@android:color/primary_text_light"] `primary_text_light
        | [@mel.as "@android:color/primary_text_light_nodisable"]
          `primary_text_light_nodisable
        | [@mel.as "@android:color/secondary_text_dark"] `secondary_text_dark
        | [@mel.as "@android:color/secondary_text_dark_nodisable"]
          `secondary_text_dark_nodisable
        | [@mel.as "@android:color/secondary_text_light"] `secondary_text_light
        | [@mel.as "@android:color/secondary_text_light_nodisable"]
          `secondary_text_light_nodisable
        | [@mel.as "@android:color/tab_indicator_text"] `tab_indicator_text
        | [@mel.as "@android:color/tertiary_text_dark"] `tertiary_text_dark
        | [@mel.as "@android:color/tertiary_text_light"] `tertiary_text_light
        | [@mel.as "@android:color/transparent"] `transparent
        | [@mel.as "@android:color/white"] `white
        | [@mel.as "@android:color/widget_edittext_dark"] `widget_edittext_dark
        | [@mel.as "?android:attr/colorAccent"] `colorAccent
        | [@mel.as "?android:attr/colorActivatedHighlight"]
          `colorActivatedHighlight
        | [@mel.as "?android:attr/colorBackground"] `colorBackground
        | [@mel.as "?android:attr/colorBackgroundFloating"]
          `colorBackgroundFloating
        | [@mel.as "?android:attr/colorButtonNormal"] `colorButtonNormal
        | [@mel.as "?android:attr/colorControlHighlight"] `colorControlHighlight
        | [@mel.as "?android:attr/colorControlNormal"] `colorControlNormal
        | [@mel.as "?android:attr/colorEdgeEffect"] `colorEdgeEffect
        | [@mel.as "?android:attr/colorError"] `colorError
        | [@mel.as "?android:attr/colorFocusedHighlight"] `colorFocusedHighlight
        | [@mel.as "?android:attr/colorForeground"] `colorForeground
        | [@mel.as "?android:attr/colorForegroundInverse"]
          `colorForegroundInverse
        | [@mel.as "?android:attr/colorLongPressedHighlight"]
          `colorLongPressedHighlight
        | [@mel.as "?android:attr/colorMultiSelectHighlight"]
          `colorMultiSelectHighlight
        | [@mel.as "?android:attr/colorPressedHighlight"] `colorPressedHighlight
        | [@mel.as "?android:attr/colorPrimary"] `colorPrimary
        | [@mel.as "?android:attr/colorPrimaryDark"] `colorPrimaryDark
        | [@mel.as "?android:attr/colorSecondary"] `colorSecondary
      ],
      [@mel.string] [
        | [@mel.as "@android:color/background_dark"] `background_dark
        | [@mel.as "@android:color/background_light"] `background_light
        | [@mel.as "@android:color/black"] `black
        | [@mel.as "@android:color/darker_gray"] `darker_gray
        | [@mel.as "@android:color/holo_blue_bright"] `holo_blue_bright
        | [@mel.as "@android:color/holo_blue_dark"] `holo_blue_dark
        | [@mel.as "@android:color/holo_blue_light"] `holo_blue_light
        | [@mel.as "@android:color/holo_green_dark"] `holo_green_dark
        | [@mel.as "@android:color/holo_green_light"] `holo_green_light
        | [@mel.as "@android:color/holo_orange_dark"] `holo_orange_dark
        | [@mel.as "@android:color/holo_orange_light"] `holo_orange_light
        | [@mel.as "@android:color/holo_purple"] `holo_purple
        | [@mel.as "@android:color/holo_red_dark"] `holo_red_dark
        | [@mel.as "@android:color/holo_red_light"] `holo_red_light
        | [@mel.as "@android:color/primary_text_dark"] `primary_text_dark
        | [@mel.as "@android:color/primary_text_dark_nodisable"]
          `primary_text_dark_nodisable
        | [@mel.as "@android:color/primary_text_light"] `primary_text_light
        | [@mel.as "@android:color/primary_text_light_nodisable"]
          `primary_text_light_nodisable
        | [@mel.as "@android:color/secondary_text_dark"] `secondary_text_dark
        | [@mel.as "@android:color/secondary_text_dark_nodisable"]
          `secondary_text_dark_nodisable
        | [@mel.as "@android:color/secondary_text_light"] `secondary_text_light
        | [@mel.as "@android:color/secondary_text_light_nodisable"]
          `secondary_text_light_nodisable
        | [@mel.as "@android:color/tab_indicator_text"] `tab_indicator_text
        | [@mel.as "@android:color/tertiary_text_dark"] `tertiary_text_dark
        | [@mel.as "@android:color/tertiary_text_light"] `tertiary_text_light
        | [@mel.as "@android:color/transparent"] `transparent
        | [@mel.as "@android:color/white"] `white
        | [@mel.as "@android:color/widget_edittext_dark"] `widget_edittext_dark
        | [@mel.as "?android:attr/colorAccent"] `colorAccent
        | [@mel.as "?android:attr/colorActivatedHighlight"]
          `colorActivatedHighlight
        | [@mel.as "?android:attr/colorBackground"] `colorBackground
        | [@mel.as "?android:attr/colorBackgroundFloating"]
          `colorBackgroundFloating
        | [@mel.as "?android:attr/colorButtonNormal"] `colorButtonNormal
        | [@mel.as "?android:attr/colorControlHighlight"] `colorControlHighlight
        | [@mel.as "?android:attr/colorControlNormal"] `colorControlNormal
        | [@mel.as "?android:attr/colorEdgeEffect"] `colorEdgeEffect
        | [@mel.as "?android:attr/colorError"] `colorError
        | [@mel.as "?android:attr/colorFocusedHighlight"] `colorFocusedHighlight
        | [@mel.as "?android:attr/colorForeground"] `colorForeground
        | [@mel.as "?android:attr/colorForegroundInverse"]
          `colorForegroundInverse
        | [@mel.as "?android:attr/colorLongPressedHighlight"]
          `colorLongPressedHighlight
        | [@mel.as "?android:attr/colorMultiSelectHighlight"]
          `colorMultiSelectHighlight
        | [@mel.as "?android:attr/colorPressedHighlight"] `colorPressedHighlight
        | [@mel.as "?android:attr/colorPrimary"] `colorPrimary
        | [@mel.as "?android:attr/colorPrimaryDark"] `colorPrimaryDark
        | [@mel.as "?android:attr/colorSecondary"] `colorSecondary
      ]
    ) =>
    Color.t =
    "PlatformColor";

  [@mel.module "react-native"]
  external get6:
    (
      [@mel.string] [
        | [@mel.as "@android:color/background_dark"] `background_dark
        | [@mel.as "@android:color/background_light"] `background_light
        | [@mel.as "@android:color/black"] `black
        | [@mel.as "@android:color/darker_gray"] `darker_gray
        | [@mel.as "@android:color/holo_blue_bright"] `holo_blue_bright
        | [@mel.as "@android:color/holo_blue_dark"] `holo_blue_dark
        | [@mel.as "@android:color/holo_blue_light"] `holo_blue_light
        | [@mel.as "@android:color/holo_green_dark"] `holo_green_dark
        | [@mel.as "@android:color/holo_green_light"] `holo_green_light
        | [@mel.as "@android:color/holo_orange_dark"] `holo_orange_dark
        | [@mel.as "@android:color/holo_orange_light"] `holo_orange_light
        | [@mel.as "@android:color/holo_purple"] `holo_purple
        | [@mel.as "@android:color/holo_red_dark"] `holo_red_dark
        | [@mel.as "@android:color/holo_red_light"] `holo_red_light
        | [@mel.as "@android:color/primary_text_dark"] `primary_text_dark
        | [@mel.as "@android:color/primary_text_dark_nodisable"]
          `primary_text_dark_nodisable
        | [@mel.as "@android:color/primary_text_light"] `primary_text_light
        | [@mel.as "@android:color/primary_text_light_nodisable"]
          `primary_text_light_nodisable
        | [@mel.as "@android:color/secondary_text_dark"] `secondary_text_dark
        | [@mel.as "@android:color/secondary_text_dark_nodisable"]
          `secondary_text_dark_nodisable
        | [@mel.as "@android:color/secondary_text_light"] `secondary_text_light
        | [@mel.as "@android:color/secondary_text_light_nodisable"]
          `secondary_text_light_nodisable
        | [@mel.as "@android:color/tab_indicator_text"] `tab_indicator_text
        | [@mel.as "@android:color/tertiary_text_dark"] `tertiary_text_dark
        | [@mel.as "@android:color/tertiary_text_light"] `tertiary_text_light
        | [@mel.as "@android:color/transparent"] `transparent
        | [@mel.as "@android:color/white"] `white
        | [@mel.as "@android:color/widget_edittext_dark"] `widget_edittext_dark
        | [@mel.as "?android:attr/colorAccent"] `colorAccent
        | [@mel.as "?android:attr/colorActivatedHighlight"]
          `colorActivatedHighlight
        | [@mel.as "?android:attr/colorBackground"] `colorBackground
        | [@mel.as "?android:attr/colorBackgroundFloating"]
          `colorBackgroundFloating
        | [@mel.as "?android:attr/colorButtonNormal"] `colorButtonNormal
        | [@mel.as "?android:attr/colorControlHighlight"] `colorControlHighlight
        | [@mel.as "?android:attr/colorControlNormal"] `colorControlNormal
        | [@mel.as "?android:attr/colorEdgeEffect"] `colorEdgeEffect
        | [@mel.as "?android:attr/colorError"] `colorError
        | [@mel.as "?android:attr/colorFocusedHighlight"] `colorFocusedHighlight
        | [@mel.as "?android:attr/colorForeground"] `colorForeground
        | [@mel.as "?android:attr/colorForegroundInverse"]
          `colorForegroundInverse
        | [@mel.as "?android:attr/colorLongPressedHighlight"]
          `colorLongPressedHighlight
        | [@mel.as "?android:attr/colorMultiSelectHighlight"]
          `colorMultiSelectHighlight
        | [@mel.as "?android:attr/colorPressedHighlight"] `colorPressedHighlight
        | [@mel.as "?android:attr/colorPrimary"] `colorPrimary
        | [@mel.as "?android:attr/colorPrimaryDark"] `colorPrimaryDark
        | [@mel.as "?android:attr/colorSecondary"] `colorSecondary
      ],
      [@mel.string] [
        | [@mel.as "@android:color/background_dark"] `background_dark
        | [@mel.as "@android:color/background_light"] `background_light
        | [@mel.as "@android:color/black"] `black
        | [@mel.as "@android:color/darker_gray"] `darker_gray
        | [@mel.as "@android:color/holo_blue_bright"] `holo_blue_bright
        | [@mel.as "@android:color/holo_blue_dark"] `holo_blue_dark
        | [@mel.as "@android:color/holo_blue_light"] `holo_blue_light
        | [@mel.as "@android:color/holo_green_dark"] `holo_green_dark
        | [@mel.as "@android:color/holo_green_light"] `holo_green_light
        | [@mel.as "@android:color/holo_orange_dark"] `holo_orange_dark
        | [@mel.as "@android:color/holo_orange_light"] `holo_orange_light
        | [@mel.as "@android:color/holo_purple"] `holo_purple
        | [@mel.as "@android:color/holo_red_dark"] `holo_red_dark
        | [@mel.as "@android:color/holo_red_light"] `holo_red_light
        | [@mel.as "@android:color/primary_text_dark"] `primary_text_dark
        | [@mel.as "@android:color/primary_text_dark_nodisable"]
          `primary_text_dark_nodisable
        | [@mel.as "@android:color/primary_text_light"] `primary_text_light
        | [@mel.as "@android:color/primary_text_light_nodisable"]
          `primary_text_light_nodisable
        | [@mel.as "@android:color/secondary_text_dark"] `secondary_text_dark
        | [@mel.as "@android:color/secondary_text_dark_nodisable"]
          `secondary_text_dark_nodisable
        | [@mel.as "@android:color/secondary_text_light"] `secondary_text_light
        | [@mel.as "@android:color/secondary_text_light_nodisable"]
          `secondary_text_light_nodisable
        | [@mel.as "@android:color/tab_indicator_text"] `tab_indicator_text
        | [@mel.as "@android:color/tertiary_text_dark"] `tertiary_text_dark
        | [@mel.as "@android:color/tertiary_text_light"] `tertiary_text_light
        | [@mel.as "@android:color/transparent"] `transparent
        | [@mel.as "@android:color/white"] `white
        | [@mel.as "@android:color/widget_edittext_dark"] `widget_edittext_dark
        | [@mel.as "?android:attr/colorAccent"] `colorAccent
        | [@mel.as "?android:attr/colorActivatedHighlight"]
          `colorActivatedHighlight
        | [@mel.as "?android:attr/colorBackground"] `colorBackground
        | [@mel.as "?android:attr/colorBackgroundFloating"]
          `colorBackgroundFloating
        | [@mel.as "?android:attr/colorButtonNormal"] `colorButtonNormal
        | [@mel.as "?android:attr/colorControlHighlight"] `colorControlHighlight
        | [@mel.as "?android:attr/colorControlNormal"] `colorControlNormal
        | [@mel.as "?android:attr/colorEdgeEffect"] `colorEdgeEffect
        | [@mel.as "?android:attr/colorError"] `colorError
        | [@mel.as "?android:attr/colorFocusedHighlight"] `colorFocusedHighlight
        | [@mel.as "?android:attr/colorForeground"] `colorForeground
        | [@mel.as "?android:attr/colorForegroundInverse"]
          `colorForegroundInverse
        | [@mel.as "?android:attr/colorLongPressedHighlight"]
          `colorLongPressedHighlight
        | [@mel.as "?android:attr/colorMultiSelectHighlight"]
          `colorMultiSelectHighlight
        | [@mel.as "?android:attr/colorPressedHighlight"] `colorPressedHighlight
        | [@mel.as "?android:attr/colorPrimary"] `colorPrimary
        | [@mel.as "?android:attr/colorPrimaryDark"] `colorPrimaryDark
        | [@mel.as "?android:attr/colorSecondary"] `colorSecondary
      ],
      [@mel.string] [
        | [@mel.as "@android:color/background_dark"] `background_dark
        | [@mel.as "@android:color/background_light"] `background_light
        | [@mel.as "@android:color/black"] `black
        | [@mel.as "@android:color/darker_gray"] `darker_gray
        | [@mel.as "@android:color/holo_blue_bright"] `holo_blue_bright
        | [@mel.as "@android:color/holo_blue_dark"] `holo_blue_dark
        | [@mel.as "@android:color/holo_blue_light"] `holo_blue_light
        | [@mel.as "@android:color/holo_green_dark"] `holo_green_dark
        | [@mel.as "@android:color/holo_green_light"] `holo_green_light
        | [@mel.as "@android:color/holo_orange_dark"] `holo_orange_dark
        | [@mel.as "@android:color/holo_orange_light"] `holo_orange_light
        | [@mel.as "@android:color/holo_purple"] `holo_purple
        | [@mel.as "@android:color/holo_red_dark"] `holo_red_dark
        | [@mel.as "@android:color/holo_red_light"] `holo_red_light
        | [@mel.as "@android:color/primary_text_dark"] `primary_text_dark
        | [@mel.as "@android:color/primary_text_dark_nodisable"]
          `primary_text_dark_nodisable
        | [@mel.as "@android:color/primary_text_light"] `primary_text_light
        | [@mel.as "@android:color/primary_text_light_nodisable"]
          `primary_text_light_nodisable
        | [@mel.as "@android:color/secondary_text_dark"] `secondary_text_dark
        | [@mel.as "@android:color/secondary_text_dark_nodisable"]
          `secondary_text_dark_nodisable
        | [@mel.as "@android:color/secondary_text_light"] `secondary_text_light
        | [@mel.as "@android:color/secondary_text_light_nodisable"]
          `secondary_text_light_nodisable
        | [@mel.as "@android:color/tab_indicator_text"] `tab_indicator_text
        | [@mel.as "@android:color/tertiary_text_dark"] `tertiary_text_dark
        | [@mel.as "@android:color/tertiary_text_light"] `tertiary_text_light
        | [@mel.as "@android:color/transparent"] `transparent
        | [@mel.as "@android:color/white"] `white
        | [@mel.as "@android:color/widget_edittext_dark"] `widget_edittext_dark
        | [@mel.as "?android:attr/colorAccent"] `colorAccent
        | [@mel.as "?android:attr/colorActivatedHighlight"]
          `colorActivatedHighlight
        | [@mel.as "?android:attr/colorBackground"] `colorBackground
        | [@mel.as "?android:attr/colorBackgroundFloating"]
          `colorBackgroundFloating
        | [@mel.as "?android:attr/colorButtonNormal"] `colorButtonNormal
        | [@mel.as "?android:attr/colorControlHighlight"] `colorControlHighlight
        | [@mel.as "?android:attr/colorControlNormal"] `colorControlNormal
        | [@mel.as "?android:attr/colorEdgeEffect"] `colorEdgeEffect
        | [@mel.as "?android:attr/colorError"] `colorError
        | [@mel.as "?android:attr/colorFocusedHighlight"] `colorFocusedHighlight
        | [@mel.as "?android:attr/colorForeground"] `colorForeground
        | [@mel.as "?android:attr/colorForegroundInverse"]
          `colorForegroundInverse
        | [@mel.as "?android:attr/colorLongPressedHighlight"]
          `colorLongPressedHighlight
        | [@mel.as "?android:attr/colorMultiSelectHighlight"]
          `colorMultiSelectHighlight
        | [@mel.as "?android:attr/colorPressedHighlight"] `colorPressedHighlight
        | [@mel.as "?android:attr/colorPrimary"] `colorPrimary
        | [@mel.as "?android:attr/colorPrimaryDark"] `colorPrimaryDark
        | [@mel.as "?android:attr/colorSecondary"] `colorSecondary
      ],
      [@mel.string] [
        | [@mel.as "@android:color/background_dark"] `background_dark
        | [@mel.as "@android:color/background_light"] `background_light
        | [@mel.as "@android:color/black"] `black
        | [@mel.as "@android:color/darker_gray"] `darker_gray
        | [@mel.as "@android:color/holo_blue_bright"] `holo_blue_bright
        | [@mel.as "@android:color/holo_blue_dark"] `holo_blue_dark
        | [@mel.as "@android:color/holo_blue_light"] `holo_blue_light
        | [@mel.as "@android:color/holo_green_dark"] `holo_green_dark
        | [@mel.as "@android:color/holo_green_light"] `holo_green_light
        | [@mel.as "@android:color/holo_orange_dark"] `holo_orange_dark
        | [@mel.as "@android:color/holo_orange_light"] `holo_orange_light
        | [@mel.as "@android:color/holo_purple"] `holo_purple
        | [@mel.as "@android:color/holo_red_dark"] `holo_red_dark
        | [@mel.as "@android:color/holo_red_light"] `holo_red_light
        | [@mel.as "@android:color/primary_text_dark"] `primary_text_dark
        | [@mel.as "@android:color/primary_text_dark_nodisable"]
          `primary_text_dark_nodisable
        | [@mel.as "@android:color/primary_text_light"] `primary_text_light
        | [@mel.as "@android:color/primary_text_light_nodisable"]
          `primary_text_light_nodisable
        | [@mel.as "@android:color/secondary_text_dark"] `secondary_text_dark
        | [@mel.as "@android:color/secondary_text_dark_nodisable"]
          `secondary_text_dark_nodisable
        | [@mel.as "@android:color/secondary_text_light"] `secondary_text_light
        | [@mel.as "@android:color/secondary_text_light_nodisable"]
          `secondary_text_light_nodisable
        | [@mel.as "@android:color/tab_indicator_text"] `tab_indicator_text
        | [@mel.as "@android:color/tertiary_text_dark"] `tertiary_text_dark
        | [@mel.as "@android:color/tertiary_text_light"] `tertiary_text_light
        | [@mel.as "@android:color/transparent"] `transparent
        | [@mel.as "@android:color/white"] `white
        | [@mel.as "@android:color/widget_edittext_dark"] `widget_edittext_dark
        | [@mel.as "?android:attr/colorAccent"] `colorAccent
        | [@mel.as "?android:attr/colorActivatedHighlight"]
          `colorActivatedHighlight
        | [@mel.as "?android:attr/colorBackground"] `colorBackground
        | [@mel.as "?android:attr/colorBackgroundFloating"]
          `colorBackgroundFloating
        | [@mel.as "?android:attr/colorButtonNormal"] `colorButtonNormal
        | [@mel.as "?android:attr/colorControlHighlight"] `colorControlHighlight
        | [@mel.as "?android:attr/colorControlNormal"] `colorControlNormal
        | [@mel.as "?android:attr/colorEdgeEffect"] `colorEdgeEffect
        | [@mel.as "?android:attr/colorError"] `colorError
        | [@mel.as "?android:attr/colorFocusedHighlight"] `colorFocusedHighlight
        | [@mel.as "?android:attr/colorForeground"] `colorForeground
        | [@mel.as "?android:attr/colorForegroundInverse"]
          `colorForegroundInverse
        | [@mel.as "?android:attr/colorLongPressedHighlight"]
          `colorLongPressedHighlight
        | [@mel.as "?android:attr/colorMultiSelectHighlight"]
          `colorMultiSelectHighlight
        | [@mel.as "?android:attr/colorPressedHighlight"] `colorPressedHighlight
        | [@mel.as "?android:attr/colorPrimary"] `colorPrimary
        | [@mel.as "?android:attr/colorPrimaryDark"] `colorPrimaryDark
        | [@mel.as "?android:attr/colorSecondary"] `colorSecondary
      ],
      [@mel.string] [
        | [@mel.as "@android:color/background_dark"] `background_dark
        | [@mel.as "@android:color/background_light"] `background_light
        | [@mel.as "@android:color/black"] `black
        | [@mel.as "@android:color/darker_gray"] `darker_gray
        | [@mel.as "@android:color/holo_blue_bright"] `holo_blue_bright
        | [@mel.as "@android:color/holo_blue_dark"] `holo_blue_dark
        | [@mel.as "@android:color/holo_blue_light"] `holo_blue_light
        | [@mel.as "@android:color/holo_green_dark"] `holo_green_dark
        | [@mel.as "@android:color/holo_green_light"] `holo_green_light
        | [@mel.as "@android:color/holo_orange_dark"] `holo_orange_dark
        | [@mel.as "@android:color/holo_orange_light"] `holo_orange_light
        | [@mel.as "@android:color/holo_purple"] `holo_purple
        | [@mel.as "@android:color/holo_red_dark"] `holo_red_dark
        | [@mel.as "@android:color/holo_red_light"] `holo_red_light
        | [@mel.as "@android:color/primary_text_dark"] `primary_text_dark
        | [@mel.as "@android:color/primary_text_dark_nodisable"]
          `primary_text_dark_nodisable
        | [@mel.as "@android:color/primary_text_light"] `primary_text_light
        | [@mel.as "@android:color/primary_text_light_nodisable"]
          `primary_text_light_nodisable
        | [@mel.as "@android:color/secondary_text_dark"] `secondary_text_dark
        | [@mel.as "@android:color/secondary_text_dark_nodisable"]
          `secondary_text_dark_nodisable
        | [@mel.as "@android:color/secondary_text_light"] `secondary_text_light
        | [@mel.as "@android:color/secondary_text_light_nodisable"]
          `secondary_text_light_nodisable
        | [@mel.as "@android:color/tab_indicator_text"] `tab_indicator_text
        | [@mel.as "@android:color/tertiary_text_dark"] `tertiary_text_dark
        | [@mel.as "@android:color/tertiary_text_light"] `tertiary_text_light
        | [@mel.as "@android:color/transparent"] `transparent
        | [@mel.as "@android:color/white"] `white
        | [@mel.as "@android:color/widget_edittext_dark"] `widget_edittext_dark
        | [@mel.as "?android:attr/colorAccent"] `colorAccent
        | [@mel.as "?android:attr/colorActivatedHighlight"]
          `colorActivatedHighlight
        | [@mel.as "?android:attr/colorBackground"] `colorBackground
        | [@mel.as "?android:attr/colorBackgroundFloating"]
          `colorBackgroundFloating
        | [@mel.as "?android:attr/colorButtonNormal"] `colorButtonNormal
        | [@mel.as "?android:attr/colorControlHighlight"] `colorControlHighlight
        | [@mel.as "?android:attr/colorControlNormal"] `colorControlNormal
        | [@mel.as "?android:attr/colorEdgeEffect"] `colorEdgeEffect
        | [@mel.as "?android:attr/colorError"] `colorError
        | [@mel.as "?android:attr/colorFocusedHighlight"] `colorFocusedHighlight
        | [@mel.as "?android:attr/colorForeground"] `colorForeground
        | [@mel.as "?android:attr/colorForegroundInverse"]
          `colorForegroundInverse
        | [@mel.as "?android:attr/colorLongPressedHighlight"]
          `colorLongPressedHighlight
        | [@mel.as "?android:attr/colorMultiSelectHighlight"]
          `colorMultiSelectHighlight
        | [@mel.as "?android:attr/colorPressedHighlight"] `colorPressedHighlight
        | [@mel.as "?android:attr/colorPrimary"] `colorPrimary
        | [@mel.as "?android:attr/colorPrimaryDark"] `colorPrimaryDark
        | [@mel.as "?android:attr/colorSecondary"] `colorSecondary
      ],
      [@mel.string] [
        | [@mel.as "@android:color/background_dark"] `background_dark
        | [@mel.as "@android:color/background_light"] `background_light
        | [@mel.as "@android:color/black"] `black
        | [@mel.as "@android:color/darker_gray"] `darker_gray
        | [@mel.as "@android:color/holo_blue_bright"] `holo_blue_bright
        | [@mel.as "@android:color/holo_blue_dark"] `holo_blue_dark
        | [@mel.as "@android:color/holo_blue_light"] `holo_blue_light
        | [@mel.as "@android:color/holo_green_dark"] `holo_green_dark
        | [@mel.as "@android:color/holo_green_light"] `holo_green_light
        | [@mel.as "@android:color/holo_orange_dark"] `holo_orange_dark
        | [@mel.as "@android:color/holo_orange_light"] `holo_orange_light
        | [@mel.as "@android:color/holo_purple"] `holo_purple
        | [@mel.as "@android:color/holo_red_dark"] `holo_red_dark
        | [@mel.as "@android:color/holo_red_light"] `holo_red_light
        | [@mel.as "@android:color/primary_text_dark"] `primary_text_dark
        | [@mel.as "@android:color/primary_text_dark_nodisable"]
          `primary_text_dark_nodisable
        | [@mel.as "@android:color/primary_text_light"] `primary_text_light
        | [@mel.as "@android:color/primary_text_light_nodisable"]
          `primary_text_light_nodisable
        | [@mel.as "@android:color/secondary_text_dark"] `secondary_text_dark
        | [@mel.as "@android:color/secondary_text_dark_nodisable"]
          `secondary_text_dark_nodisable
        | [@mel.as "@android:color/secondary_text_light"] `secondary_text_light
        | [@mel.as "@android:color/secondary_text_light_nodisable"]
          `secondary_text_light_nodisable
        | [@mel.as "@android:color/tab_indicator_text"] `tab_indicator_text
        | [@mel.as "@android:color/tertiary_text_dark"] `tertiary_text_dark
        | [@mel.as "@android:color/tertiary_text_light"] `tertiary_text_light
        | [@mel.as "@android:color/transparent"] `transparent
        | [@mel.as "@android:color/white"] `white
        | [@mel.as "@android:color/widget_edittext_dark"] `widget_edittext_dark
        | [@mel.as "?android:attr/colorAccent"] `colorAccent
        | [@mel.as "?android:attr/colorActivatedHighlight"]
          `colorActivatedHighlight
        | [@mel.as "?android:attr/colorBackground"] `colorBackground
        | [@mel.as "?android:attr/colorBackgroundFloating"]
          `colorBackgroundFloating
        | [@mel.as "?android:attr/colorButtonNormal"] `colorButtonNormal
        | [@mel.as "?android:attr/colorControlHighlight"] `colorControlHighlight
        | [@mel.as "?android:attr/colorControlNormal"] `colorControlNormal
        | [@mel.as "?android:attr/colorEdgeEffect"] `colorEdgeEffect
        | [@mel.as "?android:attr/colorError"] `colorError
        | [@mel.as "?android:attr/colorFocusedHighlight"] `colorFocusedHighlight
        | [@mel.as "?android:attr/colorForeground"] `colorForeground
        | [@mel.as "?android:attr/colorForegroundInverse"]
          `colorForegroundInverse
        | [@mel.as "?android:attr/colorLongPressedHighlight"]
          `colorLongPressedHighlight
        | [@mel.as "?android:attr/colorMultiSelectHighlight"]
          `colorMultiSelectHighlight
        | [@mel.as "?android:attr/colorPressedHighlight"] `colorPressedHighlight
        | [@mel.as "?android:attr/colorPrimary"] `colorPrimary
        | [@mel.as "?android:attr/colorPrimaryDark"] `colorPrimaryDark
        | [@mel.as "?android:attr/colorSecondary"] `colorSecondary
      ]
    ) =>
    Color.t =
    "PlatformColor";
  [@mel.module "react-native"]
  external get7:
    (
      [@mel.string] [
        | [@mel.as "@android:color/background_dark"] `background_dark
        | [@mel.as "@android:color/background_light"] `background_light
        | [@mel.as "@android:color/black"] `black
        | [@mel.as "@android:color/darker_gray"] `darker_gray
        | [@mel.as "@android:color/holo_blue_bright"] `holo_blue_bright
        | [@mel.as "@android:color/holo_blue_dark"] `holo_blue_dark
        | [@mel.as "@android:color/holo_blue_light"] `holo_blue_light
        | [@mel.as "@android:color/holo_green_dark"] `holo_green_dark
        | [@mel.as "@android:color/holo_green_light"] `holo_green_light
        | [@mel.as "@android:color/holo_orange_dark"] `holo_orange_dark
        | [@mel.as "@android:color/holo_orange_light"] `holo_orange_light
        | [@mel.as "@android:color/holo_purple"] `holo_purple
        | [@mel.as "@android:color/holo_red_dark"] `holo_red_dark
        | [@mel.as "@android:color/holo_red_light"] `holo_red_light
        | [@mel.as "@android:color/primary_text_dark"] `primary_text_dark
        | [@mel.as "@android:color/primary_text_dark_nodisable"]
          `primary_text_dark_nodisable
        | [@mel.as "@android:color/primary_text_light"] `primary_text_light
        | [@mel.as "@android:color/primary_text_light_nodisable"]
          `primary_text_light_nodisable
        | [@mel.as "@android:color/secondary_text_dark"] `secondary_text_dark
        | [@mel.as "@android:color/secondary_text_dark_nodisable"]
          `secondary_text_dark_nodisable
        | [@mel.as "@android:color/secondary_text_light"] `secondary_text_light
        | [@mel.as "@android:color/secondary_text_light_nodisable"]
          `secondary_text_light_nodisable
        | [@mel.as "@android:color/tab_indicator_text"] `tab_indicator_text
        | [@mel.as "@android:color/tertiary_text_dark"] `tertiary_text_dark
        | [@mel.as "@android:color/tertiary_text_light"] `tertiary_text_light
        | [@mel.as "@android:color/transparent"] `transparent
        | [@mel.as "@android:color/white"] `white
        | [@mel.as "@android:color/widget_edittext_dark"] `widget_edittext_dark
        | [@mel.as "?android:attr/colorAccent"] `colorAccent
        | [@mel.as "?android:attr/colorActivatedHighlight"]
          `colorActivatedHighlight
        | [@mel.as "?android:attr/colorBackground"] `colorBackground
        | [@mel.as "?android:attr/colorBackgroundFloating"]
          `colorBackgroundFloating
        | [@mel.as "?android:attr/colorButtonNormal"] `colorButtonNormal
        | [@mel.as "?android:attr/colorControlHighlight"] `colorControlHighlight
        | [@mel.as "?android:attr/colorControlNormal"] `colorControlNormal
        | [@mel.as "?android:attr/colorEdgeEffect"] `colorEdgeEffect
        | [@mel.as "?android:attr/colorError"] `colorError
        | [@mel.as "?android:attr/colorFocusedHighlight"] `colorFocusedHighlight
        | [@mel.as "?android:attr/colorForeground"] `colorForeground
        | [@mel.as "?android:attr/colorForegroundInverse"]
          `colorForegroundInverse
        | [@mel.as "?android:attr/colorLongPressedHighlight"]
          `colorLongPressedHighlight
        | [@mel.as "?android:attr/colorMultiSelectHighlight"]
          `colorMultiSelectHighlight
        | [@mel.as "?android:attr/colorPressedHighlight"] `colorPressedHighlight
        | [@mel.as "?android:attr/colorPrimary"] `colorPrimary
        | [@mel.as "?android:attr/colorPrimaryDark"] `colorPrimaryDark
        | [@mel.as "?android:attr/colorSecondary"] `colorSecondary
      ],
      [@mel.string] [
        | [@mel.as "@android:color/background_dark"] `background_dark
        | [@mel.as "@android:color/background_light"] `background_light
        | [@mel.as "@android:color/black"] `black
        | [@mel.as "@android:color/darker_gray"] `darker_gray
        | [@mel.as "@android:color/holo_blue_bright"] `holo_blue_bright
        | [@mel.as "@android:color/holo_blue_dark"] `holo_blue_dark
        | [@mel.as "@android:color/holo_blue_light"] `holo_blue_light
        | [@mel.as "@android:color/holo_green_dark"] `holo_green_dark
        | [@mel.as "@android:color/holo_green_light"] `holo_green_light
        | [@mel.as "@android:color/holo_orange_dark"] `holo_orange_dark
        | [@mel.as "@android:color/holo_orange_light"] `holo_orange_light
        | [@mel.as "@android:color/holo_purple"] `holo_purple
        | [@mel.as "@android:color/holo_red_dark"] `holo_red_dark
        | [@mel.as "@android:color/holo_red_light"] `holo_red_light
        | [@mel.as "@android:color/primary_text_dark"] `primary_text_dark
        | [@mel.as "@android:color/primary_text_dark_nodisable"]
          `primary_text_dark_nodisable
        | [@mel.as "@android:color/primary_text_light"] `primary_text_light
        | [@mel.as "@android:color/primary_text_light_nodisable"]
          `primary_text_light_nodisable
        | [@mel.as "@android:color/secondary_text_dark"] `secondary_text_dark
        | [@mel.as "@android:color/secondary_text_dark_nodisable"]
          `secondary_text_dark_nodisable
        | [@mel.as "@android:color/secondary_text_light"] `secondary_text_light
        | [@mel.as "@android:color/secondary_text_light_nodisable"]
          `secondary_text_light_nodisable
        | [@mel.as "@android:color/tab_indicator_text"] `tab_indicator_text
        | [@mel.as "@android:color/tertiary_text_dark"] `tertiary_text_dark
        | [@mel.as "@android:color/tertiary_text_light"] `tertiary_text_light
        | [@mel.as "@android:color/transparent"] `transparent
        | [@mel.as "@android:color/white"] `white
        | [@mel.as "@android:color/widget_edittext_dark"] `widget_edittext_dark
        | [@mel.as "?android:attr/colorAccent"] `colorAccent
        | [@mel.as "?android:attr/colorActivatedHighlight"]
          `colorActivatedHighlight
        | [@mel.as "?android:attr/colorBackground"] `colorBackground
        | [@mel.as "?android:attr/colorBackgroundFloating"]
          `colorBackgroundFloating
        | [@mel.as "?android:attr/colorButtonNormal"] `colorButtonNormal
        | [@mel.as "?android:attr/colorControlHighlight"] `colorControlHighlight
        | [@mel.as "?android:attr/colorControlNormal"] `colorControlNormal
        | [@mel.as "?android:attr/colorEdgeEffect"] `colorEdgeEffect
        | [@mel.as "?android:attr/colorError"] `colorError
        | [@mel.as "?android:attr/colorFocusedHighlight"] `colorFocusedHighlight
        | [@mel.as "?android:attr/colorForeground"] `colorForeground
        | [@mel.as "?android:attr/colorForegroundInverse"]
          `colorForegroundInverse
        | [@mel.as "?android:attr/colorLongPressedHighlight"]
          `colorLongPressedHighlight
        | [@mel.as "?android:attr/colorMultiSelectHighlight"]
          `colorMultiSelectHighlight
        | [@mel.as "?android:attr/colorPressedHighlight"] `colorPressedHighlight
        | [@mel.as "?android:attr/colorPrimary"] `colorPrimary
        | [@mel.as "?android:attr/colorPrimaryDark"] `colorPrimaryDark
        | [@mel.as "?android:attr/colorSecondary"] `colorSecondary
      ],
      [@mel.string] [
        | [@mel.as "@android:color/background_dark"] `background_dark
        | [@mel.as "@android:color/background_light"] `background_light
        | [@mel.as "@android:color/black"] `black
        | [@mel.as "@android:color/darker_gray"] `darker_gray
        | [@mel.as "@android:color/holo_blue_bright"] `holo_blue_bright
        | [@mel.as "@android:color/holo_blue_dark"] `holo_blue_dark
        | [@mel.as "@android:color/holo_blue_light"] `holo_blue_light
        | [@mel.as "@android:color/holo_green_dark"] `holo_green_dark
        | [@mel.as "@android:color/holo_green_light"] `holo_green_light
        | [@mel.as "@android:color/holo_orange_dark"] `holo_orange_dark
        | [@mel.as "@android:color/holo_orange_light"] `holo_orange_light
        | [@mel.as "@android:color/holo_purple"] `holo_purple
        | [@mel.as "@android:color/holo_red_dark"] `holo_red_dark
        | [@mel.as "@android:color/holo_red_light"] `holo_red_light
        | [@mel.as "@android:color/primary_text_dark"] `primary_text_dark
        | [@mel.as "@android:color/primary_text_dark_nodisable"]
          `primary_text_dark_nodisable
        | [@mel.as "@android:color/primary_text_light"] `primary_text_light
        | [@mel.as "@android:color/primary_text_light_nodisable"]
          `primary_text_light_nodisable
        | [@mel.as "@android:color/secondary_text_dark"] `secondary_text_dark
        | [@mel.as "@android:color/secondary_text_dark_nodisable"]
          `secondary_text_dark_nodisable
        | [@mel.as "@android:color/secondary_text_light"] `secondary_text_light
        | [@mel.as "@android:color/secondary_text_light_nodisable"]
          `secondary_text_light_nodisable
        | [@mel.as "@android:color/tab_indicator_text"] `tab_indicator_text
        | [@mel.as "@android:color/tertiary_text_dark"] `tertiary_text_dark
        | [@mel.as "@android:color/tertiary_text_light"] `tertiary_text_light
        | [@mel.as "@android:color/transparent"] `transparent
        | [@mel.as "@android:color/white"] `white
        | [@mel.as "@android:color/widget_edittext_dark"] `widget_edittext_dark
        | [@mel.as "?android:attr/colorAccent"] `colorAccent
        | [@mel.as "?android:attr/colorActivatedHighlight"]
          `colorActivatedHighlight
        | [@mel.as "?android:attr/colorBackground"] `colorBackground
        | [@mel.as "?android:attr/colorBackgroundFloating"]
          `colorBackgroundFloating
        | [@mel.as "?android:attr/colorButtonNormal"] `colorButtonNormal
        | [@mel.as "?android:attr/colorControlHighlight"] `colorControlHighlight
        | [@mel.as "?android:attr/colorControlNormal"] `colorControlNormal
        | [@mel.as "?android:attr/colorEdgeEffect"] `colorEdgeEffect
        | [@mel.as "?android:attr/colorError"] `colorError
        | [@mel.as "?android:attr/colorFocusedHighlight"] `colorFocusedHighlight
        | [@mel.as "?android:attr/colorForeground"] `colorForeground
        | [@mel.as "?android:attr/colorForegroundInverse"]
          `colorForegroundInverse
        | [@mel.as "?android:attr/colorLongPressedHighlight"]
          `colorLongPressedHighlight
        | [@mel.as "?android:attr/colorMultiSelectHighlight"]
          `colorMultiSelectHighlight
        | [@mel.as "?android:attr/colorPressedHighlight"] `colorPressedHighlight
        | [@mel.as "?android:attr/colorPrimary"] `colorPrimary
        | [@mel.as "?android:attr/colorPrimaryDark"] `colorPrimaryDark
        | [@mel.as "?android:attr/colorSecondary"] `colorSecondary
      ],
      [@mel.string] [
        | [@mel.as "@android:color/background_dark"] `background_dark
        | [@mel.as "@android:color/background_light"] `background_light
        | [@mel.as "@android:color/black"] `black
        | [@mel.as "@android:color/darker_gray"] `darker_gray
        | [@mel.as "@android:color/holo_blue_bright"] `holo_blue_bright
        | [@mel.as "@android:color/holo_blue_dark"] `holo_blue_dark
        | [@mel.as "@android:color/holo_blue_light"] `holo_blue_light
        | [@mel.as "@android:color/holo_green_dark"] `holo_green_dark
        | [@mel.as "@android:color/holo_green_light"] `holo_green_light
        | [@mel.as "@android:color/holo_orange_dark"] `holo_orange_dark
        | [@mel.as "@android:color/holo_orange_light"] `holo_orange_light
        | [@mel.as "@android:color/holo_purple"] `holo_purple
        | [@mel.as "@android:color/holo_red_dark"] `holo_red_dark
        | [@mel.as "@android:color/holo_red_light"] `holo_red_light
        | [@mel.as "@android:color/primary_text_dark"] `primary_text_dark
        | [@mel.as "@android:color/primary_text_dark_nodisable"]
          `primary_text_dark_nodisable
        | [@mel.as "@android:color/primary_text_light"] `primary_text_light
        | [@mel.as "@android:color/primary_text_light_nodisable"]
          `primary_text_light_nodisable
        | [@mel.as "@android:color/secondary_text_dark"] `secondary_text_dark
        | [@mel.as "@android:color/secondary_text_dark_nodisable"]
          `secondary_text_dark_nodisable
        | [@mel.as "@android:color/secondary_text_light"] `secondary_text_light
        | [@mel.as "@android:color/secondary_text_light_nodisable"]
          `secondary_text_light_nodisable
        | [@mel.as "@android:color/tab_indicator_text"] `tab_indicator_text
        | [@mel.as "@android:color/tertiary_text_dark"] `tertiary_text_dark
        | [@mel.as "@android:color/tertiary_text_light"] `tertiary_text_light
        | [@mel.as "@android:color/transparent"] `transparent
        | [@mel.as "@android:color/white"] `white
        | [@mel.as "@android:color/widget_edittext_dark"] `widget_edittext_dark
        | [@mel.as "?android:attr/colorAccent"] `colorAccent
        | [@mel.as "?android:attr/colorActivatedHighlight"]
          `colorActivatedHighlight
        | [@mel.as "?android:attr/colorBackground"] `colorBackground
        | [@mel.as "?android:attr/colorBackgroundFloating"]
          `colorBackgroundFloating
        | [@mel.as "?android:attr/colorButtonNormal"] `colorButtonNormal
        | [@mel.as "?android:attr/colorControlHighlight"] `colorControlHighlight
        | [@mel.as "?android:attr/colorControlNormal"] `colorControlNormal
        | [@mel.as "?android:attr/colorEdgeEffect"] `colorEdgeEffect
        | [@mel.as "?android:attr/colorError"] `colorError
        | [@mel.as "?android:attr/colorFocusedHighlight"] `colorFocusedHighlight
        | [@mel.as "?android:attr/colorForeground"] `colorForeground
        | [@mel.as "?android:attr/colorForegroundInverse"]
          `colorForegroundInverse
        | [@mel.as "?android:attr/colorLongPressedHighlight"]
          `colorLongPressedHighlight
        | [@mel.as "?android:attr/colorMultiSelectHighlight"]
          `colorMultiSelectHighlight
        | [@mel.as "?android:attr/colorPressedHighlight"] `colorPressedHighlight
        | [@mel.as "?android:attr/colorPrimary"] `colorPrimary
        | [@mel.as "?android:attr/colorPrimaryDark"] `colorPrimaryDark
        | [@mel.as "?android:attr/colorSecondary"] `colorSecondary
      ],
      [@mel.string] [
        | [@mel.as "@android:color/background_dark"] `background_dark
        | [@mel.as "@android:color/background_light"] `background_light
        | [@mel.as "@android:color/black"] `black
        | [@mel.as "@android:color/darker_gray"] `darker_gray
        | [@mel.as "@android:color/holo_blue_bright"] `holo_blue_bright
        | [@mel.as "@android:color/holo_blue_dark"] `holo_blue_dark
        | [@mel.as "@android:color/holo_blue_light"] `holo_blue_light
        | [@mel.as "@android:color/holo_green_dark"] `holo_green_dark
        | [@mel.as "@android:color/holo_green_light"] `holo_green_light
        | [@mel.as "@android:color/holo_orange_dark"] `holo_orange_dark
        | [@mel.as "@android:color/holo_orange_light"] `holo_orange_light
        | [@mel.as "@android:color/holo_purple"] `holo_purple
        | [@mel.as "@android:color/holo_red_dark"] `holo_red_dark
        | [@mel.as "@android:color/holo_red_light"] `holo_red_light
        | [@mel.as "@android:color/primary_text_dark"] `primary_text_dark
        | [@mel.as "@android:color/primary_text_dark_nodisable"]
          `primary_text_dark_nodisable
        | [@mel.as "@android:color/primary_text_light"] `primary_text_light
        | [@mel.as "@android:color/primary_text_light_nodisable"]
          `primary_text_light_nodisable
        | [@mel.as "@android:color/secondary_text_dark"] `secondary_text_dark
        | [@mel.as "@android:color/secondary_text_dark_nodisable"]
          `secondary_text_dark_nodisable
        | [@mel.as "@android:color/secondary_text_light"] `secondary_text_light
        | [@mel.as "@android:color/secondary_text_light_nodisable"]
          `secondary_text_light_nodisable
        | [@mel.as "@android:color/tab_indicator_text"] `tab_indicator_text
        | [@mel.as "@android:color/tertiary_text_dark"] `tertiary_text_dark
        | [@mel.as "@android:color/tertiary_text_light"] `tertiary_text_light
        | [@mel.as "@android:color/transparent"] `transparent
        | [@mel.as "@android:color/white"] `white
        | [@mel.as "@android:color/widget_edittext_dark"] `widget_edittext_dark
        | [@mel.as "?android:attr/colorAccent"] `colorAccent
        | [@mel.as "?android:attr/colorActivatedHighlight"]
          `colorActivatedHighlight
        | [@mel.as "?android:attr/colorBackground"] `colorBackground
        | [@mel.as "?android:attr/colorBackgroundFloating"]
          `colorBackgroundFloating
        | [@mel.as "?android:attr/colorButtonNormal"] `colorButtonNormal
        | [@mel.as "?android:attr/colorControlHighlight"] `colorControlHighlight
        | [@mel.as "?android:attr/colorControlNormal"] `colorControlNormal
        | [@mel.as "?android:attr/colorEdgeEffect"] `colorEdgeEffect
        | [@mel.as "?android:attr/colorError"] `colorError
        | [@mel.as "?android:attr/colorFocusedHighlight"] `colorFocusedHighlight
        | [@mel.as "?android:attr/colorForeground"] `colorForeground
        | [@mel.as "?android:attr/colorForegroundInverse"]
          `colorForegroundInverse
        | [@mel.as "?android:attr/colorLongPressedHighlight"]
          `colorLongPressedHighlight
        | [@mel.as "?android:attr/colorMultiSelectHighlight"]
          `colorMultiSelectHighlight
        | [@mel.as "?android:attr/colorPressedHighlight"] `colorPressedHighlight
        | [@mel.as "?android:attr/colorPrimary"] `colorPrimary
        | [@mel.as "?android:attr/colorPrimaryDark"] `colorPrimaryDark
        | [@mel.as "?android:attr/colorSecondary"] `colorSecondary
      ],
      [@mel.string] [
        | [@mel.as "@android:color/background_dark"] `background_dark
        | [@mel.as "@android:color/background_light"] `background_light
        | [@mel.as "@android:color/black"] `black
        | [@mel.as "@android:color/darker_gray"] `darker_gray
        | [@mel.as "@android:color/holo_blue_bright"] `holo_blue_bright
        | [@mel.as "@android:color/holo_blue_dark"] `holo_blue_dark
        | [@mel.as "@android:color/holo_blue_light"] `holo_blue_light
        | [@mel.as "@android:color/holo_green_dark"] `holo_green_dark
        | [@mel.as "@android:color/holo_green_light"] `holo_green_light
        | [@mel.as "@android:color/holo_orange_dark"] `holo_orange_dark
        | [@mel.as "@android:color/holo_orange_light"] `holo_orange_light
        | [@mel.as "@android:color/holo_purple"] `holo_purple
        | [@mel.as "@android:color/holo_red_dark"] `holo_red_dark
        | [@mel.as "@android:color/holo_red_light"] `holo_red_light
        | [@mel.as "@android:color/primary_text_dark"] `primary_text_dark
        | [@mel.as "@android:color/primary_text_dark_nodisable"]
          `primary_text_dark_nodisable
        | [@mel.as "@android:color/primary_text_light"] `primary_text_light
        | [@mel.as "@android:color/primary_text_light_nodisable"]
          `primary_text_light_nodisable
        | [@mel.as "@android:color/secondary_text_dark"] `secondary_text_dark
        | [@mel.as "@android:color/secondary_text_dark_nodisable"]
          `secondary_text_dark_nodisable
        | [@mel.as "@android:color/secondary_text_light"] `secondary_text_light
        | [@mel.as "@android:color/secondary_text_light_nodisable"]
          `secondary_text_light_nodisable
        | [@mel.as "@android:color/tab_indicator_text"] `tab_indicator_text
        | [@mel.as "@android:color/tertiary_text_dark"] `tertiary_text_dark
        | [@mel.as "@android:color/tertiary_text_light"] `tertiary_text_light
        | [@mel.as "@android:color/transparent"] `transparent
        | [@mel.as "@android:color/white"] `white
        | [@mel.as "@android:color/widget_edittext_dark"] `widget_edittext_dark
        | [@mel.as "?android:attr/colorAccent"] `colorAccent
        | [@mel.as "?android:attr/colorActivatedHighlight"]
          `colorActivatedHighlight
        | [@mel.as "?android:attr/colorBackground"] `colorBackground
        | [@mel.as "?android:attr/colorBackgroundFloating"]
          `colorBackgroundFloating
        | [@mel.as "?android:attr/colorButtonNormal"] `colorButtonNormal
        | [@mel.as "?android:attr/colorControlHighlight"] `colorControlHighlight
        | [@mel.as "?android:attr/colorControlNormal"] `colorControlNormal
        | [@mel.as "?android:attr/colorEdgeEffect"] `colorEdgeEffect
        | [@mel.as "?android:attr/colorError"] `colorError
        | [@mel.as "?android:attr/colorFocusedHighlight"] `colorFocusedHighlight
        | [@mel.as "?android:attr/colorForeground"] `colorForeground
        | [@mel.as "?android:attr/colorForegroundInverse"]
          `colorForegroundInverse
        | [@mel.as "?android:attr/colorLongPressedHighlight"]
          `colorLongPressedHighlight
        | [@mel.as "?android:attr/colorMultiSelectHighlight"]
          `colorMultiSelectHighlight
        | [@mel.as "?android:attr/colorPressedHighlight"] `colorPressedHighlight
        | [@mel.as "?android:attr/colorPrimary"] `colorPrimary
        | [@mel.as "?android:attr/colorPrimaryDark"] `colorPrimaryDark
        | [@mel.as "?android:attr/colorSecondary"] `colorSecondary
      ],
      [@mel.string] [
        | [@mel.as "@android:color/background_dark"] `background_dark
        | [@mel.as "@android:color/background_light"] `background_light
        | [@mel.as "@android:color/black"] `black
        | [@mel.as "@android:color/darker_gray"] `darker_gray
        | [@mel.as "@android:color/holo_blue_bright"] `holo_blue_bright
        | [@mel.as "@android:color/holo_blue_dark"] `holo_blue_dark
        | [@mel.as "@android:color/holo_blue_light"] `holo_blue_light
        | [@mel.as "@android:color/holo_green_dark"] `holo_green_dark
        | [@mel.as "@android:color/holo_green_light"] `holo_green_light
        | [@mel.as "@android:color/holo_orange_dark"] `holo_orange_dark
        | [@mel.as "@android:color/holo_orange_light"] `holo_orange_light
        | [@mel.as "@android:color/holo_purple"] `holo_purple
        | [@mel.as "@android:color/holo_red_dark"] `holo_red_dark
        | [@mel.as "@android:color/holo_red_light"] `holo_red_light
        | [@mel.as "@android:color/primary_text_dark"] `primary_text_dark
        | [@mel.as "@android:color/primary_text_dark_nodisable"]
          `primary_text_dark_nodisable
        | [@mel.as "@android:color/primary_text_light"] `primary_text_light
        | [@mel.as "@android:color/primary_text_light_nodisable"]
          `primary_text_light_nodisable
        | [@mel.as "@android:color/secondary_text_dark"] `secondary_text_dark
        | [@mel.as "@android:color/secondary_text_dark_nodisable"]
          `secondary_text_dark_nodisable
        | [@mel.as "@android:color/secondary_text_light"] `secondary_text_light
        | [@mel.as "@android:color/secondary_text_light_nodisable"]
          `secondary_text_light_nodisable
        | [@mel.as "@android:color/tab_indicator_text"] `tab_indicator_text
        | [@mel.as "@android:color/tertiary_text_dark"] `tertiary_text_dark
        | [@mel.as "@android:color/tertiary_text_light"] `tertiary_text_light
        | [@mel.as "@android:color/transparent"] `transparent
        | [@mel.as "@android:color/white"] `white
        | [@mel.as "@android:color/widget_edittext_dark"] `widget_edittext_dark
        | [@mel.as "?android:attr/colorAccent"] `colorAccent
        | [@mel.as "?android:attr/colorActivatedHighlight"]
          `colorActivatedHighlight
        | [@mel.as "?android:attr/colorBackground"] `colorBackground
        | [@mel.as "?android:attr/colorBackgroundFloating"]
          `colorBackgroundFloating
        | [@mel.as "?android:attr/colorButtonNormal"] `colorButtonNormal
        | [@mel.as "?android:attr/colorControlHighlight"] `colorControlHighlight
        | [@mel.as "?android:attr/colorControlNormal"] `colorControlNormal
        | [@mel.as "?android:attr/colorEdgeEffect"] `colorEdgeEffect
        | [@mel.as "?android:attr/colorError"] `colorError
        | [@mel.as "?android:attr/colorFocusedHighlight"] `colorFocusedHighlight
        | [@mel.as "?android:attr/colorForeground"] `colorForeground
        | [@mel.as "?android:attr/colorForegroundInverse"]
          `colorForegroundInverse
        | [@mel.as "?android:attr/colorLongPressedHighlight"]
          `colorLongPressedHighlight
        | [@mel.as "?android:attr/colorMultiSelectHighlight"]
          `colorMultiSelectHighlight
        | [@mel.as "?android:attr/colorPressedHighlight"] `colorPressedHighlight
        | [@mel.as "?android:attr/colorPrimary"] `colorPrimary
        | [@mel.as "?android:attr/colorPrimaryDark"] `colorPrimaryDark
        | [@mel.as "?android:attr/colorSecondary"] `colorSecondary
      ]
    ) =>
    Color.t =
    "PlatformColor";
};
