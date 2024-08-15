type t;

type subscription;

[@mel.new] [@mel.module "react-native"]
external make: 'nativeModule => t = "NativeEventEmitter";

[@mel.send]
external addListener: (t, string, 'a => unit) => subscription = "addListener";

[@mel.send]
external removeAllListeners: (t, string) => unit = "removeAllListeners";

[@mel.send]
external removeSubscription: (t, subscription) => unit = "removeSubscription";

[@mel.send] external listenerCount: (t, string) => unit = "listenerCount";

module Subscription = {
  [@mel.send] external remove: (subscription, unit) => unit = "remove";
};
