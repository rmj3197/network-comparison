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
// add_element_kahan
void add_element_kahan(double& sum, double element, double& compensation);
RcppExport SEXP _netdist_add_element_kahan(SEXP sumSEXP, SEXP elementSEXP, SEXP compensationSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double& >::type sum(sumSEXP);
    Rcpp::traits::input_parameter< double >::type element(elementSEXP);
    Rcpp::traits::input_parameter< double& >::type compensation(compensationSEXP);
    add_element_kahan(sum, element, compensation);
    return R_NilValue;
END_RCPP
}
// emd_fast_no_smoothing
double emd_fast_no_smoothing(NumericVector locations1, NumericVector values1, NumericVector locations2, NumericVector values2);
RcppExport SEXP _netdist_emd_fast_no_smoothing(SEXP locations1SEXP, SEXP values1SEXP, SEXP locations2SEXP, SEXP values2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type locations1(locations1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type values1(values1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type locations2(locations2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type values2(values2SEXP);
    rcpp_result_gen = Rcpp::wrap(emd_fast_no_smoothing(locations1, values1, locations2, values2));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_netdist_counts_from_observations", (DL_FUNC) &_netdist_counts_from_observations, 1},
    {"_netdist_add_element_kahan", (DL_FUNC) &_netdist_add_element_kahan, 3},
    {"_netdist_emd_fast_no_smoothing", (DL_FUNC) &_netdist_emd_fast_no_smoothing, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_netdist(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
