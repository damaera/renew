import * as React from "react";
import { View } from "react-native";
import { Box, Button, Spacer } from "../../components/";

export default () => {
  return (
    <>
      <Spacer />
      <Box flexDirection="row" justifyContent="center" alignItems="center">
        <Button text="Hello world" size="xs" />
        <Spacer />
        <Button text="Hello world" size="sm" />
        <Spacer />
        <Button text="Hello world" size="md" />
        <Spacer />
        <Button text="Hello world" size="lg" />
        <Spacer />
        <Button text="Hello world" size="xl" />
      </Box>
      <Spacer />
      <View style={{ flexDirection: "row", justifyContent: "center" }}>
        <Button text="Solid button" variant="solid" />
        <Spacer />
        <Button text="Outline button" variant="outline" />
        <Spacer />
        <Button text="Light button" variant="light" />
        <Spacer />
        <Button text="Ghost button" variant="ghost" />
      </View>
      <Spacer />
      <View style={{ flexDirection: "row", justifyContent: "center" }}>
        <Button text="Solid button" color="danger" variant="solid" />
        <Spacer />
        <Button text="Outline button" color="danger" variant="outline" />
        <Spacer />
        <Button text="Light button" color="danger" variant="light" />
        <Spacer />
        <Button text="Ghost button" color="danger" variant="ghost" />
      </View>
      <Spacer />
      <View
        style={{
          flexDirection: "row",
          justifyContent: "center",
          flexWrap: "wrap",
        }}
      >
        <Button text="Primary button" color="primary" />
        <Spacer />
        <Button text="Secondary button" color="secondary" />
        <Spacer />
        <Button text="Success button" color="success" />
        <Spacer />
        <Button text="Info button" color="info" />
        <Spacer />
        <Button text="Danger button" color="danger" />
        <Spacer />
        <Button text="Warning button" color="warning" />
        <Spacer />
        <Button text="Default button" />
      </View>
    </>
  );
};
