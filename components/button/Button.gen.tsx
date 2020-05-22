/* TypeScript file generated from Button.re by genType. */
/* eslint-disable import/first */


import * as React from 'react';

const $$toRE313213742: { [key: string]: any } = {"primary": 58474434, "secondary": -499495052, "success": 944645571, "error": -215364664, "info": -977586066, "warning": 164354652, "neutral": -349573817};

const $$toRE486003711: { [key: string]: any } = {"solid": 12956715, "light": -184774442, "outline": -507635838, "ghost": 324570959};

const $$toRE798217195: { [key: string]: any } = {"normal": 812216871, "small": -9768761, "big": 4896960};

// tslint:disable-next-line:no-var-requires
const ButtonBS = require('./Button.bs');

// tslint:disable-next-line:interface-over-type-literal
export type sizeT = "normal" | "small" | "big";

// tslint:disable-next-line:interface-over-type-literal
export type typeT = "solid" | "light" | "outline" | "ghost";

// tslint:disable-next-line:interface-over-type-literal
export type variantT = 
    "primary"
  | "secondary"
  | "success"
  | "error"
  | "info"
  | "warning"
  | "neutral";

// tslint:disable-next-line:interface-over-type-literal
export type Props = {
  readonly size?: sizeT; 
  readonly text: string; 
  readonly type_?: typeT; 
  readonly variant?: variantT
};

export const $$default: React.ComponentType<{
  readonly size?: sizeT; 
  readonly text: string; 
  readonly type_?: typeT; 
  readonly variant?: variantT
}> = function Button(Arg1: any) {
  const $props = {size:(Arg1.size == null ? undefined : $$toRE798217195[Arg1.size]), text:Arg1.text, type_:(Arg1.type_ == null ? undefined : $$toRE486003711[Arg1.type_]), variant:(Arg1.variant == null ? undefined : $$toRE313213742[Arg1.variant])};
  const result = React.createElement(ButtonBS.default, $props);
  return result
};

export default $$default;
