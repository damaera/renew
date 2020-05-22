/* TypeScript file generated from Button_Theme.re by genType. */
/* eslint-disable import/first */


// tslint:disable-next-line:no-var-requires
const Button_ThemeBS = require('./Button_Theme.bs');

// tslint:disable-next-line:interface-over-type-literal
export type sizeT = {
  readonly small: number; 
  readonly normal: number; 
  readonly big: number
};

// tslint:disable-next-line:interface-over-type-literal
export type variantT = {
  readonly solid: string; 
  readonly outline: string; 
  readonly ghost: string
};

// tslint:disable-next-line:interface-over-type-literal
export type t = {
  readonly borderRadius: number; 
  readonly textColor: variantT; 
  readonly paddingVertical: sizeT; 
  readonly paddingHorizontal: sizeT
};

export const defaultTheme: t = Button_ThemeBS.defaultTheme;
