/* TypeScript file generated from Button.re by genType. */
/* eslint-disable import/first */


import * as React from 'react';

const $$toRE266350424: { [key: string]: any } = {"solid": 12956715, "ghost": 324570959, "outline": -507635838, "light": -184774442};

const $$toRE808406435: { [key: string]: any } = {"primary": 58474434, "secondary": -499495052, "success": 944645571, "danger": 512905955, "info": -977586066, "warning": 164354652, "neutral": -349573817};

const $$toRE981135708: { [key: string]: any } = {"xs": 26875, "sm": 25754, "md": 24407, "lg": 24187, "xl": 26868};

// tslint:disable-next-line:no-var-requires
const ButtonBS = require('./Button.bs');

import {Style_t as ReactNative_Style_t} from '../../components/shims/ReactNative.shim';

// tslint:disable-next-line:interface-over-type-literal
export type sizeT = "xs" | "sm" | "md" | "lg" | "xl";

// tslint:disable-next-line:interface-over-type-literal
export type variantColorT = 
    "primary"
  | "secondary"
  | "success"
  | "danger"
  | "info"
  | "warning"
  | "neutral";

// tslint:disable-next-line:interface-over-type-literal
export type variantT = "solid" | "ghost" | "outline" | "light";

// tslint:disable-next-line:interface-over-type-literal
export type Props = {
  readonly children?: React.ReactNode; 
  readonly color?: variantColorT; 
  readonly prefixElement?: JSX.Element; 
  readonly size?: sizeT; 
  readonly style?: ReactNative_Style_t; 
  readonly suffixElement?: JSX.Element; 
  readonly text: string; 
  readonly textStyle?: ReactNative_Style_t; 
  readonly variant?: variantT
};

export const $$default: React.ComponentType<{
  readonly children?: React.ReactNode; 
  readonly color?: variantColorT; 
  readonly prefixElement?: JSX.Element; 
  readonly size?: sizeT; 
  readonly style?: ReactNative_Style_t; 
  readonly suffixElement?: JSX.Element; 
  readonly text: string; 
  readonly textStyle?: ReactNative_Style_t; 
  readonly variant?: variantT
}> = function Button(Arg1: any) {
  const $props = {children:Arg1.children, color:(Arg1.color == null ? undefined : $$toRE808406435[Arg1.color]), prefixElement:Arg1.prefixElement, size:(Arg1.size == null ? undefined : $$toRE981135708[Arg1.size]), style:Arg1.style, suffixElement:Arg1.suffixElement, text:Arg1.text, textStyle:Arg1.textStyle, variant:(Arg1.variant == null ? undefined : $$toRE266350424[Arg1.variant])};
  const result = React.createElement(ButtonBS.default, $props);
  return result
};

export default $$default;
