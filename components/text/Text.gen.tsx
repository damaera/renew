/* TypeScript file generated from Text.re by genType. */
/* eslint-disable import/first */


import * as React from 'react';

const $$toRE6380429: { [key: string]: any } = {"_2xl": 1056022183, "_3xl": 1056071912, "_4xl": 1056121641, "_5xl": 1056171370, "_6xl": 1056221099, "lg": 24187, "md": 24407, "sm": 25754, "xl": 26868, "xs": 26875};

const $$toRE8764302: { [key: string]: any } = {"body": -1055163742, "heading": -485795902, "tertiary": -139500910, "monospace": -555363901};

const $$toRE27895025: { [key: string]: any } = {"auto": -1065951377, "bottom": -445061397, "center": 98248149, "top": 5793429};

const $$toRE301806490: { [key: string]: any } = {"auto": -1065951377, "center": 98248149, "justify": 62250832, "left": -944764921, "right": -379319332};

const $$toRE335941644: { [key: string]: any } = {"italic": 107228912, "normal": 812216871};

const $$toRE377449591: { [key: string]: any } = {"lineThrough": 412155569, "none": -922086728, "underline": 131142924, "underlineLineThrough": 495568133};

const $$toRE455634539: { [key: string]: any } = {"dashed": 568403505, "dotted": 841979626, "double": 852175633, "solid": 12956715};

const $$toRE509921133: { [key: string]: any } = {"auto": -1065951377, "ltr": 5396714, "rtl": 5695082};

const $$toRE574697216: { [key: string]: any } = {"_100": 1055956338, "_200": 1056006067, "_300": 1056055796, "_400": 1056105525, "_500": 1056155254, "_600": 1056204983, "_700": 1056254712, "_800": 1056304441, "_900": 1056354170, "bold": -1055161979, "normal": 812216871};

const $$toRE667123973: { [key: string]: any } = {"capitalize": -509867604, "lowercase": -425349839, "none": -922086728, "uppercase": -415330030};

// tslint:disable-next-line:no-var-requires
const TextBS = require('./Text.bs');

import {Color_t as ReactNative_Color_t} from '../../components/shims/ReactNative.shim';

import {FontVariant_t as ReactNative_FontVariant_t} from '../../components/shims/ReactNative.shim';

import {Style_offset as ReactNative_Style_offset} from '../../components/shims/ReactNative.shim';

import {Style_t as ReactNative_Style_t} from '../../components/shims/ReactNative.shim';

// tslint:disable-next-line:interface-over-type-literal
export type variantT = "body" | "heading" | "tertiary" | "monospace";

// tslint:disable-next-line:interface-over-type-literal
export type Props = {
  readonly children?: React.ReactNode; 
  readonly color?: ReactNative_Color_t; 
  readonly component?: JSX.Element; 
  readonly fontFamily?: string; 
  readonly fontSize?: number; 
  readonly fontStyle?: 
    "italic"
  | "normal"; 
  readonly fontVariant?: ReactNative_FontVariant_t[]; 
  readonly fontWeight?: 
    "_100"
  | "_200"
  | "_300"
  | "_400"
  | "_500"
  | "_600"
  | "_700"
  | "_800"
  | "_900"
  | "bold"
  | "normal"; 
  readonly includeFontPadding?: boolean; 
  readonly letterSpacing?: number; 
  readonly lineHeight?: number; 
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
  readonly style?: ReactNative_Style_t; 
  readonly textAlign?: 
    "auto"
  | "center"
  | "justify"
  | "left"
  | "right"; 
  readonly textAlignVertical?: 
    "auto"
  | "bottom"
  | "center"
  | "top"; 
  readonly textDecorationColor?: ReactNative_Color_t; 
  readonly textDecorationLine?: 
    "lineThrough"
  | "none"
  | "underline"
  | "underlineLineThrough"; 
  readonly textDecorationStyle?: 
    "dashed"
  | "dotted"
  | "double"
  | "solid"; 
  readonly textShadowColor?: ReactNative_Color_t; 
  readonly textShadowOffset?: ReactNative_Style_offset; 
  readonly textShadowRadius?: number; 
  readonly textTransform?: 
    "capitalize"
  | "lowercase"
  | "none"
  | "uppercase"; 
  readonly value?: string; 
  readonly variant?: variantT; 
  readonly writingDirection?: 
    "auto"
  | "ltr"
  | "rtl"
};

