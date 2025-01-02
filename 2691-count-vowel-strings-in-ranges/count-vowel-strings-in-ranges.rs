impl Solution {
    pub fn check_vowel(c: char) -> bool {
        matches!(c, 'a' | 'e' | 'i' | 'o' | 'u')
    }

    pub fn vowel_strings(words: Vec<String>, queries: Vec<Vec<i32>>) -> Vec<i32> {
        let n = words.len();
        let mut prefix_vowel_count = vec![0; n + 1];

        for (i, word) in words.iter().enumerate() {
            let chars: Vec<char> = word.chars().collect();
            if chars.len() > 0 && Self::check_vowel(chars[0]) && Self::check_vowel(chars[chars.len() - 1]) {
                prefix_vowel_count[i + 1] = prefix_vowel_count[i] + 1;
            } else {
                prefix_vowel_count[i + 1] = prefix_vowel_count[i];
            }
        }

        queries
            .iter()
            .map(|query| {
                let li = query[0] as usize;
                let ri = query[1] as usize;
                prefix_vowel_count[ri + 1] - prefix_vowel_count[li]
            })
            .collect()
    }
}
