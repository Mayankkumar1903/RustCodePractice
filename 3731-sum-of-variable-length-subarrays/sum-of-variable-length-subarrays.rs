use std::cmp::max;

impl Solution {
    pub fn subarray_sum(nums: Vec<i32>) -> i32 {
        let n = nums.len();
        let mut ans = 0;

        for i in 0..n {
            let mut sum = 0;
            // Ensure no negative index by clamping the start to 0
            let start = if i >= nums[i] as usize { i - nums[i] as usize } else { 0 };
            for j in start..=i {
                sum += nums[j];
            }
            ans += sum;
        }

        ans
    }
}
