type sizeT = {
  xs: float,
  sm: float,
  md: float,
  lg: float,
  xl: float,
};

type variantT = {
  solid: string,
  light: string,
  outline: string,
  ghost: string,
};
type fontWeightT = [
  | `normal
  | `bold
  | `_100
  | `_200
  | `_300
  | `_400
  | `_500
  | `_600
  | `_700
  | `_800
  | `_900
];

type textTransformT = [ | `none | `uppercase | `capitalize | `lowercase];

type t = {
  borderRadius: float,
  borderWidth: float,
  textColor: variantT,
  fontWeight: fontWeightT,
  height: sizeT,
  paddingHorizontal: sizeT,
  textTransform: textTransformT,
};

[@genType]
let defaultTheme: t = {
  borderRadius: 4.,
  borderWidth: 2.,
  textTransform: `none,
  textColor: {
    solid: Theme_Colors.light.background,
    outline: Theme_Colors.light.foreground,
    ghost: Theme_Colors.light.foreground,
    light: Theme_Colors.light.foreground,
  },
  fontWeight: `bold,
  height: {
    xs: 21.,
    sm: 28.,
    md: 35.,
    lg: 42.,
    xl: 49.,
  },
  paddingHorizontal: {
    xs: 7.,
    sm: 10.5,
    md: 14.,
    lg: 17.5,
    xl: 21.,
  },
};