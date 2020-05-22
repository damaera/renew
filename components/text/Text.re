open ReactNative;

let styles = Style.(StyleSheet.create({"text": textStyle()}));

[@react.component]
let make = (~value) => {
  <ReactNative.Text> value->React.string </ReactNative.Text>;
};

[@genType]
let default = make;