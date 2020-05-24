[@react.component]
let make = (~x=16., ~y=16.) => {
  <Box w={x->ReactNative.Style.dp} h={y->ReactNative.Style.dp} />;
};

[@genType]
let default = make;