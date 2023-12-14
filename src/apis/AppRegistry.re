type appKey = string;
type section = string;
type taskId = float;
type taskKey = string;

type task('data) = 'data => Js.Promise.t(unit);
type taskProvider('data) = unit => task('data);
type taskCanceller = unit => unit;
type taskCancelProvider = unit => taskCanceller;

type componentProvider('a) = unit => React.component('a);
type wrapperComponentProvider('a, 'b) = 'b => React.component('a);

type appParameters;

external asAppParameters: 'a => appParameters = "%identity";

type appConfig;

[@mel.obj]
external appConfig:
  (
    ~appKey: string,
    ~component: componentProvider('a)=?,
    ~run: appParameters => unit=?,
    ~section: bool=?,
    unit
  ) =>
  appConfig;

type runnable('a) = {
  .
  "component": Js.Nullable.t(componentProvider('a)),
  [@mel.meth] "run": appParameters => unit,
};

type registry('a) = {
  sections: array(section),
  runnables: Js.Dict.t(runnable('a)),
};

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external getAppKeys: unit => array(appKey) = "getAppKeys";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external getRegistry: unit => registry('a) = "getRegistry";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external getRunnable: appKey => option(runnable('a)) = "getRunnable";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external getSectionKeys: unit => array(string) = "getSectionKeys";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external getSections: unit => Js.Dict.t(runnable('a)) = "getSections";

// multiple externals
[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external registerComponent: (appKey, componentProvider('a)) => unit =
  "registerComponent";

// multiple externals
[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external registerComponentWithSection:
  (appKey, componentProvider('a), section) => unit =
  "registerComponent";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external registerConfig: array(appConfig) => unit = "registerConfig";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external registerRunnable: (appKey, appParameters => unit) => string =
  "registerRunnable";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external registerSection: (appKey, componentProvider('a)) => unit =
  "registerSection";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external runApplication: (appKey, 'a) => unit = "runApplication";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external setWrapperComponentProvider: wrapperComponentProvider('a, 'b) => unit =
  "setWrapperComponentProvider";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external unmountApplicationComponentAtRootTag: string => unit =
  "unmountApplicationComponentAtRootTag";

// Android only
[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external cancelHeadlessTask: (taskId, taskKey) => unit = "cancelHeadlessTask";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external registerCancellableHeadlessTask:
  (taskKey, taskProvider('data), taskCancelProvider) => unit =
  "registerCancellableHeadlessTask";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external registerHeadlessTask: (taskKey, taskProvider('data)) => unit =
  "registerHeadlessTask";

[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external startHeadlessTask: (taskId, taskKey, 'data) => unit =
  "startHeadlessTask";

// react-native-web
type app = {
  .
  "element": React.element,
  [@mel.meth] "getStyleElement": unit => React.element,
};
[@mel.module "react-native"] [@mel.scope "AppRegistry"]
external getApplication: (string, {. "initialProps": 'a}) => app =
  "getApplication";
