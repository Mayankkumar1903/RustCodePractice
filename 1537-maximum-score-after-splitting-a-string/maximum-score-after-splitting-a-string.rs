use std::cmp::max;

impl Solution {
    pub fn max_score(s: String) -> i32 {
        let n = s.len();
        let mut zero = 0;
        let mut one = s.chars().filter(|&c| c == '1').count() as i32; 
        let mut maxi = 0;

        for i in 0..n-1 {
            if s.chars().nth(i).unwrap() == '0' {
                zero += 1;
            } else {
                one -= 1;
            }
            maxi = max(maxi, zero + one);
        }
        maxi
    }
}