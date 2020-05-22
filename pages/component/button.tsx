import * as React from "react";
import { View } from "react-native";
import Button from "../../components/button/Button.gen";

export default () => {
  return (
    <>
      <View
        style={{
          flexDirection: "row",
          justifyContent: "center",
          alignItems: "center",
        }}
      >
        <Button text="Hello world" size="xs"></Button>
        <Button text="Hello world" size="sm"></Button>
        <Button text="Hello world" size="md"></Button>
        <Button text="Hello world" size="lg"></Button>
        <Button text="Hello world" size="xl"></Button>
      </View>
      <View style={{ flexDirection: "row", justifyContent: "center" }}>
        <Button text="Hello world" variant="solid"></Button>
        <Button text="Hello world" variant="ghost"></Button>
        <Button text="Hello world" variant="light"></Button>
        <Button text="Hello world" variant="outline"></Button>
      </View>
      <View style={{ flexDirection: "row", justifyContent: "center" }}>
        <Button
          text="Hello world"
          variant="solid"
          color="primary"
          prefixElement={<span>H</span>}
        ></Button>
      </View>
    </>
  );
};
