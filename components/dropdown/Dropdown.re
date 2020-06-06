module View = ReactNative.View;
[@react.component]
let make = (~isShow=false, ~trigger, ~children) => {
  <Box>
    <Box> trigger </Box>
    <Box position=`relative>
      {isShow ? <Box position=`absolute> children </Box> : React.null}
    </Box>
  </Box>;
};

[@genType]
let default = make;