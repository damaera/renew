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
  primaryLighter: string,
  primaryDark: string,
  primaryDarker: string,
  //
  secondary: string,
  secondaryLight: string,
  secondaryLighter: string,
  secondaryDark: string,
  secondaryDarker: string,
  //
  success: string,
  successLight: string,
  successLighter: string,
  successDark: string,
  successDarker: string,
  //
  danger: string,
  dangerLight: string,
  dangerLighter: string,
  dangerDark: string,
  dangerDarker: string,
  //
  info: string,
  infoLight: string,
  infoLighter: string,
  infoDark: string,
  infoDarker: string,
  //
  warning: string,
  warningLight: string,
  warningLighter: string,
  warningDark: string,
  warningDarker: string,
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
  primaryDark: "#303f9f",
  primaryDarker: "#1a237e",
  primaryLight: "#7986cb",
  primaryLighter: "#c5cae9",
  //
  secondary: "#e91e63",
  secondaryDark: "#c2185b",
  secondaryDarker: "#880e4f",
  secondaryLight: "#f06292",
  secondaryLighter: "#f8bbd0",
  //
  success: "#4caf50",
  successDark: "#388e3c",
  successDarker: "#1b5e20",
  successLight: "#81c784",
  successLighter: "#c8e6c9",
  //
  danger: "#f44336",
  dangerDark: "#ba000d",
  dangerDarker: "#b71c1c",
  dangerLight: "#e57373",
  dangerLighter: "#ffcdd2",
  //
  info: "#2196f3",
  infoDark: "#1976d2",
  infoDarker: "#0d47a1",
  infoLight: "#64b5f6",
  infoLighter: "#bbdefb",
  //
  warning: "#ffc107",
  warningDark: "#ffa000",
  warningDarker: "#ff6f00",
  warningLight: "#ffd54f",
  warningLighter: "#ffecb3",
};