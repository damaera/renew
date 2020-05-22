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
  dark: string,
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
      ~styleButton=?,
      ~styleText=?,
    ) => {
  let theme = React.useContext(Theme.themeContext);

  let (isHover, setHover) = React.useState(() => false);

  let sizeStyle =
    Style.(
      switch (size) {
      | `xs =>
        viewStyle(
          ~height=theme.button.height.xs->dp,
          ~paddingHorizontal=theme.button.paddingHorizontal.xs->dp,
          (),
        )
      | `sm =>
        viewStyle(
          ~height=theme.button.height.sm->dp,
          ~paddingHorizontal=theme.button.paddingHorizontal.sm->dp,
          (),
        )
      | `md =>
        viewStyle(
          ~height=theme.button.height.md->dp,
          ~paddingHorizontal=theme.button.paddingHorizontal.md->dp,
          (),
        )
      | `lg =>
        viewStyle(
          ~height=theme.button.height.lg->dp,
          ~paddingHorizontal=theme.button.paddingHorizontal.lg->dp,
          (),
        )

      | `xl =>
        viewStyle(
          ~height=theme.button.height.xl->dp,
          ~paddingHorizontal=theme.button.paddingHorizontal.xl->dp,
          (),
        )
      }
    );

  let color = {
    switch (color) {
    | `primary => {
        normal: theme.colors.primary,
        light: theme.colors.primaryLight,
        dark: theme.colors.primaryDark,
      }
    | `secondary => {
        normal: theme.colors.secondary,
        light: theme.colors.secondaryLight,
        dark: theme.colors.secondaryDark,
      }
    | `success => {
        normal: theme.colors.success,
        light: theme.colors.successLight,
        dark: theme.colors.successDark,
      }
    | `danger => {
        normal: theme.colors.danger,
        light: theme.colors.dangerLight,
        dark: theme.colors.dangerDark,
      }
    | `info => {
        normal: theme.colors.info,
        light: theme.colors.infoLight,
        dark: theme.colors.infoDark,
      }
    | `warning => {
        normal: theme.colors.warning,
        light: theme.colors.warningLight,
        dark: theme.colors.warningDark,
      }
    | `neutral => {
        normal: theme.colors.neutral500,
        light: theme.colors.neutral200,
        dark: theme.colors.neutral700,
      }
    };
  };

  let typeStyle =
    Style.(
      switch (variant) {
      | `solid => (
          viewStyle(
            ~backgroundColor=color.normal,
            ~borderColor=color.normal,
            (),
          ),
          textStyle(~color=theme.button.textColor.solid, ()),
        )
      | `outline => (
          viewStyle(
            ~backgroundColor=theme.colors.background,
            ~borderColor=color.normal,
            (),
          ),
          textStyle(~color=color.normal, ()),
        )
      | `ghost => (
          viewStyle(
            ~backgroundColor=theme.colors.background,
            ~borderColor=theme.colors.background,
            (),
          ),
          textStyle(~color=color.normal, ()),
        )
      | `light => (
          viewStyle(
            ~backgroundColor=color.light,
            ~borderColor=color.light,
            (),
          ),
          textStyle(~color=color.dark, ()),
        )
      }
    );

  let (typeStyleButton, typeStyleText) = typeStyle;

  let resolvedStyle =
    Style.(
      arrayOption([|
        Some(
          viewStyle(
            ~flexDirection=`row,
            ~alignItems=`center,
            ~borderRadius=theme.button.borderRadius,
            ~borderWidth=theme.button.borderWidth,
            ~backgroundColor=theme.colors.primary,
            ~opacity=isHover ? 0.9 : 1.,
            (),
          ),
        ),
        Some(sizeStyle),
        Some(typeStyleButton),
        styleButton,
      |])
    );

  let resolvedTextStyle =
    Style.(
      arrayOption([|
        Some(
          textStyle(
            ~fontWeight=theme.button.fontWeight,
            ~textTransform=theme.button.textTransform,
            (),
          ),
        ),
        Some(typeStyleText),
        styleText,
      |])
    );

  let spacerSize =
    switch (size) {
    | `xs => theme.text.fontSize.xs /. 2.
    | `sm => theme.text.fontSize.sm /. 2.
    | `md => theme.text.fontSize.md /. 2.
    | `lg => theme.text.fontSize.lg /. 2.
    | `xl => theme.text.fontSize.xl /. 2.
    };

  let onHoverIn = () => {
    setHover(_ => true);
  };
  let onHoverOut = () => {
    setHover(_ => false);
  };

  <Hoverable onHoverIn onHoverOut>
    <TouchableOpacity
      activeOpacity=0.7 style=resolvedStyle accessibilityRole=`button>
      {switch (prefixElement) {
       | Some(element) =>
         <> <View> element </View> <Spacer x=spacerSize /> </>
       | None => React.null
       }}
      <View> <UIText styleText=resolvedTextStyle value=text size /> </View>
      {switch (suffixElement) {
       | Some(element) =>
         <> <Spacer x=spacerSize /> <View> element </View> </>
       | None => React.null
       }}
    </TouchableOpacity>
  </Hoverable>;
};

[@genType]
let default = make;