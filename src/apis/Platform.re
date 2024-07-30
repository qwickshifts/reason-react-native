type platformOSType = [
  | `ios
  | `android
  | `macos
  | `windows
  | `web
  | `native
];

type platformConstants = {
  isTesting: bool,
  reactNativeVersion: {
    .
    major: int,
    minor: int,
    patch: int,
    prerelease: option(string),
  },
  // Android only
  version: int,
  release: string,
  serial: string,
  fingerprint: string,
  model: string,
  brand: string,
  manufacturer: string,
  serverHost: option(string),
  uiMode: [ | `car | `desk | `normal | `tv | `watch | `unknown],
  // iOS only
  forceTouchAvailable: bool,
  interfaceIdiom: [
    | `unspecified
    | `phone
    | `pad
    | `tv
    | `carPlay
    | `mac
    | `vision
  ],
  osVersion: string,
  systemName: string,
};

[@mel.module "react-native"] [@mel.scope "Platform"]
external isPad: bool = "isPad";

[@mel.module "react-native"] [@mel.scope "Platform"]
external isTV: bool = "isTV";

[@mel.module "react-native"] [@mel.scope "Platform"]
external isVision: bool = "isVision";

[@mel.module "react-native"] [@mel.scope "Platform"]
external isTesting: bool = "isTesting";

[@mel.module "react-native"] [@mel.scope "Platform"]
external os: [ | `android | `ios] = "OS";

[@mel.module "react-native"] [@mel.scope "Platform"]
external version: [ | `android(int) | `ios(string)] = "Version";

[@mel.module "react-native"] [@mel.scope "Platform"]
external select:
  {
    .
    android: option('a),
    ios: option('a),
    native: option('a),
    default: option('a),
  } =>
  'a =
  "select";
