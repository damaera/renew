/* TypeScript file generated from Theme.re by genType. */
/* eslint-disable import/first */


import * as React from 'react';

// tslint:disable-next-line:no-var-requires
const ThemeBS = require('./Theme.bs');

import {t as Button_Theme_t} from '../../components/button/Button_Theme.gen';

import {t as Text_Theme_t} from '../../components/text/Text_Theme.gen';

import {t as Theme_Colors_t} from './Theme_Colors.gen';

import {t as Theme_Space_t} from './Theme_Space.gen';

// tslint:disable-next-line:interface-over-type-literal
export type t = {
  readonly colors: Theme_Colors_t; 
  readonly button: Button_Theme_t; 
  readonly text: Text_Theme_t; 
  readonly space: Theme_Space_t
};

export const defaultTheme: t = ThemeBS.defaultTheme;

// tslint:disable-next-line:interface-over-type-literal
export type Props = { readonly children: React.ReactNode; readonly value: t };

export const $$default: React.ComponentType<{ readonly children: React.ReactNode; readonly value: t }> = ThemeBS.default;

export default $$default;
