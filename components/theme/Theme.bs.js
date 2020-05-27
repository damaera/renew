// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE
'use strict';

var React = require("react");
var Text_Theme = require("../text/Text_Theme.bs.js");
var Theme_Space = require("./Theme_Space.bs.js");
var Button_Theme = require("../button/Button_Theme.bs.js");
var Theme_Colors = require("./Theme_Colors.bs.js");
var Theme_Breakpoints = require("./Theme_Breakpoints.bs.js");

var defaultTheme = {
  breakpoints: Theme_Breakpoints.defaultTheme,
  colors: Theme_Colors.light,
  button: Button_Theme.defaultTheme,
  text: Text_Theme.defaultTheme,
  space: Theme_Space.defaultTheme
};

var themeContext = React.createContext(defaultTheme);

function makeProps(valueOpt, children, param) {
  var value = valueOpt !== undefined ? valueOpt : defaultTheme;
  return {
          value: value,
          children: children
        };
}

var make = themeContext.Provider;

function useTheme(param) {
  return React.useContext(themeContext);
}

var $$default = make;

exports.defaultTheme = defaultTheme;
exports.themeContext = themeContext;
exports.makeProps = makeProps;
exports.make = make;
exports.useTheme = useTheme;
exports.$$default = $$default;
exports.default = $$default;
exports.__esModule = true;
/* themeContext Not a pure module */
