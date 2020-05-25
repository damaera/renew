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
// https://type-scale.com/
// scale: Major Third
// base size = 14
[@genType]
let defaultTheme: t = {
  fontFamily: "",
  fontSize: {
    xs: 8.96,
    sm: 11.2,
    md: 14.,
    lg: 17.5,
    xl: 21.88,
    _2xl: 27.34,
    _3xl: 34.18,
    _4xl: 42.72,
    _5xl: 53.41,
    _6xl: 66.76,
  },
};