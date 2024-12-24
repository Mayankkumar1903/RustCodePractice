impl Solution {
    pub fn my_sqrt(x: i32) -> i32 {
        if x<=1{
            return x;
        }
        for i in 1..=x{
            let ii = i as i64; // int overflow
            if ii * ii  > x as i64{
                return ii as i32 - 1;
            }
        }
        -1
    }
}