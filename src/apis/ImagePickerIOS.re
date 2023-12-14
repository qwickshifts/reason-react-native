type imageUri = string;

[@mel.module "react-native"] [@mel.scope "ImagePickerIOS"]
external canUseCamera: (bool => unit) => unit = "canUseCamera";

[@mel.module "react-native"] [@mel.scope "ImagePickerIOS"]
external canRecordVideos: (bool => unit) => unit = "canRecordVideos";

type cameraDialogConfig;
[@mel.obj]
external cameraDialogConfig: (~videoMode: bool=?, unit) => cameraDialogConfig;

type selectDialogConfig;
[@mel.obj]
external selectDialogConfig:
  (~showImages: bool=?, ~showVideos: bool=?, unit) => selectDialogConfig;

[@mel.module "react-native"] [@mel.scope "ImagePickerIOS"]
external openCameraDialog:
  (
    ~config: cameraDialogConfig,
    ~onSuccess: (imageUri, ~height: float, ~width: float, unit) => unit,
    ~onError: 'error => unit
  ) =>
  unit =
  "openCameraDialog";

[@mel.module "react-native"] [@mel.scope "ImagePickerIOS"]
external openSelectDialog:
  (
    ~config: selectDialogConfig,
    ~onSuccess: (imageUri, ~height: float, ~width: float, unit) => unit,
    ~onError: 'error => unit
  ) =>
  unit =
  "openSelectDialog";
