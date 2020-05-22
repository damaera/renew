open ReactNative;

type sizeT = [ | `normal | `small | `big];
type typeT = [ | `solid | `light | `outline | `ghost];
type variantT = [
  | `primary
  | `secondary
  | `success
  | `error
  | `info
  | `warning
  | `neutral
];

type colorT = {
  normal: string,
  light: string,
  dark: string,
};

type typeStyleT = {
  button: ReactNative.Style.t,
  text: ReactNative.Style.t,
};

[@react.component]
let make =
    (
      ~text,
      ~size: sizeT=`normal,
      ~variant: variantT=`neutral,
      ~type_: typeT=`solid,
    ) => {
  let theme = React.useContext(Theme.themeContext);

  let sizeStyle =
    Style.(
      switch (size) {
      | `small =>
        viewStyle(
          ~paddingVertical=theme.button.paddingVertical.small->dp,
          ~paddingHorizontal=theme.button.paddingHorizontal.small->dp,
          (),
        )
      | `normal =>
        viewStyle(
          ~paddingVertical=theme.button.paddingVertical.normal->dp,
          ~paddingHorizontal=theme.button.paddingHorizontal.normal->dp,
          (),
        )

      | `big =>
        viewStyle(
          ~paddingVertical=theme.button.paddingVertical.big->dp,
          ~paddingHorizontal=theme.button.paddingHorizontal.big->dp,
          (),
        )
      }
    );

  let color = {
    switch (variant) {
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
    | `error => {
        normal: theme.colors.error,
        light: theme.colors.errorLight,
        dark: theme.colors.errorDark,
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

  let typeStyle: typeStyleT =
    Style.(
      switch (type_) {
      | `solid => {
          button: viewStyle(~backgroundColor=color.normal, ()),
          text: textStyle(~color="#fff", ()),
        }
      | _ => {
          button: viewStyle(~backgroundColor=color.normal, ()),
          text: textStyle(~color="#fff", ()),
        }
      }
    );

  let resolvedStyle =
    Style.(
      array([|
        viewStyle(
          ~borderRadius=theme.button.borderRadius,
          ~backgroundColor=theme.colors.primary,
          (),
        ),
        sizeStyle,
        typeStyle.button,
      |])
    );

  let resolvedTextStyle = Style.(array([|typeStyle.text|]));

  <TouchableOpacity style=resolvedStyle>
    <View> <Text style=resolvedTextStyle> text->React.string </Text> </View>
  </TouchableOpacity>;
};

[@genType]
let default = make;