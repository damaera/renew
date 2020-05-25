import * as React from "react";
import { View } from "react-native";
import { Box, Button, Spacer } from "../../components/";

export default () => {
  return (
    <>
      <Spacer />
      <Box flexDirection="row" justifyContent="center" alignItems="center">
        <Button text="Hello world" size="xs" />
        <Spacer x={8} />
        <Button text="Hello world" size="sm" />
        <Spacer x={8} />
        <Button text="Hello world" size="md" />
        <Spacer x={8} />
        <Button text="Hello world" size="lg" />
        <Spacer x={8} />
        <Button text="Hello world" size="xl" />
      </Box>
      <Spacer />
      <View style={{ flexDirection: "row", justifyContent: "center" }}>
        <Button text="Solid button" variant="solid" />
        <Spacer x={8} />
        <Button text="Outline button" variant="outline" />
        <Spacer x={8} />
        <Button text="Light button" variant="light" />
        <Spacer x={8} />
        <Button text="Ghost button" variant="ghost" />
      </View>
      <Spacer />
      <View style={{ flexDirection: "row", justifyContent: "center" }}>
        <Button text="Solid button" color="primary" variant="solid" />
        <Spacer x={8} />
        <Button text="Outline button" color="primary" variant="outline" />
        <Spacer x={8} />
        <Button text="Light button" color="primary" variant="light" />
        <Spacer x={8} />
        <Button text="Ghost button" color="primary" variant="ghost" />
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
        <Spacer x={8} />
        <Button text="Secondary button" color="secondary" />
        <Spacer x={8} />
        <Button text="Success button" color="success" />
        <Spacer x={8} />
        <Button text="Info button" color="info" />
        <Spacer x={8} />
        <Button text="Danger button" color="danger" />
        <Spacer x={8} />
        <Button text="Warning button" color="warning" />
        <Spacer x={8} />
        <Button text="Default button" />
      </View>
    </>
  );
};
