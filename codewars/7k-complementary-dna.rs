fn dna_strand(dna: &str) -> String {
    let mut output = String::new(); 
    for i in dna.chars() {
        match i {
            'A' => output += "T",
            'T' => output += "A",
            'C' => output += "G",
            'G' => output += "C",
            _ => {},
        };
    }
    output
}
