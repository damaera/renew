type sizeT = {
  xs: float,
  sm: float,
  md: float,
  lg: float,
  xl: float,
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
  fontWeight: fontWeightT,
  solidTextColor: string,
  height: sizeT,
  paddingHorizontal: sizeT,
  textTransform: textTransformT,
};

[@genType]
let defaultTheme: t = {
  borderRadius: 4.,
  borderWidth: 2.,
  textTransform: `none,
  fontWeight: `bold,
  solidTextColor: Theme_Colors.light.background,
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