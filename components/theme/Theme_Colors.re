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
  danger: string,
  dangerLight: string,
  dangerDark: string,
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
  neutral500: "#666",
  neutral600: "#444",
  neutral700: "#333",
  neutral800: "#111",
  neutral900: "#060606",
  //
  primary: "#3f51b5",
  primaryDark: "#002984",
  primaryLight: "#757de8",
  //
  secondary: "#e91e63",
  secondaryDark: "#b0003a",
  secondaryLight: "#ff6090",
  //
  success: "#4caf50",
  successDark: "#087f23",
  successLight: "#80e27e",
  //
  danger: "#f44336",
  dangerDark: "#ba000d",
  dangerLight: "#ff7961",
  //
  info: "#2196f3",
  infoDark: "#0069c0",
  infoLight: "#6ec6ff",
  //
  warning: "#ffc107",
  warningDark: "#c79100",
  warningLight: "#fff350",
};