let (>>=) = Belt.Option.flatMap;
let (<$>) = Belt.Option.map;

let (|?) = (option, defaultValue) =>
  switch (option) {
  | Some(value) => value
  | None => defaultValue
  };