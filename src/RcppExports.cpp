// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// MakeZ_C
double MakeZ_C(NumericVector pvals, int m);
RcppExport SEXP _TMTI_MakeZ_C(SEXP pvalsSEXP, SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type pvals(pvalsSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(MakeZ_C(pvals, m));
    return rcpp_result_gen;
END_RCPP
}
// MakeY_C
NumericVector MakeY_C(NumericVector pvals, int m);
RcppExport SEXP _TMTI_MakeY_C(SEXP pvalsSEXP, SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type pvals(pvalsSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(MakeY_C(pvals, m));
    return rcpp_result_gen;
END_RCPP
}
// MakeZ_C_nsmall
double MakeZ_C_nsmall(NumericVector pvals, int n, int m);
RcppExport SEXP _TMTI_MakeZ_C_nsmall(SEXP pvalsSEXP, SEXP nSEXP, SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type pvals(pvalsSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(MakeZ_C_nsmall(pvals, n, m));
    return rcpp_result_gen;
END_RCPP
}
// TestSet_C
double TestSet_C(Function LocalTest, std::vector<double> pSub, std::vector<double> pRest, double alpha, bool is_subset_sequence, bool EarlyStop, bool verbose);
RcppExport SEXP _TMTI_TestSet_C(SEXP LocalTestSEXP, SEXP pSubSEXP, SEXP pRestSEXP, SEXP alphaSEXP, SEXP is_subset_sequenceSEXP, SEXP EarlyStopSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Function >::type LocalTest(LocalTestSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type pSub(pSubSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type pRest(pRestSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< bool >::type is_subset_sequence(is_subset_sequenceSEXP);
    Rcpp::traits::input_parameter< bool >::type EarlyStop(EarlyStopSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(TestSet_C(LocalTest, pSub, pRest, alpha, is_subset_sequence, EarlyStop, verbose));
    return rcpp_result_gen;
END_RCPP
}
// FullCTP_C
std::vector<double> FullCTP_C(Function LocalTest, Function f, std::deque<double> pvals, double threshold);
RcppExport SEXP _TMTI_FullCTP_C(SEXP LocalTestSEXP, SEXP fSEXP, SEXP pvalsSEXP, SEXP thresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Function >::type LocalTest(LocalTestSEXP);
    Rcpp::traits::input_parameter< Function >::type f(fSEXP);
    Rcpp::traits::input_parameter< std::deque<double> >::type pvals(pvalsSEXP);
    Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP);
    rcpp_result_gen = Rcpp::wrap(FullCTP_C(LocalTest, f, pvals, threshold));
    return rcpp_result_gen;
END_RCPP
}
// TopDown_C
int TopDown_C(Function LocalTest, std::deque<double> pvals, double alpha);
RcppExport SEXP _TMTI_TopDown_C(SEXP LocalTestSEXP, SEXP pvalsSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Function >::type LocalTest(LocalTestSEXP);
    Rcpp::traits::input_parameter< std::deque<double> >::type pvals(pvalsSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(TopDown_C(LocalTest, pvals, alpha));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_TMTI_MakeZ_C", (DL_FUNC) &_TMTI_MakeZ_C, 2},
    {"_TMTI_MakeY_C", (DL_FUNC) &_TMTI_MakeY_C, 2},
    {"_TMTI_MakeZ_C_nsmall", (DL_FUNC) &_TMTI_MakeZ_C_nsmall, 3},
    {"_TMTI_TestSet_C", (DL_FUNC) &_TMTI_TestSet_C, 7},
    {"_TMTI_FullCTP_C", (DL_FUNC) &_TMTI_FullCTP_C, 4},
    {"_TMTI_TopDown_C", (DL_FUNC) &_TMTI_TopDown_C, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_TMTI(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
