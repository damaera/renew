type t = {
  xs: float,
  sm: float,
  md: float,
  lg: float,
  xl: float,
};

[@genType]
let defaultTheme: t = {xs: 0., sm: 576., md: 768., lg: 992., xl: 1200.};