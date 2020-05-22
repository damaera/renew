type t = {
  background: string,
  foreground: string,
  //
  neutral100: string,
  neutral200: string,
  neutral300: string,
  neutral400: string,
  neutral500: string,
  neutral600: string,
  neutral700: string,
  neutral800: string,
  neutral900: string,
  //
  primary: string,
  primaryLight: string,
  primaryDark: string,
  //
  secondary: string,
  secondaryLight: string,
  secondaryDark: string,
  //
  success: string,
  successLight: string,
  successDark: string,
  //
  error: string,
  errorLight: string,
  errorDark: string,
  //
  info: string,
  infoLight: string,
  infoDark: string,
  //
  warning: string,
  warningLight: string,
  warningDark: string,
};

[@genType]
let light: t = {
  background: "#fff",
  foreground: "#000",
  //
  neutral100: "#fafafa",
  neutral200: "#eaeaea",
  neutral300: "#999",
  neutral400: "#888",
  neutral500: "#888",
  neutral600: "#888",
  neutral700: "#888",
  neutral800: "#888",
  neutral900: "#111",
  //
  primary: "#333",
  primaryDark: "#222",
  primaryLight: "#444",
  //
  secondary: "#333",
  secondaryDark: "#222",
  secondaryLight: "#444",
  //
  success: "#333",
  successDark: "#222",
  successLight: "#444",
  //
  error: "#333",
  errorDark: "#222",
  errorLight: "#444",
  //
  info: "#333",
  infoDark: "#222",
  infoLight: "#444",
  //
  warning: "#333",
  warningDark: "#222",
  warningLight: "#444",
};