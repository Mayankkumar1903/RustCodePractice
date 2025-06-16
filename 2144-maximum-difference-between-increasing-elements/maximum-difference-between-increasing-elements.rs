impl Solution {
    pub fn maximum_difference(nums: Vec<i32>) -> i32 {
        let mut max_diff: i32 = -1;
        let n = nums.len();

        for i in 0..n {
            for j in (i + 1)..n {
                if nums[j] > nums[i] {
                    max_diff = max_diff.max(nums[j] - nums[i]);
                }
            }
        }

        max_diff
    }
}