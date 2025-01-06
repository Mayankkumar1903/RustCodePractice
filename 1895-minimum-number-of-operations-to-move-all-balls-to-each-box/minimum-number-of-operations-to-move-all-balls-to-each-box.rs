impl Solution {
    pub fn min_operations(boxes: String) -> Vec<i32> {
        let mut res = Vec::new();
        let mut indices = Vec::new();

        // Collect indices where boxes contain '1'
        for (i, ch) in boxes.chars().enumerate() {
            if ch == '1' {
                indices.push(i as i32);
            }
        }

        // Compute the number of steps for each box
        for i in 0..boxes.len() {
            let steps: i32 = indices.iter().map(|&ind| (i as i32 - ind).abs()).sum();
            res.push(steps);
        }

        res
    }
}
