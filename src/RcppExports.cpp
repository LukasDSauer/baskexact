// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// get_res_fin
NumericVector get_res_fin(const NumericVector& prob, const NumericVector& res_int, const double& lambda);
RcppExport SEXP _baskexact_get_res_fin(SEXP probSEXP, SEXP res_intSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type prob(probSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type res_int(res_intSEXP);
    Rcpp::traits::input_parameter< const double& >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(get_res_fin(prob, res_int, lambda));
    return rcpp_result_gen;
END_RCPP
}
// get_n_vec
NumericVector get_n_vec(const int& n, const int& n1, const NumericVector& res_int);
RcppExport SEXP _baskexact_get_n_vec(SEXP nSEXP, SEXP n1SEXP, SEXP res_intSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int& >::type n(nSEXP);
    Rcpp::traits::input_parameter< const int& >::type n1(n1SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type res_int(res_intSEXP);
    rcpp_result_gen = Rcpp::wrap(get_n_vec(n, n1, res_int));
    return rcpp_result_gen;
END_RCPP
}
// get_r_temp
NumericVector get_r_temp(const int& n1, const NumericVector& r, const NumericVector& res_int);
RcppExport SEXP _baskexact_get_r_temp(SEXP n1SEXP, SEXP rSEXP, SEXP res_intSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int& >::type n1(n1SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type r(rSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type res_int(res_intSEXP);
    rcpp_result_gen = Rcpp::wrap(get_r_temp(n1, r, res_int));
    return rcpp_result_gen;
END_RCPP
}
// weight_beta
arma::mat weight_beta(const int& k, const arma::vec& weights, const arma::mat& shape);
RcppExport SEXP _baskexact_weight_beta(SEXP kSEXP, SEXP weightsSEXP, SEXP shapeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const int& >::type k(kSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type shape(shapeSEXP);
    rcpp_result_gen = Rcpp::wrap(weight_beta(k, weights, shape));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_baskexact_get_res_fin", (DL_FUNC) &_baskexact_get_res_fin, 3},
    {"_baskexact_get_n_vec", (DL_FUNC) &_baskexact_get_n_vec, 3},
    {"_baskexact_get_r_temp", (DL_FUNC) &_baskexact_get_r_temp, 3},
    {"_baskexact_weight_beta", (DL_FUNC) &_baskexact_weight_beta, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_baskexact(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
