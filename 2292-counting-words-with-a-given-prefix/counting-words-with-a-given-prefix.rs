impl Solution {
    pub fn is_prefix(s:&str,t:&str) -> bool{
        if s.len() < t.len(){
            return false;
        }
        if s.starts_with(t){
            return true;
        }
        false
    }
    pub fn prefix_count(words: Vec<String>, pref: String) -> i32 {
        let mut count = 0;
        for i in 0..words.len(){
            if Self::is_prefix(&words[i],&pref){
                count += 1;
            }
        }
        count
    }
}