type shareOptions = {
  dialogTitle: option(string),
  excludedActivityTypes: option(array(string)),
  tintColor: option(Style.t), // TODO: probably wrong
  subject: option(string),
  anchor: option(int),
};
type shareAction = {
  action: [ | `sharedAction | `dismissedAction],
  activityType: option(string),
};

[@mel.module "react-native"] [@mel.scope "Share"]
external share:
  (
    [@mel.unwrap] [
      | `UrlRequired(
          {
            .
            title: option(string),
            url: string,
            message: option(string),
          },
        )
      | `MessageRequired(
          {
            .
            title: option(string),
            url: option(string),
            message: string,
          },
        )
    ],
    ~options: shareOptions=?
  ) =>
  Js.Promise.t(shareAction) =
  "share";
