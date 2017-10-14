// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// stepFun
arma::mat stepFun(arma::mat x, int nSteps, int smoothSteps);
RcppExport SEXP _ANN2_stepFun(SEXP xSEXP, SEXP nStepsSEXP, SEXP smoothStepsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type nSteps(nStepsSEXP);
    Rcpp::traits::input_parameter< int >::type smoothSteps(smoothStepsSEXP);
    rcpp_result_gen = Rcpp::wrap(stepFun(x, nSteps, smoothSteps));
    return rcpp_result_gen;
END_RCPP
}
// stepGradFun
arma::mat stepGradFun(arma::mat x, int nSteps, int smoothSteps);
RcppExport SEXP _ANN2_stepGradFun(SEXP xSEXP, SEXP nStepsSEXP, SEXP smoothStepsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type nSteps(nStepsSEXP);
    Rcpp::traits::input_parameter< int >::type smoothSteps(smoothStepsSEXP);
    rcpp_result_gen = Rcpp::wrap(stepGradFun(x, nSteps, smoothSteps));
    return rcpp_result_gen;
END_RCPP
}
// lossFunction
arma::vec lossFunction(arma::mat y, arma::mat y_fit, Rcpp::String lossType, double dHuber);
RcppExport SEXP _ANN2_lossFunction(SEXP ySEXP, SEXP y_fitSEXP, SEXP lossTypeSEXP, SEXP dHuberSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type y_fit(y_fitSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type lossType(lossTypeSEXP);
    Rcpp::traits::input_parameter< double >::type dHuber(dHuberSEXP);
    rcpp_result_gen = Rcpp::wrap(lossFunction(y, y_fit, lossType, dHuber));
    return rcpp_result_gen;
END_RCPP
}
// predictC
arma::mat predictC(Rcpp::List NN, arma::mat newdata, bool standardize);
RcppExport SEXP _ANN2_predictC(SEXP NNSEXP, SEXP newdataSEXP, SEXP standardizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type NN(NNSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type newdata(newdataSEXP);
    Rcpp::traits::input_parameter< bool >::type standardize(standardizeSEXP);
    rcpp_result_gen = Rcpp::wrap(predictC(NN, newdata, standardize));
    return rcpp_result_gen;
END_RCPP
}
// stochGD
Rcpp::List stochGD(Rcpp::List dataList, int nObs, bool standardize, arma::vec y_center, arma::vec y_scale, Rcpp::CharacterVector y_names, Rcpp::CharacterVector activTypes, Rcpp::String lossType, double dHuber, int nSteps, int smoothSteps, int batchSize, int maxEpochs, double learnRate, double momentum, double L1, double L2, bool earlyStop, int earlyStopEpochs, double earlyStopTol, bool lrSched, arma::vec lrSchedEpochs, arma::vec lrSchedLearnRates, Rcpp::List fpOut, Rcpp::List bpOut, Rcpp::List upOut, bool validLoss, bool verbose, bool regression, bool plotExample);
RcppExport SEXP _ANN2_stochGD(SEXP dataListSEXP, SEXP nObsSEXP, SEXP standardizeSEXP, SEXP y_centerSEXP, SEXP y_scaleSEXP, SEXP y_namesSEXP, SEXP activTypesSEXP, SEXP lossTypeSEXP, SEXP dHuberSEXP, SEXP nStepsSEXP, SEXP smoothStepsSEXP, SEXP batchSizeSEXP, SEXP maxEpochsSEXP, SEXP learnRateSEXP, SEXP momentumSEXP, SEXP L1SEXP, SEXP L2SEXP, SEXP earlyStopSEXP, SEXP earlyStopEpochsSEXP, SEXP earlyStopTolSEXP, SEXP lrSchedSEXP, SEXP lrSchedEpochsSEXP, SEXP lrSchedLearnRatesSEXP, SEXP fpOutSEXP, SEXP bpOutSEXP, SEXP upOutSEXP, SEXP validLossSEXP, SEXP verboseSEXP, SEXP regressionSEXP, SEXP plotExampleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type dataList(dataListSEXP);
    Rcpp::traits::input_parameter< int >::type nObs(nObsSEXP);
    Rcpp::traits::input_parameter< bool >::type standardize(standardizeSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y_center(y_centerSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y_scale(y_scaleSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type y_names(y_namesSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type activTypes(activTypesSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type lossType(lossTypeSEXP);
    Rcpp::traits::input_parameter< double >::type dHuber(dHuberSEXP);
    Rcpp::traits::input_parameter< int >::type nSteps(nStepsSEXP);
    Rcpp::traits::input_parameter< int >::type smoothSteps(smoothStepsSEXP);
    Rcpp::traits::input_parameter< int >::type batchSize(batchSizeSEXP);
    Rcpp::traits::input_parameter< int >::type maxEpochs(maxEpochsSEXP);
    Rcpp::traits::input_parameter< double >::type learnRate(learnRateSEXP);
    Rcpp::traits::input_parameter< double >::type momentum(momentumSEXP);
    Rcpp::traits::input_parameter< double >::type L1(L1SEXP);
    Rcpp::traits::input_parameter< double >::type L2(L2SEXP);
    Rcpp::traits::input_parameter< bool >::type earlyStop(earlyStopSEXP);
    Rcpp::traits::input_parameter< int >::type earlyStopEpochs(earlyStopEpochsSEXP);
    Rcpp::traits::input_parameter< double >::type earlyStopTol(earlyStopTolSEXP);
    Rcpp::traits::input_parameter< bool >::type lrSched(lrSchedSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type lrSchedEpochs(lrSchedEpochsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type lrSchedLearnRates(lrSchedLearnRatesSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type fpOut(fpOutSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type bpOut(bpOutSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type upOut(upOutSEXP);
    Rcpp::traits::input_parameter< bool >::type validLoss(validLossSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type regression(regressionSEXP);
    Rcpp::traits::input_parameter< bool >::type plotExample(plotExampleSEXP);
    rcpp_result_gen = Rcpp::wrap(stochGD(dataList, nObs, standardize, y_center, y_scale, y_names, activTypes, lossType, dHuber, nSteps, smoothSteps, batchSize, maxEpochs, learnRate, momentum, L1, L2, earlyStop, earlyStopEpochs, earlyStopTol, lrSched, lrSchedEpochs, lrSchedLearnRates, fpOut, bpOut, upOut, validLoss, verbose, regression, plotExample));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ANN2_stepFun", (DL_FUNC) &_ANN2_stepFun, 3},
    {"_ANN2_stepGradFun", (DL_FUNC) &_ANN2_stepGradFun, 3},
    {"_ANN2_lossFunction", (DL_FUNC) &_ANN2_lossFunction, 4},
    {"_ANN2_predictC", (DL_FUNC) &_ANN2_predictC, 3},
    {"_ANN2_stochGD", (DL_FUNC) &_ANN2_stochGD, 30},
    {NULL, NULL, 0}
};

RcppExport void R_init_ANN2(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
