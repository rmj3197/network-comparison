// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// counts_from_observations
NumericMatrix counts_from_observations(NumericMatrix features);
RcppExport SEXP _netdist_counts_from_observations(SEXP featuresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type features(featuresSEXP);
    rcpp_result_gen = Rcpp::wrap(counts_from_observations(features));
    return rcpp_result_gen;
END_RCPP
}
// NetEmdConstant
double NetEmdConstant(NumericVector loc1, NumericVector val1, NumericVector loc2, NumericVector val2);
RcppExport SEXP _netdist_NetEmdConstant(SEXP loc1SEXP, SEXP val1SEXP, SEXP loc2SEXP, SEXP val2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type loc1(loc1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type val1(val1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type loc2(loc2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type val2(val2SEXP);
    rcpp_result_gen = Rcpp::wrap(NetEmdConstant(loc1, val1, loc2, val2));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_netdist_counts_from_observations", (DL_FUNC) &_netdist_counts_from_observations, 1},
    {"_netdist_NetEmdConstant", (DL_FUNC) &_netdist_NetEmdConstant, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_netdist(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
