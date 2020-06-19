[@react.component]
let make = (~v=1., ~h=1.) => {
  let theme = Theme.useTheme();

  let baseRem = theme.text.fontSize.md;

  let width = h *. baseRem;
  let height = v *. baseRem;

  <Box w={width->ReactNative.Style.dp} h={height->ReactNative.Style.dp} />;
};

[@genType]
let default = make;