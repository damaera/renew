/* TypeScript file generated from Button_Theme.re by genType. */
/* eslint-disable import/first */


const $$toJS45343517: { [key: string]: any } = {"-922086728": "none", "-415330030": "uppercase", "-509867604": "capitalize", "-425349839": "lowercase"};

const $$toJS641509149: { [key: string]: any } = {"812216871": "normal", "-1055161979": "bold", "1055956338": "_100", "1056006067": "_200", "1056055796": "_300", "1056105525": "_400", "1056155254": "_500", "1056204983": "_600", "1056254712": "_700", "1056304441": "_800", "1056354170": "_900"};

// tslint:disable-next-line:no-var-requires
const Button_ThemeBS = require('./Button_Theme.bs');

// tslint:disable-next-line:interface-over-type-literal
export type sizeT = {
  readonly xs: number; 
  readonly sm: number; 
  readonly md: number; 
  readonly lg: number; 
  readonly xl: number
};

// tslint:disable-next-line:interface-over-type-literal
export type variantT = {
  readonly solid: string; 
  readonly light: string; 
  readonly outline: string; 
  readonly ghost: string
};

// tslint:disable-next-line:interface-over-type-literal
export type fontWeightT = 
    "normal"
  | "bold"
  | "_100"
  | "_200"
  | "_300"
  | "_400"
  | "_500"
  | "_600"
  | "_700"
  | "_800"
  | "_900";

// tslint:disable-next-line:interface-over-type-literal
export type textTransformT = 
    "none"
  | "uppercase"
  | "capitalize"
  | "lowercase";

// tslint:disable-next-line:interface-over-type-literal
export type t = {
  readonly borderRadius: number; 
  readonly borderWidth: number; 
  readonly textColor: variantT; 
  readonly fontWeight: fontWeightT; 
  readonly height: sizeT; 
  readonly paddingHorizontal: sizeT; 
  readonly textTransform: textTransformT
};

export const defaultTheme: t = {borderRadius:Button_ThemeBS.defaultTheme.borderRadius, borderWidth:Button_ThemeBS.defaultTheme.borderWidth, textColor:Button_ThemeBS.defaultTheme.textColor, fontWeight:$$toJS641509149[Button_ThemeBS.defaultTheme.fontWeight], height:Button_ThemeBS.defaultTheme.height, paddingHorizontal:Button_ThemeBS.defaultTheme.paddingHorizontal, textTransform:$$toJS45343517[Button_ThemeBS.defaultTheme.textTransform]};
