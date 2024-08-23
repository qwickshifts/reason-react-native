open ReactNative;

module Styles = {
  let container =
    Style.style(~flex=1., ~justifyContent=`center, ~alignItems=`center, ());

  let status = Style.style(~margin=Style.dp(30.), ());
};

[@react.component]
let make = () => {
  let (reduceMotionEnabled, setReduceMotionEnabled) =
    React.useState(() => false);
  let (screenReaderEnabled, setScreenReaderEnabled) =
    React.useState(() => false);

  React.useEffect(() => {
    let reduceMotionChangedSubscription =
      AccessibilityInfo.addChangeEventListener(
        `reduceMotionChanged, isReduceMotionEnabled => {
        setReduceMotionEnabled(_ => isReduceMotionEnabled)
      });
    let screenReaderChangedSubscription =
      AccessibilityInfo.addChangeEventListener(
        `screenReaderChanged, isScreenReaderEnabled => {
        setScreenReaderEnabled(_ => isScreenReaderEnabled)
      });

    let _ =
      AccessibilityInfo.isReduceMotionEnabled()
      |> Js.Promise.then_(isReduceMotionEnabled => {
           setReduceMotionEnabled(_ => isReduceMotionEnabled)
           |> Js.Promise.resolve
         });

    let _ =
      AccessibilityInfo.isScreenReaderEnabled()
      |> Js.Promise.then_(isScreenReaderEnabled => {
           setScreenReaderEnabled(_ => isScreenReaderEnabled)
           |> Js.Promise.resolve
         });

    Some(
      () => {
        reduceMotionChangedSubscription |> EventSubscription.remove;
        screenReaderChangedSubscription |> EventSubscription.remove;
      },
    );
  });

  <View style=Styles.container>
    <Text style=Styles.status>
      {"The reduce motion is "
       ++ (reduceMotionEnabled ? "enabled" : "disabled")
       ++ "."
       |> React.string}
    </Text>
    <Text style=Styles.status>
      {"The screen reader is "
       ++ (screenReaderEnabled ? "enabled" : "disabled")
       ++ "."
       |> React.string}
    </Text>
  </View>;
};
