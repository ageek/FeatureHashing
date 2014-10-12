// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// pair_sort
void pair_sort(IntegerVector i, NumericVector x);
RcppExport SEXP FeatureHashing_pair_sort(SEXP iSEXP, SEXP xSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< IntegerVector >::type i(iSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP );
        pair_sort(i, x);
    }
    return R_NilValue;
END_RCPP
}
// merge
int merge(IntegerVector i, NumericVector x);
RcppExport SEXP FeatureHashing_merge(SEXP iSEXP, SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< IntegerVector >::type i(iSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP );
        int __result = merge(i, x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// todgCMatrix
SEXP todgCMatrix(S4 m);
RcppExport SEXP FeatureHashing_todgCMatrix(SEXP mSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< S4 >::type m(mSEXP );
        SEXP __result = todgCMatrix(m);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// hash_without_intercept_single
IntegerVector hash_without_intercept_single(CharacterVector src);
RcppExport SEXP FeatureHashing_hash_without_intercept_single(SEXP srcSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type src(srcSEXP );
        IntegerVector __result = hash_without_intercept_single(src);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// hash_without_intercept
IntegerVector hash_without_intercept(CharacterVector src);
RcppExport SEXP FeatureHashing_hash_without_intercept(SEXP srcSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type src(srcSEXP );
        IntegerVector __result = hash_without_intercept(src);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// rehash_inplace
void rehash_inplace(S4 m, IntegerVector Rmapping, int hash_size);
RcppExport SEXP FeatureHashing_rehash_inplace(SEXP mSEXP, SEXP RmappingSEXP, SEXP hash_sizeSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< S4 >::type m(mSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type Rmapping(RmappingSEXP );
        Rcpp::traits::input_parameter< int >::type hash_size(hash_sizeSEXP );
        rehash_inplace(m, Rmapping, hash_size);
    }
    return R_NilValue;
END_RCPP
}
// Xv
NumericVector Xv(S4 m, NumericVector v, NumericVector retval);
RcppExport SEXP FeatureHashing_Xv(SEXP mSEXP, SEXP vSEXP, SEXP retvalSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< S4 >::type m(mSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type retval(retvalSEXP );
        NumericVector __result = Xv(m, v, retval);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// vX
NumericVector vX(NumericVector v, S4 m, NumericVector retval);
RcppExport SEXP FeatureHashing_vX(SEXP vSEXP, SEXP mSEXP, SEXP retvalSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP );
        Rcpp::traits::input_parameter< S4 >::type m(mSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type retval(retvalSEXP );
        NumericVector __result = vX(v, m, retval);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// dgemv
SEXP dgemv(NumericMatrix A, NumericVector y, NumericVector retval, double alpha = 1.0, double beta = 0.0, bool is_A_transpose = false);
RcppExport SEXP FeatureHashing_dgemv(SEXP ASEXP, SEXP ySEXP, SEXP retvalSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP is_A_transposeSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP );
        Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP );
        Rcpp::traits::input_parameter< NumericVector >::type retval(retvalSEXP );
        Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP );
        Rcpp::traits::input_parameter< double >::type beta(betaSEXP );
        Rcpp::traits::input_parameter< bool >::type is_A_transpose(is_A_transposeSEXP );
        SEXP __result = dgemv(A, y, retval, alpha, beta, is_A_transpose);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// dgemm
SEXP dgemm(NumericMatrix A, NumericMatrix B, NumericMatrix C, double alpha = 1.0, double beta = 0.0, bool is_A_transpose = false, bool is_B_transpose = false);
RcppExport SEXP FeatureHashing_dgemm(SEXP ASEXP, SEXP BSEXP, SEXP CSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP is_A_transposeSEXP, SEXP is_B_transposeSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP );
        Rcpp::traits::input_parameter< NumericMatrix >::type B(BSEXP );
        Rcpp::traits::input_parameter< NumericMatrix >::type C(CSEXP );
        Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP );
        Rcpp::traits::input_parameter< double >::type beta(betaSEXP );
        Rcpp::traits::input_parameter< bool >::type is_A_transpose(is_A_transposeSEXP );
        Rcpp::traits::input_parameter< bool >::type is_B_transpose(is_B_transposeSEXP );
        SEXP __result = dgemm(A, B, C, alpha, beta, is_A_transpose, is_B_transpose);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// selectRow
SEXP selectRow(S4 m, IntegerVector index);
RcppExport SEXP FeatureHashing_selectRow(SEXP mSEXP, SEXP indexSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< S4 >::type m(mSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type index(indexSEXP );
        SEXP __result = selectRow(m, index);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
