impl Solution {
    pub fn word_subsets(words1: Vec<String>, words2: Vec<String>) -> Vec<String> {
        // Step 1: Compute the maximum frequency of each character across all words in words2
        let mut max_freq = vec![0; 26];
        for word in words2.iter() {
            let mut freq = vec![0; 26];
            for &c in word.as_bytes() {
                freq[(c - b'a') as usize] += 1;
            }
            for i in 0..26 {
                max_freq[i] = max_freq[i].max(freq[i]);
            }
        }

        // Step 2: Filter words in words1 that satisfy the frequency conditions
        let mut result = Vec::new();
        for word in words1.iter() {
            let mut freq = vec![0; 26];
            for &c in word.as_bytes() {
                freq[(c - b'a') as usize] += 1;
            }

            let is_universal = max_freq.iter().enumerate().all(|(i, &count)| freq[i] >= count);
            if is_universal {
                result.push(word.clone());
            }
        }

        result
    }
}
