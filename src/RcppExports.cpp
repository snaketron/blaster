// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// blast
void blast(DataFrame query_table, DataFrame db_table, std::string output_file, int maxAccepts, int maxRejects, double minIdentity, std::string strand);
RcppExport SEXP _blaster_blast(SEXP query_tableSEXP, SEXP db_tableSEXP, SEXP output_fileSEXP, SEXP maxAcceptsSEXP, SEXP maxRejectsSEXP, SEXP minIdentitySEXP, SEXP strandSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type query_table(query_tableSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type db_table(db_tableSEXP);
    Rcpp::traits::input_parameter< std::string >::type output_file(output_fileSEXP);
    Rcpp::traits::input_parameter< int >::type maxAccepts(maxAcceptsSEXP);
    Rcpp::traits::input_parameter< int >::type maxRejects(maxRejectsSEXP);
    Rcpp::traits::input_parameter< double >::type minIdentity(minIdentitySEXP);
    Rcpp::traits::input_parameter< std::string >::type strand(strandSEXP);
    blast(query_table, db_table, output_file, maxAccepts, maxRejects, minIdentity, strand);
    return R_NilValue;
END_RCPP
}
// read_fasta
DataFrame read_fasta(std::string filename, std::string id_split_string, std::string filter);
RcppExport SEXP _blaster_read_fasta(SEXP filenameSEXP, SEXP id_split_stringSEXP, SEXP filterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< std::string >::type id_split_string(id_split_stringSEXP);
    Rcpp::traits::input_parameter< std::string >::type filter(filterSEXP);
    rcpp_result_gen = Rcpp::wrap(read_fasta(filename, id_split_string, filter));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_blaster_blast", (DL_FUNC) &_blaster_blast, 7},
    {"_blaster_read_fasta", (DL_FUNC) &_blaster_read_fasta, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_blaster(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
