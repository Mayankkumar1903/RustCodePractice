use std::collections::BinaryHeap;


impl Solution {
    fn get_delta(pass: i32, total: i32) -> f64 {
        (pass as f64 + 1.0) / (total as f64 + 1.0) - (pass as f64) / (total as f64)
    }

    pub fn max_average_ratio(classes: Vec<Vec<i32>>, extra_students: i32) -> f64 {
        // Define a custom type to handle max-heap behavior with f64
        #[derive(PartialEq, PartialOrd)]
        struct State {
            delta: f64,
            pass: i32,
            total: i32,
        }

        impl Eq for State {}

        impl Ord for State {
            fn cmp(&self, other: &Self) -> std::cmp::Ordering {
                other.delta.partial_cmp(&self.delta).unwrap() // Reverse for max-heap
            }
        }

        let mut pq = BinaryHeap::new();

        // Push the delta and class details into the priority queue
        for class in &classes {
            let pass = class[0];
            let total = class[1];
            pq.push(State {
                delta: Self::get_delta(pass, total),
                pass,
                total,
            });
        }

        // Assign extra students to maximize the average
        for _ in 0..extra_students {
            if let Some(State { delta: _, pass, total }) = pq.pop() {
                let new_pass = pass + 1;
                let new_total = total + 1;
                pq.push(State {
                    delta: Self::get_delta(new_pass, new_total),
                    pass: new_pass,
                    total: new_total,
                });
            }
        }

        // Calculate the final average
        let mut average = 0.0;
        while let Some(State { delta: _, pass, total }) = pq.pop() {
            average += pass as f64 / total as f64;
        }

        average / classes.len() as f64
    }
}

