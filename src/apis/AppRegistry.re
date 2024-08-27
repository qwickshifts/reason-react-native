type iPerformanceLogger; // TODO: Implement this type
type componentProvider = unit => React.element;
type wrapperComponentProvider('appParams) = 'appParams => React.element;
type runnable('appParams) = ('appParams, ~displayMode: float=?) => unit;

[@deriving jsProperties]
type appConfig('appParams) = {
  appKey: string,
  [@mel.optional]
  component: option(componentProvider),
  [@mel.optional]
  run: option(runnable('appParams)),
  [@mel.optional]
  section: option(bool),
};

type runnables('appParams) = Js.Dict.t(runnable('appParams));

[@deriving jsProperties]
type registry('appParams) = {
  sections: array(string),
  runnables: runnables('appParams),
};

type task('taskData) = 'taskData => Js.Promise.t(unit);
type taskCanceler = unit => unit;
type taskCancelProvider = unit => taskCanceler;
type taskProvider('taskData) = unit => task('taskData);

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external getAppKeys: unit => array(string) = "getAppKeys";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external getRegistry: unit => registry('appParams) = "getRegistry";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external getRunnable: string => runnable('appParams) = "getRunnable";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external getSectionKeys: unit => array(string) = "getSectionKeys";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external getSections: unit => runnables('appParams) = "getSections";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external registerCancellableHeadlessTask:
  (string, taskProvider('taskData), taskCancelProvider) => unit =
  "registerCancellableHeadlessTask";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external registerComponent:
  (string, componentProvider, ~section: bool=?) => string =
  "registerComponent";
let registerComponent = (~section=?, component, appKey) =>
  registerComponent(appKey, component, ~section?);

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external registerConfig: array(appConfig('appParams)) => unit =
  "registerConfig";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external registerHeadlessTask: (string, taskProvider('taskData)) => unit =
  "registerHeadlessTask";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external registerRunnable: (string, runnable('appParams)) => string =
  "registerRunnable";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external registerSection: (string, componentProvider) => unit =
  "registerSection";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external runApplication: (string, 'appParams) => unit = "runApplication";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external setComponentProviderInstrumentationHook:
  ((componentProvider, iPerformanceLogger) => React.element) => unit =
  "setComponentProviderInstrumentationHook";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external setWrapperComponentProvider:
  wrapperComponentProvider('appParams) => unit =
  "setWrapperComponentProvider";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external startHeadlessTask: (float, string, 'taskData) => unit =
  "startHeadlessTask";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external unmountApplicationComponentAtRootTag: RootTag.t => unit =
  "unmountApplicationComponentAtRootTag";
