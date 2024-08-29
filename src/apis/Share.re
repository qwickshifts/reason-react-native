type action = [ | `sharedAction | `dismissedAction];

type result = {
  action,
  activityType: string,
};

[@deriving jsProperties]
type messageContent = {
  message: string,
  [@mel.optional]
  url: option(string),
  [@mel.optional]
  title: option(string),
};

[@deriving jsProperties]
type urlContent = {
  [@mel.optional]
  message: option(string),
  url: string,
  [@mel.optional]
  title: option(string),
};

[@deriving jsProperties]
type options = {
  [@mel.optional]
  dialogTitle: option(string),
  [@mel.optional]
  excludedActivityTypes: option(array(string)),
  [@mel.optional]
  tintColor: option(Color.t),
  [@mel.optional]
  subject: option(string),
  [@mel.optional]
  anchor: option(float),
};

[@mel.module "react-native"] [@mel.scope "Share"]
external share:
  (
    ~content: [@mel.unwrap] [
                | `messageRequired(messageContent)
                | `urlRequired(urlContent)
              ],
    ~options: options=?
  ) =>
  Js.Promise.t(result) =
  "share";
let share = (~options=?, content) => share(~content, ~options?);
