[@mel.module "react-native"] [@mel.scope "PixelRatio"]
external get: unit => float = "get";

[@mel.module "react-native"] [@mel.scope "PixelRatio"]
external getFontScale: unit => float = "getFontScale";

[@mel.module "react-native"] [@mel.scope "PixelRatio"]
external getPixelSizeForLayoutSize: float => int = "getPixelSizeForLayoutSize";

[@mel.module "react-native"] [@mel.scope "PixelRatio"]
external roundToNearestPixel: float => float = "roundToNearestPixel";
