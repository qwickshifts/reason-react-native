[@deriving jsProperties]
type reactNativeVersion = {
  major: int,
  minor: int,
  patch: int,
  [@mel.optional]
  prerelease: option(int),
};

type constants = {
  isTesting: bool,
  reactNativeVersion,
  [@mel.as "Version"]
  version: float,
  [@mel.as "Release"]
  release: string,
  [@mel.as "Serial"]
  serial: string,
  [@mel.as "Fingerprint"]
  fingerprint: string,
  [@mel.as "Model"]
  model: string,
  [@mel.as "Brand"]
  brand: string,
  [@mel.as "Manufacturer"]
  manufacturer: string,
  [@mel.as "ServerHost"]
  serverHost: string,
  uiMode: string,
  forceTouchAvailable: bool,
  interfaceIdiom: string,
  osVersion: string,
  systemName: string,
};

[@deriving jsProperties]
type selectConfig('a) = {
  android: 'a,
  ios: 'a,
  native: 'a,
  default: 'a,
};

[@mel.module "react-native"] [@mel.scope "Platform"]
external constants: constants = "constants";

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
external versionIOS: string = "Version";

[@mel.module "react-native"] [@mel.scope "Platform"]
external versionAndroid: float = "Version";

[@mel.module "react-native"] [@mel.scope "Platform"]
external select: selectConfig('a) => 'a = "select";
