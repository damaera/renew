import * as React from "react";
import * as RN from "react-native";
import { Box, Input, Spacer, Text } from "../../components/";

export default () => {
  return (
    <>
      <Spacer />
      <Box flexDirection="row" justifyContent="center" alignItems="center">
        <Input component={<RN.TextInput value="orange oren" />} />
        <Text> sdfsdf </Text>
      </Box>
    </>
  );
};
