use std::collections::BTreeMap;
impl Solution {
    pub fn continuous_subarrays(nums: Vec<i32>) -> i64 {
        let mut mp = BTreeMap::new();
        let mut left = 0;
        let mut right = 0;
        let mut count = 0;
        while right<nums.len(){
            *mp.entry(nums[right]).or_insert(0) += 1;
            while mp.iter().last().unwrap().0 - mp.iter().next().unwrap().0 >2{
                *mp.entry(nums[left]).or_insert(0) -= 1;
                if mp[&nums[left]] == 0 {
                    mp.remove(&nums[left]);
                }
                left += 1;
            }
            count += (right-left+1) as i64;
            right += 1;
        }
        count
    }
}