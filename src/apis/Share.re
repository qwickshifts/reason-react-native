type content;
type options;

[@mel.obj]
external content:
  (~title: string=?, ~message: string=?, ~url: string=?, unit) => content;

[@mel.obj]
external options:
  (
    ~subject: string=?,
    ~tintColor: string=?,
    ~excludedActivityTypes: array(string)=?,
    ~dialogTitle: string=?,
    unit
  ) =>
  options;

type action;

[@mel.module "react-native"] [@mel.scope "Share"]
external sharedAction: action = "sharedAction";

[@mel.module "react-native"] [@mel.scope "Share"]
external dismissedAction: action = "dismissedAction";

type shareResult = {
  action,
  activityType: option(string),
};

// multiple externals
[@mel.module "react-native"] [@mel.scope "Share"]
external share: content => Js.Promise.t(shareResult) = "share";

// multiple externals
[@mel.module "react-native"] [@mel.scope "Share"]
external shareWithOptions: (content, options) => Js.Promise.t(bool) = "share";
