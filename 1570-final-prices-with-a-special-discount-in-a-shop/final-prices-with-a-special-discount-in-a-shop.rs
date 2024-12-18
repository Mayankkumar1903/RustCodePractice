impl Solution {
    pub fn final_prices(prices: Vec<i32>) -> Vec<i32> {
        let n = prices.len();
        let mut res = prices.clone(); 
        for i in 0..n {
            for j in (i + 1)..n { 
                if res[j] <= res[i] { 
                    res[i] -= res[j];
                    break; 
                }
            }
        }

        res
    }
}