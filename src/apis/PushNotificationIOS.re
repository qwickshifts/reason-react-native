module Notification = {
  type t;

  [@mel.send] [@mel.return nullable]
  external getAlert: t => option(Js.Json.t) = "getAlert";

  [@mel.send] [@mel.return nullable]
  external getMessage: t => option(Js.Json.t) = "getMessage";

  [@mel.send] [@mel.return nullable]
  external getSound: t => option(string) = "getSound";

  [@mel.send] [@mel.return nullable]
  external getCategory: t => option(string) = "getCategory";

  // Actually type ContentAvailable = 1 | null | void ...
  [@mel.send] external getContentAvailable: t => bool = "getContentAvailable";

  [@mel.send] [@mel.return nullable]
  external getBadgeCount: t => option(int) = "getBadgeCount";

  [@mel.send] [@mel.return nullable]
  external getData: t => option(Js.Json.t) = "getData";

  [@mel.send] [@mel.return nullable]
  external getThreadID: t => option(string) = "getThreadID";
};

type localNotification;

type repeatInterval = [ | `minute | `hour | `day | `week | `month | `year];

[@mel.obj]
external localNotification:
  (
    ~alertBody: string=?,
    ~alertTitle: string=?,
    ~alertAction: string=?,
    ~soundName: string=?,
    ~isSilent: bool=?,
    ~category: string=?,
    ~userInfo: Js.Json.t=?,
    ~applicationIconBadgeNumber: int=?,
    ~fireDate: Js.Date.t=?,
    ~repeatInterval: repeatInterval=?,
    unit
  ) =>
  localNotification;

[@mel.module "react-native"] [@mel.scope "PushNotificationIOS"]
external presentLocalNotification: localNotification => unit =
  "presentLocalNotification";

[@mel.module "react-native"] [@mel.scope "PushNotificationIOS"]
external scheduleLocalNotification: localNotification => unit =
  "scheduleLocalNotification";

[@mel.module "react-native"] [@mel.scope "PushNotificationIOS"]
external cancelAllLocalNotifications: unit => unit =
  "cancelAllLocalNotifications";

[@mel.module "react-native"] [@mel.scope "PushNotificationIOS"]
external removeAllDeliveredNotifications: unit => unit =
  "removeAllDeliveredNotifications";

type deliveredNotification = {
  identifier: string,
  date: Js.Nullable.t(string),
  title: Js.Nullable.t(string),
  body: Js.Nullable.t(string),
  category: Js.Nullable.t(string),
  [@mel.as "thread-id"]
  threadId: Js.Nullable.t(string),
  userInfo: Js.Nullable.t(Js.Json.t),
};

[@mel.module "react-native"] [@mel.scope "PushNotificationIOS"]
external getDeliveredNotifications:
  (array(deliveredNotification) => unit) => unit =
  "getDeliveredNotifications";

[@mel.module "react-native"] [@mel.scope "PushNotificationIOS"]
external removeDeliveredNotifications: (~identifiers: array(string)) => unit =
  "removeDeliveredNotifications";

[@mel.module "react-native"] [@mel.scope "PushNotificationIOS"]
external setApplicationIconBadgeNumber: int => unit =
  "setApplicationIconBadgeNumber";

[@mel.module "react-native"] [@mel.scope "PushNotificationIOS"]
external getApplicationIconBadgeNumber: (int => unit) => unit =
  "getApplicationIconBadgeNumber";

// multiple externals
[@mel.module "react-native"] [@mel.scope "PushNotificationIOS"]
external cancelLocalNotifications: unit => unit = "cancelLocalNotifications";

// multiple externals
[@mel.module "react-native"] [@mel.scope "PushNotificationIOS"]
external cancelLocalNotificationsWithUserInfo: Js.Json.t => unit =
  "cancelLocalNotifications";

type formattedLocalNotification = {
  fireDate: Js.Nullable.t(string),
  alertAction: Js.Nullable.t(string),
  alertBody: Js.Nullable.t(string),
  applicationIconBadgeNumber: Js.Nullable.t(int),
  category: Js.Nullable.t(string),
  soundName: Js.Nullable.t(string),
  userInfo: Js.Nullable.t(Js.Json.t),
};

[@mel.module "react-native"] [@mel.scope "PushNotificationIOS"]
external getScheduledLocalNotifications:
  (array(formattedLocalNotification) => unit) => unit =
  "getScheduledLocalNotifications";

type registrationError('a) = {
  message: string,
  code: int,
  details: Js.t('a),
};

[@mel.module "react-native"] [@mel.scope "PushNotificationIOS"]
external addEventListener:
  (
  [@mel.string]
  [
    | `notification(Notification.t => unit)
    | `localNotification(Notification.t => unit)
    | `register((~deviceToken: string) => unit)
    | `registrationError(registrationError('a) => unit)
  ]
  ) =>
  unit =
  "addEventListener";

[@mel.module "react-native"] [@mel.scope "PushNotificationIOS"]
external removeEventListener:
  (
  [@mel.string]
  [
    | `notification(Notification.t => unit)
    | `localNotification(Notification.t => unit)
    | `register((~deviceToken: string) => unit)
    | `registrationError(registrationError('a) => unit)
  ]
  ) =>
  unit =
  "removeEventListener";

type permissions = {
  .
  "alert": bool,
  "badge": bool,
  "sound": bool,
};

type requestPermissionsOptions;
[@mel.obj]
external requestPermissionsOptions:
  (~alert: bool=?, ~badge: bool=?, ~sound: bool=?, unit) =>
  requestPermissionsOptions;

// multiple externals
[@mel.module "react-native"] [@mel.scope "PushNotificationIOS"]
external requestPermissions: unit => Js.Promise.t(permissions) =
  "requestPermissions";

// multiple externals
[@mel.module "react-native"] [@mel.scope "PushNotificationIOS"]
external requestPermissionsWithOptions:
  requestPermissionsOptions => Js.Promise.t(permissions) =
  "requestPermissions";

[@mel.module "react-native"] [@mel.scope "PushNotificationIOS"]
external abandonPermissions: unit => unit = "abandonPermissions";

[@mel.module "react-native"] [@mel.scope "PushNotificationIOS"]
external checkPermissions: (unit => permissions) => unit = "checkPermissions";

type fetchResult;
[@mel.obj]
external fetchResult:
  (~_NewData: string=?, ~_NoData: string=?, ~_ResultFailed: string=?, unit) =>
  fetchResult;

[@mel.module "react-native"] [@mel.scope "PushNotificationIOS"]
external finish: fetchResult => unit = "fetchResult";

[@mel.module "react-native"] [@mel.scope "PushNotificationIOS"]
external getInitialNotification:
  unit => Js.Promise.t(Js.Nullable.t(Notification.t)) =
  "getInitialNotification";
