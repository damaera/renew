import * as React from "react";
import Button from "../components/button/Button.gen";
import Theme, { defaultTheme } from "../components/theme/Theme.gen";

export default () => {
  return (
    <Theme value={defaultTheme}>
      <Button text="Hello world"></Button>
      <br />
      <Button text="Hello world" variant="primary" size="big"></Button>
    </Theme>
  );
};
