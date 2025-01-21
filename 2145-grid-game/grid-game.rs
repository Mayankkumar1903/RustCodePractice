impl Solution {
    pub fn grid_game(grid: Vec<Vec<i32>>) -> i64 {
        let n = grid[0].len();
        let mut top_prefix = vec![0i64; n + 1];
        let mut bottom_prefix = vec![0i64; n + 1];

        // Calculate prefix sums for both rows
        for i in 0..n {
            top_prefix[i + 1] = top_prefix[i] + grid[0][i] as i64;
            bottom_prefix[i + 1] = bottom_prefix[i] + grid[1][i] as i64;
        }

        let mut result = i64::MAX;

        // Simulate all transition points
        for i in 0..n {
            let top_remaining = top_prefix[n] - top_prefix[i + 1]; // Points remaining in the top row
            let bottom_remaining = bottom_prefix[i];              // Points collected so far in the bottom row
            let player2_score = top_remaining.max(bottom_remaining); // Max points player 2 can collect
            result = result.min(player2_score);                     // Minimize the max score for player 2
        }

        result
    }
}
