impl Solution {
    pub fn ways_to_split_array(nums: Vec<i32>) -> i32 {
        let mut totSum:i64 = 0;
        let mut currSum : i64 = 0;
        for i in 0..nums.len(){
            totSum += nums[i] as i64;
        }
        let mut cnt:i32 = 0;
        for i in 0..nums.len()-1{
            currSum += nums[i] as i64;
            if currSum >= totSum-currSum{
                cnt += 1;
            }
        }
        cnt
    }
}