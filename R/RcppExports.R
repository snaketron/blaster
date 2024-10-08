# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

read_dna_fasta <- function(filename, filter, non_standard_chars) {
    .Call('_blaster_read_dna_fasta', PACKAGE = 'blaster', filename, filter, non_standard_chars)
}

read_protein_fasta <- function(filename, filter, non_standard_chars) {
    .Call('_blaster_read_protein_fasta', PACKAGE = 'blaster', filename, filter, non_standard_chars)
}

dna_blast <- function(query_table, db_table, output_file, maxAccepts = 1L, maxRejects = 16L, minIdentity = 0.75, strand = "both") {
    invisible(.Call('_blaster_dna_blast', PACKAGE = 'blaster', query_table, db_table, output_file, maxAccepts, maxRejects, minIdentity, strand))
}

protein_blast <- function(query_table, db_table, output_file, maxAccepts = 1L, maxRejects = 16L, minIdentity = 0.75, wordsize = 2L) {
    invisible(.Call('_blaster_protein_blast', PACKAGE = 'blaster', query_table, db_table, output_file, maxAccepts, maxRejects, minIdentity, wordsize))
}

