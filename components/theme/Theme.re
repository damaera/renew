module Colors = Theme_Colors;

type t = {
  colors: Colors.t,
  button: Button_Theme.t,
};

[@genType]
let defaultTheme: t = {
  colors: Colors.light,
  button: Button_Theme.defaultTheme,
};

let themeContext = React.createContext(defaultTheme);

let makeProps = (~value: t, ~children, ()) => {
  "value": value,
  "children": children,
};

let make = React.Context.provider(themeContext);

[@genType]
let default = make;