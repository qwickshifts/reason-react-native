type t = {
  dark: Color.t,
  light: Color.t,
};

[@mel.module "react-native"] external make: t => Color.t = "DynamicColorIOS";
