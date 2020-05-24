/* TypeScript file generated from Hoverable.re by genType. */
/* eslint-disable import/first */


import * as React from 'react';

// tslint:disable-next-line:no-var-requires
const HoverableBS = require('./Hoverable.bs');

// tslint:disable-next-line:interface-over-type-literal
export type Props = {
  readonly children: React.ReactNode; 
  readonly onHoverIn: () => void; 
  readonly onHoverOut: () => void
};

export const $$default: React.ComponentType<{
  readonly children: React.ReactNode; 
  readonly onHoverIn: () => void; 
  readonly onHoverOut: () => void
}> = HoverableBS.default;

export default $$default;
