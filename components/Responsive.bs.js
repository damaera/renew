// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE
'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var React = require("react");
var ReactNative = require("react-native");

function useWindowWidth(param) {
  var match = React.useState((function () {
          return 0;
        }));
  var setWindowWidth = match[1];
  var windowWidth = match[0];
  React.useEffect((function () {
          var handler = function (v) {
            if (v.window.width !== windowWidth) {
              return Curry._1(setWindowWidth, (function (param) {
                            return v.window.width;
                          }));
            }
            
          };
          ReactNative.Dimensions.addEventListener("change", handler);
          return (function (param) {
                    ReactNative.Dimensions.removeEventListener("change", handler);
                    
                  });
        }), [windowWidth]);
  return windowWidth;
}

function makeSize(xs, sm, md, lg, xl, param) {
  return {
          xs: xs,
          sm: sm,
          md: md,
          lg: lg,
          xl: xl
        };
}

exports.useWindowWidth = useWindowWidth;
exports.makeSize = makeSize;
/* react Not a pure module */
