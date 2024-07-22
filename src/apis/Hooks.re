[@mel.module "react-native"]
external useColorScheme: unit => Js.Null.t(Appearance.t) = "useColorScheme";
let useColorScheme = () => () |> useColorScheme |> Js.Null.toOption;

[@mel.module "react-native"]
external useWindowDimensions:
  unit =>
  {
    .
    fontScale: float,
    height: float,
    scale: int,
    width: float,
  } =
  "useWindowDimensions";
