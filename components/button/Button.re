module UIText = Text;
open ReactNative;

type sizeT = [ | `xs | `sm | `md | `lg | `xl];
type variantColorT = [
  | `primary
  | `secondary
  | `success
  | `danger
  | `info
  | `warning
  | `neutral
];

type variantT = [ | `solid | `ghost | `outline | `light];

type colorT = {
  normal: string,
  light: string,
  lighter: string,
  dark: string,
  darker: string,
};

[@react.component]
let make =
    (
      ~text,
      ~size: sizeT=`md,
      ~variant: variantT=`solid,
      ~color: variantColorT=`neutral,
      ~prefixElement=?,
      ~suffixElement=?,
      ~style=?,
      ~textStyle=?,
      ~children=?,
      ~onPress=_ => (),
    ) => {
  let theme = Theme.useTheme();

  let styleButton = style;
  let styleText = textStyle;

  let (isHover, setHover) = React.useState(() => false);

  let (height, paddingHorizontal) =
    Style.(
      switch (size) {
      | `xs => (
          theme.button.height.xs->dp,
          theme.button.paddingHorizontal.xs->dp,
        )
      | `sm => (
          theme.button.height.sm->dp,
          theme.button.paddingHorizontal.sm->dp,
        )
      | `md => (
          theme.button.height.md->dp,
          theme.button.paddingHorizontal.md->dp,
        )
      | `lg => (
          theme.button.height.lg->dp,
          theme.button.paddingHorizontal.lg->dp,
        )

      | `xl => (
          theme.button.height.xl->dp,
          theme.button.paddingHorizontal.xl->dp,
        )
      }
    );

  let color = {
    switch (color) {
    | `primary => {
        normal: theme.colors.primary,
        light: theme.colors.primaryLight,
        lighter: theme.colors.primaryLighter,
        dark: theme.colors.primaryDark,
        darker: theme.colors.primaryDarker,
      }
    | `secondary => {
        normal: theme.colors.secondary,
        light: theme.colors.secondaryLight,
        lighter: theme.colors.secondaryLighter,
        dark: theme.colors.secondaryDark,
        darker: theme.colors.secondaryDarker,
      }
    | `success => {
        normal: theme.colors.success,
        light: theme.colors.successLight,
        lighter: theme.colors.successLighter,
        dark: theme.colors.successDark,
        darker: theme.colors.successDarker,
      }
    | `danger => {
        normal: theme.colors.danger,
        light: theme.colors.dangerLight,
        lighter: theme.colors.dangerLighter,
        dark: theme.colors.dangerDark,
        darker: theme.colors.dangerDarker,
      }
    | `info => {
        normal: theme.colors.info,
        light: theme.colors.infoLight,
        lighter: theme.colors.infoLighter,
        dark: theme.colors.infoDark,
        darker: theme.colors.infoDarker,
      }
    | `warning => {
        normal: theme.colors.warning,
        light: theme.colors.warningLight,
        lighter: theme.colors.warningLighter,
        dark: theme.colors.warningDark,
        darker: theme.colors.warningDarker,
      }
    | `neutral => {
        normal: theme.colors.neutral600,
        light: theme.colors.neutral400,
        lighter: theme.colors.neutral200,
        dark: theme.colors.neutral700,
        darker: theme.colors.neutral900,
      }
    };
  };

  let typeStyleText =
    switch (variant) {
    | `solid => Style.textStyle(~color=theme.button.textColor.solid, ())
    | `outline => Style.textStyle(~color=color.dark, ())
    | `ghost => Style.textStyle(~color=color.normal, ())
    | `light => Style.textStyle(~color=color.darker, ())
    };

  let bg =
    switch (variant) {
    | `solid => color.normal
    | `outline => theme.colors.background
    | `ghost => theme.colors.background
    | `light => color.lighter
    };
  let borderColor =
    switch (variant) {
    | `solid => color.normal
    | `outline => color.dark
    | `ghost => theme.colors.background
    | `light => color.lighter
    };

  let resolvedStyle = Style.(arrayOption([|styleButton|]));

  let resolvedTextStyle =
    Style.(arrayOption([|Some(typeStyleText), styleText|]));

  let baseRem = theme.text.fontSize.md;

  let spacerSize =
    switch (size) {
    | `xs => theme.text.fontSize.xs /. baseRem
    | `sm => theme.text.fontSize.sm /. baseRem
    | `md => 1.
    | `lg => theme.text.fontSize.lg /. baseRem
    | `xl => theme.text.fontSize.xl /. baseRem
    };

  let onHoverIn = () => {
    setHover(_ => true);
  };
  let onHoverOut = () => {
    setHover(_ => false);
  };

  <Hoverable onHoverIn onHoverOut>
    <Box
      component={
        <TouchableOpacity
          activeOpacity=0.7
          accessibilityRole=`button
          onPress
        />
      }
      flexDirection=`row
      alignItems=`center
      borderRadius={theme.button.borderRadius}
      borderWidth={theme.button.borderWidth}
      bg
      borderColor
      h=height
      ph=paddingHorizontal
      opacity={isHover ? 0.9 : 1.}
      style=resolvedStyle>
      {switch (prefixElement) {
       | Some(element) =>
         <> <View> element </View> <Spacer v=spacerSize /> </>
       | None => React.null
       }}
      <View>
        {switch (children) {
         | Some(children) => children
         | None =>
           <UIText
             style=resolvedTextStyle
             fontWeight={theme.button.fontWeight}
             textTransform={theme.button.textTransform}
             value=text
             size
           />
         }}
      </View>
      {switch (suffixElement) {
       | Some(element) =>
         <> <Spacer v=spacerSize /> <View> element </View> </>
       | None => React.null
       }}
    </Box>
  </Hoverable>;
};

[@genType]
let default = make;