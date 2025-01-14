use std::collections::HashMap;

impl Solution {
    pub fn find_the_prefix_common_array(a: Vec<i32>, b: Vec<i32>) -> Vec<i32> {
        let mut mp = HashMap::new();
        let mut res = Vec::new();

        for (i, (&x, &y)) in a.iter().zip(b.iter()).enumerate() {
            *mp.entry(x).or_insert(0) += 1;
            *mp.entry(y).or_insert(0) += 1;

            let mut cnt = 0;
            for (_, &v) in mp.iter() {
                if v == 2 {
                    cnt += 1;
                }
            }
            res.push(cnt);
        }

        res
    }
}