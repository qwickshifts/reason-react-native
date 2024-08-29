module Permission = {
  type t;

  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external readCalendar: t = "READ_CALENDAR";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external writeCalendar: t = "WRITE_CALENDAR";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external camera: t = "CAMERA";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external readContacts: t = "READ_CONTACTS";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external writeContacts: t = "WRITE_CONTACTS";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external getAccounts: t = "GET_ACCOUNTS";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external accessFineLocation: t = "ACCESS_FINE_LOCATION";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external accessCoarseLocation: t = "ACCESS_COARSE_LOCATION";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external accessBackgroundLocation: t = "ACCESS_BACKGROUND_LOCATION";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external recordAudio: t = "RECORD_AUDIO";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external readPhoneState: t = "READ_PHONE_STATE";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external callPhone: t = "CALL_PHONE";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external readCallLog: t = "READ_CALL_LOG";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external writeCallLog: t = "WRITE_CALL_LOG";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external addVoicemail: t = "ADD_VOICEMAIL";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external useSIP: t = "USE_SIP";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external processOutgoingCalls: t = "PROCESS_OUTGOING_CALLS";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external bodySensors: t = "BODY_SENSORS";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external sendSMS: t = "SEND_SMS";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external receiveSMS: t = "RECEIVE_SMS";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external readSMS: t = "READ_SMS";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external receiveWAPPush: t = "RECEIVE_WAP_PUSH";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external receiveMMS: t = "RECEIVE_MMS";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external readExternalStorage: t = "READ_EXTERNAL_STORAGE";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external writeExternalStorage: t = "WRITE_EXTERNAL_STORAGE";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external bluetoothConnect: t = "BLUETOOTH_CONNECT";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external bluetoothScan: t = "BLUETOOTH_SCAN";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external bluetoothAdvertise: t = "BLUETOOTH_ADVERTISE";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external accessMediaLocation: t = "ACCESS_MEDIA_LOCATION";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external acceptHandover: t = "ACCEPT_HANDOVER";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external activityRecognition: t = "ACTIVITY_RECOGNITION";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external answerPhoneCalls: t = "ANSWER_PHONE_CALLS";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external readPhoneNumbers: t = "READ_PHONE_NUMBERS";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external uwbRanging: t = "UWB_RANGING";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external bodySensorsBackground: t = "BODY_SENSORS_BACKGROUND";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external readMediaImages: t = "READ_MEDIA_IMAGES";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external readMediaVideo: t = "READ_MEDIA_VIDEO";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external readMediaAudio: t = "READ_MEDIA_AUDIO";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external postNotifications: t = "POST_NOTIFICATIONS";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external nearbyWifiDevices: t = "NEARBY_WIFI_DEVICES";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external readVoicemail: t = "READ_VOICEMAIL";
  [@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
  external writeVoicemail: t = "WRITE_VOICEMAIL";
};

[@deriving jsProperties]
type rationale = {
  title: string,
  message: string,
  buttonPositive: string,
  [@mel.optional]
  buttonNegative: option(string),
  [@mel.optional]
  buttonNeutral: option(string),
};

type status = [ | `granted | `denied | `never_ask_again];

[@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
external check: Permission.t => Js.Promise.t(bool) = "check";

[@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
external request:
  (Permission.t, ~rationale: rationale=?) => Js.Promise.t(status) =
  "request";
let request = (~rationale=?, permission) => request(permission, ~rationale?);

[@mel.module "react-native"] [@mel.scope "PermissionsAndroid"]
external requestMultiple:
  array(Permission.t) => Js.Promise.t(Js.Dict.t(status)) =
  "requestMultiple";
