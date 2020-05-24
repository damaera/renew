/* TypeScript file generated from Box.re by genType. */
/* eslint-disable import/first */


import * as React from 'react';

const $$toRE36507703: { [key: string]: any } = {"column": -963948842, "columnReverse": 135477484, "row": 5693978, "rowReverse": 378951208};

const $$toRE199574244: { [key: string]: any } = {"inherit_": -601204732, "ltr": 5396714, "rtl": 5695082};

const $$toRE373987755: { [key: string]: any } = {"absolute": -1013592457, "relative": 903134412};

const $$toRE541798403: { [key: string]: any } = {"auto": -1065951377, "baseline": 287825029, "center": 98248149, "flexEnd": 924268066, "flexStart": 662439529, "stretch": -162316795};

const $$toRE556547177: { [key: string]: any } = {"nowrap": 867913355, "wrap": -822134326};

const $$toRE719148934: { [key: string]: any } = {"baseline": 287825029, "center": 98248149, "flexEnd": 924268066, "flexStart": 662439529, "stretch": -162316795};

const $$toRE815689974: { [key: string]: any } = {"center": 98248149, "flexEnd": 924268066, "flexStart": 662439529, "spaceAround": -485895757, "spaceBetween": 516682146, "spaceEvenly": -1016061555};

const $$toRE826265118: { [key: string]: any } = {"hidden": -862584982, "scroll": -949692403, "visible": 589592690};

const $$toRE866454557: { [key: string]: any } = {"center": 98248149, "flexEnd": 924268066, "flexStart": 662439529, "spaceAround": -485895757, "spaceBetween": 516682146, "stretch": -162316795};

// tslint:disable-next-line:no-var-requires
const BoxBS = require('./Box.bs');

import {Color_t as ReactNative_Color_t} from '../../components/shims/ReactNative.shim';

import {Style_margin as ReactNative_Style_margin} from '../../components/shims/ReactNative.shim';

import {Style_size as ReactNative_Style_size} from '../../components/shims/ReactNative.shim';

import {Style_t as ReactNative_Style_t} from '../../components/shims/ReactNative.shim';

// tslint:disable-next-line:interface-over-type-literal
export type Props = {
  readonly alignContent?: 
    "center"
  | "flexEnd"
  | "flexStart"
  | "spaceAround"
  | "spaceBetween"
  | "stretch"; 
  readonly alignItems?: 
    "baseline"
  | "center"
  | "flexEnd"
  | "flexStart"
  | "stretch"; 
  readonly alignSelf?: 
    "auto"
  | "baseline"
  | "center"
  | "flexEnd"
  | "flexStart"
  | "stretch"; 
  readonly aspectRatio?: number; 
  readonly bg?: ReactNative_Color_t; 
  readonly borderBottomColor?: ReactNative_Color_t; 
  readonly borderBottomEndRadius?: number; 
  readonly borderBottomLeftRadius?: number; 
  readonly borderBottomRightRadius?: number; 
  readonly borderBottomStartRadius?: number; 
  readonly borderBottomWidth?: number; 
  readonly borderColor?: ReactNative_Color_t; 
  readonly borderEndColor?: ReactNative_Color_t; 
  readonly borderEndWidth?: number; 
  readonly borderLeftColor?: ReactNative_Color_t; 
  readonly borderLeftWidth?: number; 
  readonly borderRadius?: number; 
  readonly borderRightColor?: ReactNative_Color_t; 
  readonly borderRightWidth?: number; 
  readonly borderStartColor?: ReactNative_Color_t; 
  readonly borderStartWidth?: number; 
  readonly borderTopColor?: ReactNative_Color_t; 
  readonly borderTopEndRadius?: number; 
  readonly borderTopLeftRadius?: number; 
  readonly borderTopRightRadius?: number; 
  readonly borderTopStartRadius?: number; 
  readonly borderTopWidth?: number; 
  readonly borderWidth?: number; 
  readonly bottom?: ReactNative_Style_size; 
  readonly children?: React.ReactNode; 
  readonly direction?: 
    "inherit_"
  | "ltr"
  | "rtl"; 
  readonly end_?: ReactNative_Style_size; 
  readonly flex?: number; 
  readonly flexBasis?: ReactNative_Style_margin; 
  readonly flexDirection?: 
    "column"
  | "columnReverse"
  | "row"
  | "rowReverse"; 
  readonly flexGrow?: number; 
  readonly flexShrink?: number; 
  readonly flexWrap?: 
    "nowrap"
  | "wrap"; 
  readonly h?: ReactNative_Style_size; 
  readonly justifyContent?: 
    "center"
  | "flexEnd"
  | "flexStart"
  | "spaceAround"
  | "spaceBetween"
  | "spaceEvenly"; 
  readonly left?: ReactNative_Style_size; 
  readonly m?: ReactNative_Style_margin; 
  readonly maxH?: ReactNative_Style_size; 
  readonly maxW?: ReactNative_Style_size; 
  readonly mb?: ReactNative_Style_margin; 
  readonly me?: ReactNative_Style_margin; 
  readonly mh?: ReactNative_Style_margin; 
  readonly minH?: ReactNative_Style_size; 
  readonly minW?: ReactNative_Style_size; 
  readonly ml?: ReactNative_Style_margin; 
  readonly mr?: ReactNative_Style_margin; 
  readonly ms?: ReactNative_Style_margin; 
  readonly mt?: ReactNative_Style_margin; 
  readonly mv?: ReactNative_Style_margin; 
  readonly opacity?: number; 
  readonly overflow?: 
    "hidden"
  | "scroll"
  | "visible"; 
  readonly p?: ReactNative_Style_size; 
  readonly pb?: ReactNative_Style_size; 
  readonly pe?: ReactNative_Style_size; 
  readonly ph?: ReactNative_Style_size; 
  readonly pl?: ReactNative_Style_size; 
  readonly position?: 
    "absolute"
  | "relative"; 
  readonly pr?: ReactNative_Style_size; 
  readonly ps?: ReactNative_Style_size; 
  readonly pt?: ReactNative_Style_size; 
  readonly pv?: ReactNative_Style_size; 
  readonly right?: ReactNative_Style_size; 
  readonly start?: ReactNative_Style_size; 
  readonly style?: ReactNative_Style_t; 
  readonly top?: ReactNative_Style_size; 
  readonly w?: ReactNative_Style_size; 
  readonly zIndex?: number
};

