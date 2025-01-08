impl Solution {
    pub fn is_prefix_and_suffix(s:&str , t:&str) -> bool{
        if s.len() > t.len(){
            return false;
        }
         // Prefix check
        if !t.starts_with(s) {
            return false;
        }

        // Suffix check
        if !t.ends_with(s) {
            return false;
        }

        true
    }
    pub fn count_prefix_suffix_pairs(words: Vec<String>) -> i32 {
        let mut count = 0;
        let n = words.len();
        for i in 0..n-1{
            for j in i+1..n{
                if Solution::is_prefix_and_suffix(&words[i],&words[j]){
                    count+=1;
                }
            }
        }
        count
    }
}