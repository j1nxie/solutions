fn dna_to_rna(dna: &str) -> String {
    dna.chars()
        .map(|x| match x {
            'T' => 'U',
            _ => x,
        })
        .collect()
}
