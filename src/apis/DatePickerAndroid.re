type options;

type date;

type action;

external calendarDate: Js.Date.t => date = "%identity";
external timestamp: float => date = "%identity";

type mode = [ | `calendar | `spinner | `default];

[@mel.obj]
external options:
  (~date: date=?, ~minDate: date=?, ~maxDate: date=?, ~mode: mode=?, unit) =>
  options;

type response = {
  action,
  year: int,
  month: int,
  day: int,
};

[@mel.module "react-native"] [@mel.scope "DatePickerAndroid"]
external open_: options => Js.Promise.t(response) = "open";

[@mel.module "react-native"] [@mel.scope "DatePickerAndroid"]
external dateSetAction: action = "dateSetAction";

[@mel.module "react-native"] [@mel.scope "DatePickerAndroid"]
external dismissedAction: action = "dismissedAction";
