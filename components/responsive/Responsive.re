open Option;

type sizeT = ReactNative.Style.size;
type resSizeT = {
  xs: option(sizeT),
  sm: option(sizeT),
  md: option(sizeT),
  lg: option(sizeT),
  xl: option(sizeT),
};

type displayT = [ | `flex | `none];
type resDisplayT = {
  xs: option(displayT),
  sm: option(displayT),
  md: option(displayT),
  lg: option(displayT),
  xl: option(displayT),
};

let useWindowWidth = () => {
  let initial = ReactNative.Dimensions.get(`window);
  let (windowWidth, setWindowWidth) = React.useState(() => initial##width);
  let handler = v => setWindowWidth(_ => v##window##width);
  React.useEffect0(() => {
    ReactNative.Dimensions.addEventListener(`change, handler);
    Some(() => ReactNative.Dimensions.removeEventListener(`change, handler));
  });

  windowWidth;
};

let makeSize = (~xs=?, ~sm=?, ~md=?, ~lg=?, ~xl=?, ()) => {
  let size = {xs, sm, md, lg, xl};
  size;
};

[@react.component]
let make =
    (~component=<ReactNative.View />, ~display=?, ~style=?, ~children=?) => {
  let windowWidth = useWindowWidth();
  let theme = Theme.useTheme();

  let currentScreenSize =
    switch (windowWidth) {
    | w when w >= theme.breakpoints.xl => `xl
    | w when w >= theme.breakpoints.lg => `lg
    | w when w >= theme.breakpoints.md => `md
    | w when w >= theme.breakpoints.sm => `sm
    | _ => `xs
    };

  let resVal = (v, defaultValue) => {
    switch (currentScreenSize) {
    | `xs => v.xs |? defaultValue
    | `sm => v.sm |? (v.xs |? defaultValue)
    | `md => v.md |? (v.sm |? (v.xs |? defaultValue))
    | `lg => v.lg |? (v.md |? (v.sm |? (v.xs |? defaultValue)))
    | `xl => v.xl |? (v.lg |? (v.md |? (v.sm |? (v.xs |? defaultValue))))
    };
  };

  let v = ReactNative.Style.viewStyle;

  let resolvedStyle =
    ReactNative.Style.arrayOption([|
      display <$> (d => v(~display=resVal(d, `flex), ())),
      style,
    |]);

  let reactChildren = {
    switch (children) {
    | Some(children) => [|children|]
    | None => [||]
    };
  };

  ReasonReact.cloneElement(
    component,
    ~props={"style": resolvedStyle},
    reactChildren,
  );
};

[@genType]
let default = make;