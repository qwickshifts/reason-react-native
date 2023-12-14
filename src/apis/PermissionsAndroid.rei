module Permission: {
  type t;

  [@mel.module "react-native"]
  [@mel.scope ("PermissionsAndroid", "PERMISSIONS")]
  external readCalendar: t = "READ_CALENDAR";

  [@mel.module "react-native"]
  [@mel.scope ("PermissionsAndroid", "PERMISSIONS")]
  external writeCalendar: t = "WRITE_CALENDAR";

  [@mel.module "react-native"]
  [@mel.scope ("PermissionsAndroid", "PERMISSIONS")]
  external camera: t = "CAMERA";

  [@mel.module "react-native"]
  [@mel.scope ("PermissionsAndroid", "PERMISSIONS")]
  external readContacts: t = "READ_CONTACTS";

  [@mel.module "react-native"]
  [@mel.scope ("PermissionsAndroid", "PERMISSIONS")]
  external writeContacts: t = "WRITE_CONTACTS";

  [@mel.module "react-native"]
  [@mel.scope ("PermissionsAndroid", "PERMISSIONS")]
  external getAccounts: t = "GET_ACCOUNTS";

  [@mel.module "react-native"]
  [@mel.scope ("PermissionsAndroid", "PERMISSIONS")]
  external accessFineLocation: t = "ACCESS_FINE_LOCATION";

  [@mel.module "react-native"]
  [@mel.scope ("PermissionsAndroid", "PERMISSIONS")]
  external accessCoarseLocation: t = "ACCESS_COARSE_LOCATION";

  [@mel.module "react-native"]
  [@mel.scope ("PermissionsAndroid", "PERMISSIONS")]
  external accessBackgroundLocation: t = "ACCESS_BACKGROUND_LOCATION";

  [@mel.module "react-native"]
  [@mel.scope ("PermissionsAndroid", "PERMISSIONS")]
  external recordAudio: t = "RECORD_AUDIO";

  [@mel.module "react-native"]
  [@mel.scope ("PermissionsAndroid", "PERMISSIONS")]
  external readPhoneState: t = "READ_PHONE_STATE";

  [@mel.module "react-native"]
  [@mel.scope ("PermissionsAndroid", "PERMISSIONS")]
  external callPhone: t = "CALL_PHONE";

  [@mel.module "react-native"]
  [@mel.scope ("PermissionsAndroid", "PERMISSIONS")]
  external readCallLog: t = "READ_CALL_LOG";

  [@mel.module "react-native"]
  [@mel.scope ("PermissionsAndroid", "PERMISSIONS")]
  external writeCallLog: t = "WRITE_CALL_LOG";

  [@mel.module "react-native"]
  [@mel.scope ("PermissionsAndroid", "PERMISSIONS")]
  external addVoicemail: t = "ADD_VOICEMAIL";

  [@mel.module "react-native"]
  [@mel.scope ("PermissionsAndroid", "PERMISSIONS")]
  external useSip: t = "USE_SIP";

  [@mel.module "react-native"]
  [@mel.scope ("PermissionsAndroid", "PERMISSIONS")]
  external processOutgoingCalls: t = "PROCESS_OUTGOING_CALLS";

  [@mel.module "react-native"]
  [@mel.scope ("PermissionsAndroid", "PERMISSIONS")]
  external bodySensors: t = "BODY_SENSORS";

  [@mel.module "react-native"]
  [@mel.scope ("PermissionsAndroid", "PERMISSIONS")]
  external sendSms: t = "SEND_SMS";

  [@mel.module "react-native"]
  [@mel.scope ("PermissionsAndroid", "PERMISSIONS")]
  external receiveSms: t = "RECEIVE_SMS";

  [@mel.module "react-native"]
  [@mel.scope ("PermissionsAndroid", "PERMISSIONS")]
  external readSms: t = "READ_SMS";

  [@mel.module "react-native"]
  [@mel.scope ("PermissionsAndroid", "PERMISSIONS")]
  external receiveWapPush: t = "RECEIVE_WAP_PUSH";

  [@mel.module "react-native"]
  [@mel.scope ("PermissionsAndroid", "PERMISSIONS")]
  external receiveMms: t = "RECEIVE_MMS";

  [@mel.module "react-native"]
  [@mel.scope ("PermissionsAndroid", "PERMISSIONS")]
  external readExternalStorage: t = "READ_EXTERNAL_STORAGE";

  [@mel.module "react-native"]
  [@mel.scope ("PermissionsAndroid", "PERMISSIONS")]
  external writeExternalStorage: t = "WRITE_EXTERNAL_STORAGE";
};

module Result: {
  type t;

  [@mel.module "react-native"] [@mel.scope ("PermissionsAndroid", "RESULTS")]
  external granted: t = "GRANTED";

  [@mel.module "react-native"] [@mel.scope ("PermissionsAndroid", "RESULTS")]
  external denied: t = "DENIED";

  [@mel.module "react-native"] [@mel.scope ("PermissionsAndroid", "RESULTS")]
  external neverAskAgain: t = "NEVER_ASK_AGAIN";
};

type rationale;
[@mel.obj]
external rationale:
  (
    ~title: string,
    ~message: string,
    ~buttonPositive: string,
    ~buttonNegative: string=?,
    ~buttonNeutral: string=?,
    unit
  ) =>
  rationale;

type dict;

[@mel.scope "PermissionsAndroid"] [@mel.module "react-native"]
external check: Permission.t => Js.Promise.t(bool) = "check";

// multiple externals
[@mel.scope "PermissionsAndroid"] [@mel.module "react-native"]
external request: Permission.t => Js.Promise.t(Result.t) = "request";

// multiple externals
[@mel.scope "PermissionsAndroid"] [@mel.module "react-native"]
external requestWithRationale:
  (Permission.t, rationale) => Js.Promise.t(Result.t) =
  "request";

[@mel.scope "PermissionsAndroid"] [@mel.module "react-native"]
external requestMultiple: array(Permission.t) => Js.Promise.t(dict) =
  "requestMultiple";

[@mel.get_index] external get: (dict, Permission.t) => option(Result.t);
