import * as React from "react";
import { View } from "react-native";
import Button from "../components/button/Button.gen";

export default () => {
  return (
    <View style={{ flexDirection: "row", justifyContent: "center" }}>
      <Button text="Hello world"></Button>
      <Button text="Hello world" variant="solid" size="lg"></Button>
    </View>
  );
};
