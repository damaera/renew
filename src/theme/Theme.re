type t = {
  // global
  breakpoints: Theme_Breakpoints.t,
  colors: Theme_Colors.t,
  // component
  button: Button_Theme.t,
  text: Text_Theme.t,
  space: Theme_Space.t,
  input: Input_Theme.t,
};

[@genType]
let defaultTheme: t = {
  // global
  breakpoints: Theme_Breakpoints.defaultTheme,
  colors: Theme_Colors.light,
  // component
  button: Button_Theme.defaultTheme,
  text: Text_Theme.defaultTheme,
  input: Input_Theme.defaultTheme,
  space: Theme_Space.defaultTheme,
};

let themeContext = React.createContext(defaultTheme);

let makeProps = (~value: t=defaultTheme, ~children, ()) => {
  "value": value,
  "children": children,
};

let make = React.Context.provider(themeContext);

[@genType]
let useTheme = () => {
  let theme = React.useContext(themeContext);
  theme;
};

[@genType]
let default = make;