use std::sync::{Arc, Mutex};
use std::thread;
      
struct SharedData {
    counter: Arc<Mutex<u32>>,
}
fn increment_counter(shared_data: Arc<Mutex<u32>>, thread_id: u32) {
