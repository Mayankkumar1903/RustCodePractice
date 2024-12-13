impl Solution {
    pub fn find_score(nums: Vec<i32>) -> i64 {
        use std::collections::BinaryHeap;
        use std::cmp::Reverse;
        let mut heap = BinaryHeap::new();
        let mut marked = vec![false; nums.len()];
        let mut score = 0i64;
        for (i, &val) in nums.iter().enumerate() {
            heap.push(Reverse((val, i)));
        }

        while let Some(Reverse((val, idx))) = heap.pop() {
            if marked[idx] {
                continue;
            }
            score += val as i64;
            marked[idx] = true;
            if idx > 0 {
                marked[idx - 1] = true;
            }
            if idx + 1 < nums.len() {
                marked[idx + 1] = true;
            }
        }
        score
    }
}