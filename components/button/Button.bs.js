// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE
'use strict';

var Box = require("../box/Box.bs.js");
var $$Text = require("../text/Text.bs.js");
var Curry = require("bs-platform/lib/js/curry.js");
var Theme = require("../theme/Theme.bs.js");
var React = require("react");
var Spacer = require("../spacer/Spacer.bs.js");
var Hoverable = require("../hoverable/Hoverable.bs.js");
var Caml_option = require("bs-platform/lib/js/caml_option.js");
var ReactNative = require("react-native");

function Button(Props) {
  var text = Props.text;
  var sizeOpt = Props.size;
  var variantOpt = Props.variant;
  var colorOpt = Props.color;
  var prefixElement = Props.prefixElement;
  var suffixElement = Props.suffixElement;
  var styleButton = Props.styleButton;
  var styleText = Props.styleText;
  var children = Props.children;
  var size = sizeOpt !== undefined ? sizeOpt : /* md */24407;
  var variant = variantOpt !== undefined ? variantOpt : /* solid */12956715;
  var color = colorOpt !== undefined ? colorOpt : /* neutral */-349573817;
  var theme = Theme.useTheme(undefined);
  var match = React.useState((function () {
          return false;
        }));
  var setHover = match[1];
  var match$1 = size !== 24407 ? (
      size >= 26868 ? (
          size >= 26875 ? /* tuple */[
              theme.button.height.xs,
              theme.button.paddingHorizontal.xs
            ] : /* tuple */[
              theme.button.height.xl,
              theme.button.paddingHorizontal.xl
            ]
        ) : (
          size >= 25754 ? /* tuple */[
              theme.button.height.sm,
              theme.button.paddingHorizontal.sm
            ] : /* tuple */[
              theme.button.height.lg,
              theme.button.paddingHorizontal.lg
            ]
        )
    ) : /* tuple */[
      theme.button.height.md,
      theme.button.paddingHorizontal.md
    ];
  var color$1 = color >= 58474434 ? (
      color >= 512905955 ? (
          color >= 944645571 ? ({
                normal: theme.colors.success,
                light: theme.colors.successLight,
                lighter: theme.colors.successLighter,
                dark: theme.colors.successDark,
                darker: theme.colors.successDarker
              }) : ({
                normal: theme.colors.danger,
                light: theme.colors.dangerLight,
                lighter: theme.colors.dangerLighter,
                dark: theme.colors.dangerDark,
                darker: theme.colors.dangerDarker
              })
        ) : (
          color >= 164354652 ? ({
                normal: theme.colors.warning,
                light: theme.colors.warningLight,
                lighter: theme.colors.warningLighter,
                dark: theme.colors.warningDark,
                darker: theme.colors.warningDarker
              }) : ({
                normal: theme.colors.primary,
                light: theme.colors.primaryLight,
                lighter: theme.colors.primaryLighter,
                dark: theme.colors.primaryDark,
                darker: theme.colors.primaryDarker
              })
        )
    ) : (
      color !== -499495052 ? (
          color >= -349573817 ? ({
                normal: theme.colors.neutral600,
                light: theme.colors.neutral400,
                lighter: theme.colors.neutral200,
                dark: theme.colors.neutral700,
                darker: theme.colors.neutral900
              }) : ({
                normal: theme.colors.info,
                light: theme.colors.infoLight,
                lighter: theme.colors.infoLighter,
                dark: theme.colors.infoDark,
                darker: theme.colors.infoDarker
              })
        ) : ({
            normal: theme.colors.secondary,
            light: theme.colors.secondaryLight,
            lighter: theme.colors.secondaryLighter,
            dark: theme.colors.secondaryDark,
            darker: theme.colors.secondaryDarker
          })
    );
  var typeStyleText = variant >= 12956715 ? (
      variant >= 324570959 ? ({
            color: color$1.normal
          }) : ({
            color: theme.button.textColor.solid
          })
    ) : (
      variant >= -184774442 ? ({
            color: color$1.darker
          }) : ({
            color: color$1.dark
          })
    );
  var bg = variant !== -184774442 ? (
      variant !== 12956715 ? theme.colors.background : color$1.normal
    ) : color$1.lighter;
  var borderColor = variant >= 12956715 ? (
      variant >= 324570959 ? theme.colors.background : color$1.normal
    ) : (
      variant >= -184774442 ? color$1.lighter : color$1.dark
    );
  var resolvedStyle = [styleButton];
  var resolvedTextStyle = [
    {
      fontWeight: (function () {
            switch (theme.button.fontWeight) {
              case 812216871 :
                  return "normal";
              case -1055161979 :
                  return "bold";
              case 1055956338 :
                  return "100";
              case 1056006067 :
                  return "200";
              case 1056055796 :
                  return "300";
              case 1056105525 :
                  return "400";
              case 1056155254 :
                  return "500";
              case 1056204983 :
                  return "600";
              case 1056254712 :
                  return "700";
              case 1056304441 :
                  return "800";
              case 1056354170 :
                  return "900";
              
            }
          })(),
      textTransform: (function () {
            switch (theme.button.textTransform) {
              case -922086728 :
                  return "none";
              case -415330030 :
                  return "uppercase";
              case -425349839 :
                  return "lowercase";
              case -509867604 :
                  return "capitalize";
              
            }
          })()
    },
    Caml_option.some(typeStyleText),
    styleText
  ];
  var spacerSize = size !== 24407 ? (
      size >= 26868 ? (
          size >= 26875 ? theme.text.fontSize.xs / 2 : theme.text.fontSize.xl / 2
        ) : (
          size >= 25754 ? theme.text.fontSize.sm / 2 : theme.text.fontSize.lg / 2
        )
    ) : theme.text.fontSize.md / 2;
  var onHoverIn = function (param) {
    return Curry._1(setHover, (function (param) {
                  return true;
                }));
  };
  var onHoverOut = function (param) {
    return Curry._1(setHover, (function (param) {
                  return false;
                }));
  };
  return React.createElement(Hoverable.make, {
              children: React.createElement(Box.make, {
                    alignItems: /* center */98248149,
                    flexDirection: /* row */5693978,
                    ph: match$1[1],
                    h: match$1[0],
                    bg: bg,
                    opacity: match[0] ? 0.9 : 1,
                    borderWidth: theme.button.borderWidth,
                    borderRadius: theme.button.borderRadius,
                    borderColor: borderColor,
                    style: resolvedStyle,
                    children: null,
                    component: React.createElement(ReactNative.TouchableOpacity, {
                          activeOpacity: 0.7,
                          accessibilityRole: "button"
                        })
                  }, prefixElement !== undefined ? React.createElement(React.Fragment, undefined, React.createElement(ReactNative.View, {
                              children: Caml_option.valFromOption(prefixElement)
                            }), React.createElement(Spacer.make, {
                              x: spacerSize
                            })) : null, React.createElement(ReactNative.View, {
                        children: children !== undefined ? Caml_option.valFromOption(children) : React.createElement($$Text.make, {
                                value: text,
                                styleText: resolvedTextStyle,
                                size: size
                              })
                      }), suffixElement !== undefined ? React.createElement(React.Fragment, undefined, React.createElement(Spacer.make, {
                              x: spacerSize
                            }), React.createElement(ReactNative.View, {
                              children: Caml_option.valFromOption(suffixElement)
                            })) : null),
              onHoverIn: onHoverIn,
              onHoverOut: onHoverOut
            });
}

var UIText;

var make = Button;

var $$default = Button;

exports.UIText = UIText;
exports.make = make;
exports.$$default = $$default;
exports.default = $$default;
exports.__esModule = true;
/* Box Not a pure module */
