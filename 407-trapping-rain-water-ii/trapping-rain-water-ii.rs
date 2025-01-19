use std::cmp::Reverse;
use std::collections::BinaryHeap;

impl Solution {
    pub fn trap_rain_water(height_map: Vec<Vec<i32>>) -> i32 {
        let n = height_map.len();
        if n == 0 {
            return 0;
        }
        let m = height_map[0].len();
        if m == 0 {
            return 0;
        }

        // Priority queue to store cells with their height, using Reverse to mimic a min-heap
        let mut pq = BinaryHeap::new();
        let mut visited = vec![vec![false; m]; n];

        // Push boundary columns
        for i in 0..n {
            visited[i][0] = true;
            visited[i][m - 1] = true;
            pq.push(Reverse((height_map[i][0], i, 0)));
            pq.push(Reverse((height_map[i][m - 1], i, m - 1)));
        }

        // Push boundary rows
        for j in 0..m {
            visited[0][j] = true;
            visited[n - 1][j] = true;
            pq.push(Reverse((height_map[0][j], 0, j)));
            pq.push(Reverse((height_map[n - 1][j], n - 1, j)));
        }

        let mut ans = 0;
        let directions = [(-1, 0), (1, 0), (0, -1), (0, 1)];

        while let Some(Reverse((h, r, c))) = pq.pop() {
            for &(dr, dc) in &directions {
                let nr = r as isize + dr;
                let nc = c as isize + dc;

                if nr >= 0 && nr < n as isize && nc >= 0 && nc < m as isize {
                    let nr = nr as usize;
                    let nc = nc as usize;

                    if !visited[nr][nc] {
                        visited[nr][nc] = true;
                        ans += (h - height_map[nr][nc]).max(0);
                        pq.push(Reverse((h.max(height_map[nr][nc]), nr, nc)));
                    }
                }
            }
        }

        ans
    }
}
