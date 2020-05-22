[@react.component]
let make = (~x=16., ~y=16.) => {
  let style = ReactNative.Style.(viewStyle(~width=x->dp, ~height=y->dp, ()));
  <ReactNative.View style />;
};

[@genType]
let default = make;