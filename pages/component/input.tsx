import * as React from "react";
import { Box, Input, Spacer } from "../../components/";

export default () => {
  return (
    <>
      <Spacer />
      <Box flexDirection="row" justifyContent="center" alignItems="center">
        <Input />
        <Spacer />
        <Input />
        <Spacer />
        <Input color="danger" />
      </Box>
    </>
  );
};
