impl Solution {
    pub fn minimize_xor(num1: i32, num2: i32) -> i32 {
        let mut a = num1.count_ones() as i32;
        let mut b = num2.count_ones() as i32;
        let mut res = num1;

        for i in 0..32 {
            if a > b && (num1 & (1 << i)) != 0 {
                res ^= 1 << i;
                a -= 1;
            }
            if a < b && (num1 & (1 << i)) == 0 {
                res ^= 1 << i;
                a += 1;
            }
        }

        res
    }
}