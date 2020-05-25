type sizeT = ReactNative.Style.size;
type resSizeT = {
  xs: option(sizeT),
  sm: option(sizeT),
  md: option(sizeT),
  lg: option(sizeT),
  xl: option(sizeT),
};

[@genType]
let useWindowWidth = () => {
  let (windowWidth, setWindowWidth) = React.useState(() => 0.);

  React.useEffect1(
    () => {
      let handler = v =>
        if (v##window##width != windowWidth) {
          setWindowWidth(_ => v##window##width);
        };
      ReactNative.Dimensions.addEventListener(`change, handler);
      Some(
        () => ReactNative.Dimensions.removeEventListener(`change, handler),
      );
    },
    [|windowWidth|],
  );

  windowWidth;
};

let makeSize = (~xs=?, ~sm=?, ~md=?, ~lg=?, ~xl=?, ()) => {
  let size = {xs, sm, md, lg, xl};
  size;
};