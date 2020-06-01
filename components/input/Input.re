open ReactNative.Style;

[@react.component]
let make = (~component=<ReactNative.TextInput onFocus={_ => ()} />, ~style=?) => {
  let theme = Theme.useTheme();

  let resolvedStyle = arrayOption([|style|]);

  // component

  let inputElement =
    <Box
      component
      borderRadius={theme.input.borderRadius}
      ph={theme.input.paddingHorizontal->dp}
      h={theme.input.height->dp}
      borderWidth=1.
      borderColor={theme.colors.info}
    />;

  ReasonReact.cloneElement(
    inputElement,
    ~props={"style": resolvedStyle, "onFocus": ""},
    [||],
  );
};

[@genType]
let default = make;