export const $$default: React.ComponentType<{
  readonly alignContent?: 
    "center"
  | "flexEnd"
  | "flexStart"
  | "spaceAround"
  | "spaceBetween"
  | "stretch"; 
  readonly alignItems?: 
    "baseline"
  | "center"
  | "flexEnd"
  | "flexStart"
  | "stretch"; 
  readonly alignSelf?: 
    "auto"
  | "baseline"
  | "center"
  | "flexEnd"
  | "flexStart"
  | "stretch"; 
  readonly aspectRatio?: number; 
  readonly bg?: ReactNative_Color_t; 
  readonly borderBottomColor?: ReactNative_Color_t; 
  readonly borderBottomEndRadius?: number; 
  readonly borderBottomLeftRadius?: number; 
  readonly borderBottomRightRadius?: number; 
  readonly borderBottomStartRadius?: number; 
  readonly borderBottomWidth?: number; 
  readonly borderColor?: ReactNative_Color_t; 
  readonly borderEndColor?: ReactNative_Color_t; 
  readonly borderEndWidth?: number; 
  readonly borderLeftColor?: ReactNative_Color_t; 
  readonly borderLeftWidth?: number; 
  readonly borderRadius?: number; 
  readonly borderRightColor?: ReactNative_Color_t; 
  readonly borderRightWidth?: number; 
  readonly borderStartColor?: ReactNative_Color_t; 
  readonly borderStartWidth?: number; 
  readonly borderTopColor?: ReactNative_Color_t; 
  readonly borderTopEndRadius?: number; 
  readonly borderTopLeftRadius?: number; 
  readonly borderTopRightRadius?: number; 
  readonly borderTopStartRadius?: number; 
  readonly borderTopWidth?: number; 
  readonly borderWidth?: number; 
  readonly bottom?: ReactNative_Style_size; 
  readonly children?: React.ReactNode; 
  readonly direction?: 
    "inherit_"
  | "ltr"
  | "rtl"; 
  readonly end_?: ReactNative_Style_size; 
  readonly flex?: number; 
  readonly flexBasis?: ReactNative_Style_margin; 
  readonly flexDirection?: 
    "column"
  | "columnReverse"
  | "row"
  | "rowReverse"; 
  readonly flexGrow?: number; 
  readonly flexShrink?: number; 
  readonly flexWrap?: 
    "nowrap"
  | "wrap"; 
  readonly h?: ReactNative_Style_size; 
  readonly justifyContent?: 
    "center"
  | "flexEnd"
  | "flexStart"
  | "spaceAround"
  | "spaceBetween"
  | "spaceEvenly"; 
  readonly left?: ReactNative_Style_size; 
  readonly m?: ReactNative_Style_margin; 
  readonly maxH?: ReactNative_Style_size; 
  readonly maxW?: ReactNative_Style_size; 
  readonly mb?: ReactNative_Style_margin; 
  readonly me?: ReactNative_Style_margin; 
  readonly mh?: ReactNative_Style_margin; 
  readonly minH?: ReactNative_Style_size; 
  readonly minW?: ReactNative_Style_size; 
  readonly ml?: ReactNative_Style_margin; 
  readonly mr?: ReactNative_Style_margin; 
  readonly ms?: ReactNative_Style_margin; 
  readonly mt?: ReactNative_Style_margin; 
  readonly mv?: ReactNative_Style_margin; 
  readonly opacity?: number; 
  readonly overflow?: 
    "hidden"
  | "scroll"
  | "visible"; 
  readonly p?: ReactNative_Style_size; 
  readonly pb?: ReactNative_Style_size; 
  readonly pe?: ReactNative_Style_size; 
  readonly ph?: ReactNative_Style_size; 
  readonly pl?: ReactNative_Style_size; 
  readonly position?: 
    "absolute"
  | "relative"; 
  readonly pr?: ReactNative_Style_size; 
  readonly ps?: ReactNative_Style_size; 
  readonly pt?: ReactNative_Style_size; 
  readonly pv?: ReactNative_Style_size; 
  readonly right?: ReactNative_Style_size; 
  readonly start?: ReactNative_Style_size; 
  readonly style?: ReactNative_Style_t; 
  readonly top?: ReactNative_Style_size; 
  readonly w?: ReactNative_Style_size; 
  readonly zIndex?: number
}> = function Box(Arg1: any) {
  const $props = {alignContent:(Arg1.alignContent == null ? undefined : $$toRE866454557[Arg1.alignContent]), alignItems:(Arg1.alignItems == null ? undefined : $$toRE719148934[Arg1.alignItems]), alignSelf:(Arg1.alignSelf == null ? undefined : $$toRE541798403[Arg1.alignSelf]), aspectRatio:Arg1.aspectRatio, bg:Arg1.bg, borderBottomColor:Arg1.borderBottomColor, borderBottomEndRadius:Arg1.borderBottomEndRadius, borderBottomLeftRadius:Arg1.borderBottomLeftRadius, borderBottomRightRadius:Arg1.borderBottomRightRadius, borderBottomStartRadius:Arg1.borderBottomStartRadius, borderBottomWidth:Arg1.borderBottomWidth, borderColor:Arg1.borderColor, borderEndColor:Arg1.borderEndColor, borderEndWidth:Arg1.borderEndWidth, borderLeftColor:Arg1.borderLeftColor, borderLeftWidth:Arg1.borderLeftWidth, borderRadius:Arg1.borderRadius, borderRightColor:Arg1.borderRightColor, borderRightWidth:Arg1.borderRightWidth, borderStartColor:Arg1.borderStartColor, borderStartWidth:Arg1.borderStartWidth, borderTopColor:Arg1.borderTopColor, borderTopEndRadius:Arg1.borderTopEndRadius, borderTopLeftRadius:Arg1.borderTopLeftRadius, borderTopRightRadius:Arg1.borderTopRightRadius, borderTopStartRadius:Arg1.borderTopStartRadius, borderTopWidth:Arg1.borderTopWidth, borderWidth:Arg1.borderWidth, bottom:Arg1.bottom, children:Arg1.children, direction:(Arg1.direction == null ? undefined : $$toRE199574244[Arg1.direction]), end_:Arg1.end_, flex:Arg1.flex, flexBasis:Arg1.flexBasis, flexDirection:(Arg1.flexDirection == null ? undefined : $$toRE36507703[Arg1.flexDirection]), flexGrow:Arg1.flexGrow, flexShrink:Arg1.flexShrink, flexWrap:(Arg1.flexWrap == null ? undefined : $$toRE556547177[Arg1.flexWrap]), h:Arg1.h, justifyContent:(Arg1.justifyContent == null ? undefined : $$toRE815689974[Arg1.justifyContent]), left:Arg1.left, m:Arg1.m, maxH:Arg1.maxH, maxW:Arg1.maxW, mb:Arg1.mb, me:Arg1.me, mh:Arg1.mh, minH:Arg1.minH, minW:Arg1.minW, ml:Arg1.ml, mr:Arg1.mr, ms:Arg1.ms, mt:Arg1.mt, mv:Arg1.mv, opacity:Arg1.opacity, overflow:(Arg1.overflow == null ? undefined : $$toRE826265118[Arg1.overflow]), p:Arg1.p, pb:Arg1.pb, pe:Arg1.pe, ph:Arg1.ph, pl:Arg1.pl, position:(Arg1.position == null ? undefined : $$toRE373987755[Arg1.position]), pr:Arg1.pr, ps:Arg1.ps, pt:Arg1.pt, pv:Arg1.pv, right:Arg1.right, start:Arg1.start, style:Arg1.style, top:Arg1.top, w:Arg1.w, zIndex:Arg1.zIndex};
  const result = React.createElement(BoxBS.default, $props);
  return result
};

export default $$default;
