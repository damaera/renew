open ReactNative.Style;

type variantColorT = [
  | `primary
  | `secondary
  | `success
  | `danger
  | `info
  | `warning
  | `neutral
];

[@react.component]
let make =
    (
      ~component=<ReactNative.TextInput />,
      ~color: variantColorT=`neutral,
      ~onFocus=_ => (),
      ~onBlur=_ => (),
      ~style=?,
    ) => {
  let theme = Theme.useTheme();

  let (isFocused, setFocused) = React.useState(_ => false);

  let themeBorderColor = {
    switch (color) {
    | `primary => theme.colors.primary
    | `secondary => theme.colors.secondary
    | `success => theme.colors.success
    | `danger => theme.colors.danger
    | `info => theme.colors.info
    | `warning => theme.colors.warning
    | `neutral => theme.colors.neutral300
    };
  };

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
    borderWidth={theme.input.borderWidth}
    ph={theme.input.paddingHorizontal->dp}
    h={theme.input.height->dp}
    bg={theme.input.backgroundColor}
    borderColor=themeBorderColor
  />;
};

[@genType]
let default = make;