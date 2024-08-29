[@deriving jsProperties]
type t = {
  light: Color.t,
  dark: Color.t,
  [@mel.optional]
  highContrastLight: option(Color.t),
  [@mel.optional]
  highContrastDark: option(Color.t),
};
[@mel.module "react-native"] external make: t => Color.t = "DynamicColorIOS";
