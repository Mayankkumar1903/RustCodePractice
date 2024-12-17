use std::collections::{BinaryHeap,HashMap};
impl Solution {
    pub fn repeat_limited_string(s: String, repeat_limit: i32) -> String {
        let mut freq_map = HashMap::new();
        for ch in s.chars(){
            *freq_map.entry(ch).or_insert(0) += 1;
        }

        let mut max_heap = BinaryHeap::new();
        for (&ch,&cnt) in freq_map.iter(){
            max_heap.push((ch,cnt));
        }

        let mut result = String::new();
        while let Some((ch,mut cnt)) = max_heap.pop(){
            let use_cnt = cnt.min(repeat_limit);
            result.push_str(&ch.to_string().repeat(use_cnt.try_into().unwrap()));
            cnt -= use_cnt;

            if cnt>0{
                //we will insert next alternate char
                if let Some((next_ch, mut next_cnt)) = max_heap.pop() {
                    result.push(next_ch);
                    next_cnt -= 1;
                    if next_cnt > 0 {
                        max_heap.push((next_ch, next_cnt));
                    }
                } else {
                    break;
                }
                max_heap.push((ch, cnt));
            }
        }
        result
    }
}