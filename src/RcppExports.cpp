// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// doColorRamp
StringVector doColorRamp(NumericMatrix colors, NumericVector x, bool alpha, std::string naColor);
RcppExport SEXP scales_doColorRamp(SEXP colorsSEXP, SEXP xSEXP, SEXP alphaSEXP, SEXP naColorSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type colors(colorsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< std::string >::type naColor(naColorSEXP);
    __result = Rcpp::wrap(doColorRamp(colors, x, alpha, naColor));
    return __result;
END_RCPP
}
// rgbToLab
NumericVector rgbToLab(NumericVector rgb);
RcppExport SEXP scales_rgbToLab(SEXP rgbSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type rgb(rgbSEXP);
    __result = Rcpp::wrap(rgbToLab(rgb));
    return __result;
END_RCPP
}
// rgbToXyz
NumericVector rgbToXyz(NumericVector rgb);
RcppExport SEXP scales_rgbToXyz(SEXP rgbSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type rgb(rgbSEXP);
    __result = Rcpp::wrap(rgbToXyz(rgb));
    return __result;
END_RCPP
}
