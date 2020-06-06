import * as React from "react";
import { Box, Button, Dropdown, Spacer, Text } from "../../components/";

export default () => {
  let [isShow, setShow] = React.useState(false);
  console.log(isShow);
  return (
    <>
      <Spacer />
      <Box flexDirection="row" justifyContent="center" alignItems="center">
        <Dropdown
          isShow={isShow}
          trigger={
            <Button text="trigger" onPress={(e) => setShow((s) => !s)} />
          }
        >
          <Text value="Text" />
        </Dropdown>
      </Box>
    </>
  );
};
