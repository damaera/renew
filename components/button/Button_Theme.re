type sizeT = {
  small: float,
  normal: float,
  big: float,
};

type variantT = {
  solid: string,
  outline: string,
  ghost: string,
};

type t = {
  borderRadius: float,
  textColor: variantT,
  paddingVertical: sizeT,
  paddingHorizontal: sizeT,
};

[@genType]
let defaultTheme: t = {
  borderRadius: 4.,
  textColor: {
    solid: Theme_Colors.light.background,
    outline: Theme_Colors.light.foreground,
    ghost: Theme_Colors.light.foreground,
  },
  paddingVertical: {
    small: 6.,
    normal: 8.,
    big: 16.,
  },
  paddingHorizontal: {
    small: 6.,
    normal: 16.,
    big: 32.,
  },
};