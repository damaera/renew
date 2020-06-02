open Option;

type variantT = [ | `body | `heading | `tertiary | `monospace];

[@react.component]
let make =
    (
      ~component=<ReactNative.Text />,
      ~children=?,
      ~value="",
      ~style=?,
      // size theme
      ~size=`md,
      ~variant: variantT=`body,
      // rn style props
      ~textShadowOffset=?,
      ~color=?,
      ~fontSize=?,
      ~fontStyle=?,
      ~fontWeight=?,
      ~lineHeight=?,
      ~textAlign=?,
      ~textDecorationLine=?,
      ~textShadowColor=?,
      ~fontFamily=?,
      ~textShadowRadius=?,
      ~includeFontPadding=?,
      ~textAlignVertical=?,
      ~fontVariant=?,
      ~letterSpacing=?,
      ~textDecorationColor=?,
      ~textDecorationStyle=?,
      ~textTransform=?,
      ~writingDirection=?,
    ) => {
  let theme = Theme.useTheme();

  let styleText = style;

  let themeFontSize =
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

  let fontFamilyThemeStyle =
    switch (variant) {
    | `body => theme.text.fontFamily.body
    | `heading => theme.text.fontFamily.heading
    | `tertiary => theme.text.fontFamily.tertiary
    | `monospace => theme.text.fontFamily.monospace
    };

  let t = ReactNative.Style.textStyle;

  let resolvedStyle =
    ReactNative.Style.(
      arrayOption([|
        Some(
          textStyle(
            ~fontSize=themeFontSize,
            ~fontFamily=fontFamilyThemeStyle,
            (),
          ),
        ),
        // Text Props
        textShadowOffset <$> (s => t(~textShadowOffset=s, ())),
        color <$> (s => t(~color=s, ())),
        fontSize <$> (s => t(~fontSize=s, ())),
        fontStyle <$> (s => t(~fontStyle=s, ())),
        fontWeight <$> (s => t(~fontWeight=s, ())),
        lineHeight <$> (s => t(~lineHeight=s, ())),
        textAlign <$> (s => t(~textAlign=s, ())),
        textDecorationLine <$> (s => t(~textDecorationLine=s, ())),
        textShadowColor <$> (s => t(~textShadowColor=s, ())),
        fontFamily <$> (s => t(~fontFamily=s, ())),
        textShadowRadius <$> (s => t(~textShadowRadius=s, ())),
        includeFontPadding <$> (s => t(~includeFontPadding=s, ())),
        textAlignVertical <$> (s => t(~textAlignVertical=s, ())),
        fontVariant <$> (s => t(~fontVariant=s, ())),
        letterSpacing <$> (s => t(~letterSpacing=s, ())),
        textDecorationColor <$> (s => t(~textDecorationColor=s, ())),
        textDecorationStyle <$> (s => t(~textDecorationStyle=s, ())),
        textTransform <$> (s => t(~textTransform=s, ())),
        writingDirection <$> (s => t(~writingDirection=s, ())),
        styleText,
      |])
    );
  let reactChildren = {
    switch (children) {
    | Some(children) => [|children|]
    | None => [|value->React.string|]
    };
  };
  ReasonReact.cloneElement(
    component,
    ~props={"style": resolvedStyle},
    reactChildren,
  );
};

[@genType]
let default = make;