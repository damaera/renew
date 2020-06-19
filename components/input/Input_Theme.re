type textTransformT = [ | `none | `uppercase | `capitalize | `lowercase];

type t = {
  borderRadius: float,
  borderWidth: float,
  textColor: string,
  placeholderColor: string,
  backgroundColor: string,
  //
  height: float,
  paddingHorizontal: float,
  textTransform: textTransformT,
};

[@genType]
let defaultTheme: t = {
  borderRadius: 4.,
  borderWidth: 1.,
  textTransform: `none,
  textColor: Theme_Colors.light.foreground,
  placeholderColor: Theme_Colors.light.neutral300,
  backgroundColor: Theme_Colors.light.background,
  height: 35.,
  paddingHorizontal: 14.,
};