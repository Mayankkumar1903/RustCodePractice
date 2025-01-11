impl Solution {
    pub fn can_construct(s: String, k: i32) -> bool {
        let n: i32 = s.len() as i32;
        if n < k {
            return false;
        }
        let mut freq = vec![0; 26];
        for c in s.chars() {
            freq[(c as usize) - ('a' as usize)] += 1;
        }
        let mut cnt_freq_odd = 0;
        for &count in freq.iter() {
            if count % 2 != 0 {
                cnt_freq_odd += 1;
            }
        }
        cnt_freq_odd <= k
    }
}