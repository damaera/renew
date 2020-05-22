/* TypeScript file generated from Text.re by genType. */
/* eslint-disable import/first */


import * as React from 'react';

const $$toRE6380429: { [key: string]: any } = {"_2xl": 1056022183, "_3xl": 1056071912, "_4xl": 1056121641, "_5xl": 1056171370, "_6xl": 1056221099, "lg": 24187, "md": 24407, "sm": 25754, "xl": 26868, "xs": 26875};

// tslint:disable-next-line:no-var-requires
const TextBS = require('./Text.bs');

import {Style_t as ReactNative_Style_t} from '../../components/shims/ReactNative.shim';

// tslint:disable-next-line:interface-over-type-literal
export type Props = {
  readonly size?: 
    "_2xl"
  | "_3xl"
  | "_4xl"
  | "_5xl"
  | "_6xl"
  | "lg"
  | "md"
  | "sm"
  | "xl"
  | "xs"; 
  readonly styleText?: ReactNative_Style_t; 
  readonly value: string
};

export const $$default: React.ComponentType<{
  readonly size?: 
    "_2xl"
  | "_3xl"
  | "_4xl"
  | "_5xl"
  | "_6xl"
  | "lg"
  | "md"
  | "sm"
  | "xl"
  | "xs"; 
  readonly styleText?: ReactNative_Style_t; 
  readonly value: string
}> = function Text(Arg1: any) {
  const $props = {size:(Arg1.size == null ? undefined : $$toRE6380429[Arg1.size]), styleText:Arg1.styleText, value:Arg1.value};
  const result = React.createElement(TextBS.default, $props);
  return result
};

export default $$default;
