open ReactNative;

let styles =
  Style.(
    StyleSheet.create({
      "wrapper": viewStyle(~padding=10.->dp, ~backgroundColor="red", ()),
    })
  );

[@react.component]
let make = (~text) => {
  <TouchableOpacity style={styles##wrapper}>
    <View> <Text> text->React.string </Text> </View>
  </TouchableOpacity>;
};

[@genType]
let default = make;