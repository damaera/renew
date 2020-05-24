[@react.component]
let make = (~value, ~styleText=?, ~size=`md) => {
  let theme = React.useContext(Theme.themeContext);

  let fontSize =
    switch (size) {
    | `xs => theme.text.fontSize.xs
    | `sm => theme.text.fontSize.sm
    | `md => theme.text.fontSize.md
    | `lg => theme.text.fontSize.lg
    | `xl => theme.text.fontSize.xl
    | `_2xl => theme.text.fontSize._2xl
    | `_3xl => theme.text.fontSize._3xl
    | `_4xl => theme.text.fontSize._4xl
    | `_5xl => theme.text.fontSize._5xl
    | `_6xl => theme.text.fontSize._6xl
    };

  let resolvedStyle =
    ReactNative.Style.(
      arrayOption([|
        Some(textStyle(~fontSize, ~fontFamily=theme.text.fontFamily, ())),
        styleText,
      |])
    );
  <ReactNative.Text style=resolvedStyle>
    value->React.string
  </ReactNative.Text>;
};

[@genType]
let default = make;