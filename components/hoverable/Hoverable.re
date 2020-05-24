let isWeb = ReactNative.Platform.os == ReactNative.Platform.web;

[@react.component]
let make = (~children, ~onHoverIn, ~onHoverOut) =>
  if (!isWeb) {
    children;
  } else {
    // let (isHover, setHover) = React.useState(() => false);

    let onMouseEnter = _ => {
      onHoverIn();
    };
    let onMouseLeave = _ => {
      onHoverOut();
    };

    <span onMouseEnter onMouseLeave> children </span>;
  };

[@genType]
let default = make;