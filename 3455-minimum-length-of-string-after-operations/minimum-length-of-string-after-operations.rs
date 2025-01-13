impl Solution {
    pub fn minimum_length(s: String) -> i32 {
        let mut char_frequency = [0; 26];
        let mut total_length = 0;

        for c in s.chars() {
            char_frequency[(c as usize) - ('a' as usize)] += 1;
        }

        for &frequency in char_frequency.iter() {
            if frequency > 0 {
                total_length += if frequency % 2 == 0 { 2 } else { 1 };
            }
        }

        total_length
    }
}