export const $$default: React.ComponentType<{
  readonly children?: React.ReactNode; 
  readonly color?: ReactNative_Color_t; 
  readonly component?: JSX.Element; 
  readonly fontFamily?: string; 
  readonly fontSize?: number; 
  readonly fontStyle?: 
    "italic"
  | "normal"; 
  readonly fontVariant?: ReactNative_FontVariant_t[]; 
  readonly fontWeight?: 
    "_100"
  | "_200"
  | "_300"
  | "_400"
  | "_500"
  | "_600"
  | "_700"
  | "_800"
  | "_900"
  | "bold"
  | "normal"; 
  readonly includeFontPadding?: boolean; 
  readonly letterSpacing?: number; 
  readonly lineHeight?: number; 
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
  readonly style?: ReactNative_Style_t; 
  readonly textAlign?: 
    "auto"
  | "center"
  | "justify"
  | "left"
  | "right"; 
  readonly textAlignVertical?: 
    "auto"
  | "bottom"
  | "center"
  | "top"; 
  readonly textDecorationColor?: ReactNative_Color_t; 
  readonly textDecorationLine?: 
    "lineThrough"
  | "none"
  | "underline"
  | "underlineLineThrough"; 
  readonly textDecorationStyle?: 
    "dashed"
  | "dotted"
  | "double"
  | "solid"; 
  readonly textShadowColor?: ReactNative_Color_t; 
  readonly textShadowOffset?: ReactNative_Style_offset; 
  readonly textShadowRadius?: number; 
  readonly textTransform?: 
    "capitalize"
  | "lowercase"
  | "none"
  | "uppercase"; 
  readonly value?: string; 
  readonly variant?: variantT; 
  readonly writingDirection?: 
    "auto"
  | "ltr"
  | "rtl"
}> = function Text(Arg1: any) {
  const $props = {children:Arg1.children, color:Arg1.color, component:Arg1.component, fontFamily:Arg1.fontFamily, fontSize:Arg1.fontSize, fontStyle:(Arg1.fontStyle == null ? undefined : $$toRE335941644[Arg1.fontStyle]), fontVariant:Arg1.fontVariant, fontWeight:(Arg1.fontWeight == null ? undefined : $$toRE574697216[Arg1.fontWeight]), includeFontPadding:Arg1.includeFontPadding, letterSpacing:Arg1.letterSpacing, lineHeight:Arg1.lineHeight, size:(Arg1.size == null ? undefined : $$toRE6380429[Arg1.size]), style:Arg1.style, textAlign:(Arg1.textAlign == null ? undefined : $$toRE301806490[Arg1.textAlign]), textAlignVertical:(Arg1.textAlignVertical == null ? undefined : $$toRE27895025[Arg1.textAlignVertical]), textDecorationColor:Arg1.textDecorationColor, textDecorationLine:(Arg1.textDecorationLine == null ? undefined : $$toRE377449591[Arg1.textDecorationLine]), textDecorationStyle:(Arg1.textDecorationStyle == null ? undefined : $$toRE455634539[Arg1.textDecorationStyle]), textShadowColor:Arg1.textShadowColor, textShadowOffset:Arg1.textShadowOffset, textShadowRadius:Arg1.textShadowRadius, textTransform:(Arg1.textTransform == null ? undefined : $$toRE667123973[Arg1.textTransform]), value:Arg1.value, variant:(Arg1.variant == null ? undefined : $$toRE8764302[Arg1.variant]), writingDirection:(Arg1.writingDirection == null ? undefined : $$toRE509921133[Arg1.writingDirection])};
  const result = React.createElement(TextBS.default, $props);
  return result
};

export default $$default;
