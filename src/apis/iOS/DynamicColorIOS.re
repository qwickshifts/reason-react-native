type t;
[@mel.obj]
external t:
  (
    ~light: Color.t,
    ~dark: Color.t,
    ~highContrastLight: Color.t=?,
    ~highContrastDark: Color.t=?,
    unit
  ) =>
  t;

[@mel.module "react-native"] external make: t => Color.t = "DynamicColorIOS";
