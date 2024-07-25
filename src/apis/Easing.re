type t = float => float;

[@mel.module "react-native"] [@mel.scope "Easing"]
external step0: float => int = "step0";

[@mel.module "react-native"] [@mel.scope "Easing"]
external step1: float => int = "step1";

[@mel.module "react-native"] [@mel.scope "Easing"]
external linear: t = "linear";

[@mel.module "react-native"] [@mel.scope "Easing"] external ease: t = "ease";

[@mel.module "react-native"] [@mel.scope "Easing"] external quad: t = "quad";

[@mel.module "react-native"] [@mel.scope "Easing"] external cubic: t = "cubic";

[@mel.module "react-native"] [@mel.scope "Easing"]
external poly: float => t = "poly";

[@mel.module "react-native"] [@mel.scope "Easing"] external sin: t = "sin";

[@mel.module "react-native"] [@mel.scope "Easing"]
external circle: t = "circle";

[@mel.module "react-native"] [@mel.scope "Easing"] external exp: t = "exp";

[@mel.module "react-native"] [@mel.scope "Easing"]
external elastic: float => t = "elastic";

[@mel.module "react-native"] [@mel.scope "Easing"]
external back: float => t = "back";

[@mel.module "react-native"] [@mel.scope "Easing"]
external bounce: t = "bounce";

[@mel.module "react-native"] [@mel.scope "Easing"]
external bezier: (~x1: float, ~y1: float, ~x2: float, ~y2: float) => t =
  "bezier";

[@mel.module "react-native"] [@mel.scope "Easing"] external in_: t => t = "in";

[@mel.module "react-native"] [@mel.scope "Easing"]
external out: t => t = "out";

[@mel.module "react-native"] [@mel.scope "Easing"]
external inOut: t => t = "inOut";
