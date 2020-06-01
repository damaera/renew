type textTransformT = [ | `none | `uppercase | `capitalize | `lowercase];

type t = {
  borderRadius: float,
  borderWidth: float,
  textColor: string,
  height: float,
  paddingHorizontal: float,
  textTransform: textTransformT,
};

[@genType]
let defaultTheme: t = {
  borderRadius: 4.,
  borderWidth: 2.,
  textTransform: `none,
  textColor: Theme_Colors.light.foreground,
  height: 35.,
  paddingHorizontal: 14.,
};