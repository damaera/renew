type sizeT = {
  xs: float,
  sm: float,
  md: float,
  lg: float,
  xl: float,
  _2xl: float,
  _3xl: float,
  _4xl: float,
  _5xl: float,
  _6xl: float,
};

type t = {
  fontSize: sizeT,
  fontFamily: string,
};

[@genType]
let defaultTheme: t = {
  fontFamily: "",
  fontSize: {
    xs: 12.,
    sm: 14.,
    md: 16.,
    lg: 18.,
    xl: 20.,
    _2xl: 24.,
    _3xl: 30.,
    _4xl: 36.,
    _5xl: 48.,
    _6xl: 64.,
  },
};