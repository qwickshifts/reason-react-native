type options = {
  dialogTitle: option(string),
  excludedActivityTypes: option(array(string)),
  tintColor: option(Style.t), // TODO: probably wrong
  subject: option(string),
  anchor: option(int),
};
type action = {
  action: [ | `sharedAction | `dismissedAction],
  activityType: option(string),
};

type t;
[@mel.obj]
external t:
  (
    ~title: option(string)=?,
    ~url: option(string)=?,
    ~message: option(string)=?,
    unit
  ) =>
  t;

[@mel.module "react-native"] [@mel.scope "Share"]
external share: (t, ~options: options=?) => Js.Promise.t(action) = "share";

// TODO: this isn't actually platform specific but naming is hard
type mesReq = {
  title: option(string),
  message: string,
  url: option(string),
};

type urlReq = {
  title: option(string),
  message: option(string),
  url: string,
};

type s =
  | URLReq(urlReq)
  | MessageReq(mesReq);

let share = (~options: option(options)=?) =>
  fun
  | MessageReq({title, message, url}) =>
    share(t(~title, ~url, ~message=Some(message), ()), ~options?)
  | URLReq({title, message, url}) =>
    share(t(~title, ~url=Some(url), ~message, ()), ~options?);
