open Option;

type resT('a) = {
  xs: option('a),
  sm: option('a),
  md: option('a),
  lg: option('a),
  xl: option('a),
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

let useScreenSize = () => {
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
  currentScreenSize;
};

let makeSize = (~xs=?, ~sm=?, ~md=?, ~lg=?, ~xl=?, ()) => {
  let size = {xs, sm, md, lg, xl};
  size;
};

[@react.component]
let make =
    (
      ~component=<ReactNative.View />,
      ~display=?,
      // Flex
      ~alignContent=?,
      ~alignItems=?,
      ~alignSelf=?,
      ~flex=?,
      ~flexBasis=?,
      ~flexDirection=?,
      ~flexGrow=?,
      ~flexShrink=?,
      ~flexWrap=?,
      ~justifyContent=?,
      // width and height
      ~width=?,
      ~height=?,
      ~minWidth=?,
      ~minHeight=?,
      ~maxWidth=?,
      ~maxHeight=?,
      //
      ~style=?,
      ~children=?,
    ) => {
  let currentScreenSize = useScreenSize();

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
  let dp = ReactNative.Style.dp;
  let pct = ReactNative.Style.pct;

  let resolvedStyle =
    ReactNative.Style.arrayOption([|
      display <$> (d => v(~display=resVal(d, `flex), ())),
      // flex
      alignContent <$> (s => v(~alignContent=resVal(s, `flexStart), ())),
      alignItems <$> (s => v(~alignItems=resVal(s, `flexStart), ())),
      alignSelf <$> (s => v(~alignSelf=resVal(s, `flexStart), ())),
      flex <$> (s => v(~flex=resVal(s, 1.), ())),
      flexBasis <$> (s => v(~flexBasis=resVal(s, 0.->dp), ())),
      flexDirection <$> (s => v(~flexDirection=resVal(s, `row), ())),
      flexGrow <$> (s => v(~flexGrow=resVal(s, 1.), ())),
      flexShrink <$> (s => v(~flexShrink=resVal(s, 1.), ())),
      flexWrap <$> (s => v(~flexWrap=resVal(s, `wrap), ())),
      justifyContent <$> (s => v(~justifyContent=resVal(s, `flexStart), ())),
      // width and height
      width <$> (d => v(~width=resVal(d, 100.->pct), ())),
      height <$> (s => v(~height=resVal(s, 100.->pct), ())),
      minWidth <$> (s => v(~minWidth=resVal(s, 0.->dp), ())),
      minHeight <$> (s => v(~minHeight=resVal(s, 0.->dp), ())),
      maxWidth <$> (s => v(~maxWidth=resVal(s, 100.->pct), ())),
      maxHeight <$> (s => v(~maxHeight=resVal(s, 100.->pct), ())),
      // rest
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