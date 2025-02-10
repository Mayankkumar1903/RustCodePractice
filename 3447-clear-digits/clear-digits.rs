impl Solution {
    pub fn clear_digits(s: String) -> String {
        let mut chars = vec![];

        for c in s.chars() {
            if c.is_numeric() {
                chars.pop();
            } else {
                chars.push(c)
            }
            
        }
        chars.into_iter().collect()
    }
}