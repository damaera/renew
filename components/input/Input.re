open ReactNative.Style;

[@react.component]
let make =
    (
      ~component=<ReactNative.TextInput />,
      ~onFocus=_ => (),
      ~onBlur=_ => (),
      ~style=?,
    ) => {
  let theme = Theme.useTheme();
  let (isFocused, setFocused) = React.useState(_ => false);

  let resolvedStyle = arrayOption([|style|]);

  let inputElement =
    ReasonReact.cloneElement(
      component,
      ~props={
        "style": resolvedStyle,
        "onFocus": e => {
          setFocused(_ => true);
          onFocus(e);
        },
        "onBlur": e => {
          setFocused(_ => false);
          onBlur(e);
        },
      },
      [||],
    );

  <Box
    component=inputElement
    borderRadius={theme.input.borderRadius}
    ph={theme.input.paddingHorizontal->dp}
    h={theme.input.height->dp}
    borderWidth=1.
    borderColor={isFocused ? theme.colors.foreground : theme.colors.neutral300}
  />;
};

[@genType]
let default = make;