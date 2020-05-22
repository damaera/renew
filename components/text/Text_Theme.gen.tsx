/* TypeScript file generated from Text_Theme.re by genType. */
/* eslint-disable import/first */


// tslint:disable-next-line:no-var-requires
const Text_ThemeBS = require('./Text_Theme.bs');

// tslint:disable-next-line:interface-over-type-literal
export type sizeT = {
  readonly xs: number; 
  readonly sm: number; 
  readonly md: number; 
  readonly lg: number; 
  readonly xl: number; 
  readonly _2xl: number; 
  readonly _3xl: number; 
  readonly _4xl: number; 
  readonly _6xl: number; 
  readonly _5xl: number
};

// tslint:disable-next-line:interface-over-type-literal
export type t = { readonly fontSize: sizeT };

export const defaultTheme: t = Text_ThemeBS.defaultTheme;
