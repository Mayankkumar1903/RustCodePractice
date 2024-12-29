impl Solution {
    pub fn minimum_operations(grid: Vec<Vec<i32>>) -> i32 {
        let m = grid.len();
        let n = grid[0].len();
        let mut res = 0;
        for col in 0 .. n {
            let mut maxtillnow = -1;
            for row in 0 .. m {
                let val = grid[row][col].clone();
                maxtillnow = val.max(maxtillnow + 1);
                res += (maxtillnow - val);
            }
        }
        return res;
    }
}