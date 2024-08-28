// Not fully type safe, could make IOS and Android modules but that would be a lot of work for little gain
[@mel.module "react-native"] [@mel.variadic]
external make: array(string) => Color.t = "PlatformColor";
