open ReactNative;

module Styles = {
  let container =
    Style.style(
      ~flex=1.,
      ~justifyContent=`spaceAround,
      ~alignItems=`center,
      (),
    );
};

[@react.component]
let make = () => {
  let createTwoButtonAlert = () =>
    Alert.alert(
      "Alert Title",
      ~message="My Alert Msg",
      ~buttons=[|
        {
          text: Some("Cancel"),
          onPress: Some(_ => Js.Console.log("Cancel Pressed")),
          style: Some(`cancel),
          isPreferred: None,
        },
        {
          text: Some("OK"),
          onPress: Some(_ => Js.Console.log("OK Pressed")),
          isPreferred: None,
          style: None,
        },
      |],
    );

  let createThreeButtonAlert = () =>
    Alert.alert(
      "Alert Title",
      ~message="My Alert Msg",
      ~buttons=[|
        Alert.button(
          ~text="Ask me later",
          ~onPress=_ => Js.Console.log("Ask me later pressed"),
          (),
        ),
        Alert.button(
          ~text="Cancel",
          ~onPress=_ => Js.Console.log("Cancel Pressed"),
          ~style=`cancel,
          (),
        ),
        Alert.button(
          ~text="OK",
          ~onPress=_ => Js.Console.log("OK Pressed"),
          (),
        ),
      |],
    );

  <View style=Styles.container>
    <Button title="2-Button Alert" onPress={_ => createTwoButtonAlert()} />
    <Button title="3-Button Alert" onPress={_ => createThreeButtonAlert()} />
  </View>;
};
