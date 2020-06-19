// space for margin and padding
type t = array(ReactNative.Style.size);

let dp = ReactNative.Style.dp;

[@genType]
let defaultTheme: t = [|
  0.->dp,
  4.->dp,
  8.->dp,
  16.->dp,
  32.->dp,
  64.->dp,
  128.->dp,
  256.->dp,
  512.->dp,
|];