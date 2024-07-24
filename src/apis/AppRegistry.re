type componentProvider = unit => React.element;

type appKey = string;

type appConfig = {
  appKey,
  component: option(componentProvider),
  run: option(unit => unit),
  section: option(bool),
};

type runnable = {
  component: option(string),
  run: option(unit => unit),
};

type runnables = Js.Dict.t(runnable);

type registry = {
  runnables,
  sections: array(string),
};

type taskId = int;
type taskKey = string;

type task('a) = 'a => Js.Promise.t(unit);

type taskCanceller = unit => unit;

type taskCancelProvider = unit => taskCanceller;

type taskProvider('a) = unit => task('a);

type rootTag = int;

type iPerformanceLogger; // TODO: probably should come from a different module
type componentProviderInstrumentationHook =
  (componentProvider, iPerformanceLogger) => React.element;

type wrapperComponentProvider('a) = 'a => React.element;

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external getAppKeys: unit => array(appKey) = "getAppKeys";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external getRegistry: unit => registry = "getRegistry";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external getRunnable: appKey => option(runnable) = "getRunnable";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external getSectionKeys: unit => array(string) = "getSectionKeys";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external getSections: unit => Js.Dict.t(runnable) = "getSections";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external registerCancellableHeadlessTask:
  (taskKey, taskProvider('a), taskCancelProvider) => unit =
  "registerCancellableHeadlessTask";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external registerComponent:
  (appKey, componentProvider, option(bool)) => string =
  "registerComponent";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external registerConfig: array(appConfig) => unit = "registerConfig";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external registerHeadlessTask: (taskKey, taskProvider('a)) => unit =
  "registerHeadlessTask";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external registerRunnable: (appKey, runnable) => unit = "registerRunnable";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external registerSection: (appKey, componentProvider) => unit =
  "registerSection";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external runApplication: (appKey, 'a) => unit = "runApplication";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external setComponentProviderInstrumentationHook:
  componentProviderInstrumentationHook => unit =
  "setComponentProviderInstrumentationHook";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external setWrapperComponentProvider: wrapperComponentProvider('a) => unit =
  "setWrapperComponentProvider";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external startHeadlessTask: (taskId, taskKey, 'a) => unit =
  "startHeadlessTask";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external unmountApplicationComponentAtRootTag: rootTag => unit =
  "unmountApplicationComponentAtRootTag";
