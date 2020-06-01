/* TypeScript file generated from Input_Theme.re by genType. */
/* eslint-disable import/first */


const $$toJS45343517: { [key: string]: any } = {"-922086728": "none", "-415330030": "uppercase", "-509867604": "capitalize", "-425349839": "lowercase"};

// tslint:disable-next-line:no-var-requires
const Input_ThemeBS = require('./Input_Theme.bs');

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
  readonly textColor: string; 
  readonly height: number; 
  readonly paddingHorizontal: number; 
  readonly textTransform: textTransformT
};

export const defaultTheme: t = {borderRadius:Input_ThemeBS.defaultTheme.borderRadius, borderWidth:Input_ThemeBS.defaultTheme.borderWidth, textColor:Input_ThemeBS.defaultTheme.textColor, height:Input_ThemeBS.defaultTheme.height, paddingHorizontal:Input_ThemeBS.defaultTheme.paddingHorizontal, textTransform:$$toJS45343517[Input_ThemeBS.defaultTheme.textTransform]};
