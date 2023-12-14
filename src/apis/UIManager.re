type popupAction;

[@mel.module "react-native"] [@mel.scope ("UIManager", "PopupMenu")]
external itemSelected: popupAction = "itemSelected";

[@mel.module "react-native"] [@mel.scope ("UIManager", "PopupMenu")]
external dismissed: popupAction = "dismissed";

// Android-only. This function is intended to be removed in the future,
// at which point it would return undefined. Accordingly it is wrapped in
// option.
[@mel.module "react-native"] [@mel.scope "UIManager"]
external setLayoutAnimationEnabledExperimental: option(bool => unit) =
  "setLayoutAnimationEnabledExperimental";

// Android-only
[@mel.module "react-native"] [@mel.scope "UIManager"]
external showPopupMenu:
  (
    int,
    array(string),
    ~onError: unit => unit,
    ~onSuccess: (popupAction, option(int)) => unit
  ) =>
  unit =
  "showPopupMenu";

// Android-only
[@mel.module "react-native"] [@mel.scope "UIManager"]
external dismissPopupMenu: unit => unit = "dismissPopupMenu";

[@mel.module "react-native"] [@mel.scope "UIManager"]
external setJSResponder: (int, bool) => unit = "setJSResponder";

[@mel.module "react-native"] [@mel.scope "UIManager"]
external clearJSResponder: unit => unit = "clearJSResponder";
