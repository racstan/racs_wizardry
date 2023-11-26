use std::sync::{Arc, Mutex};
use std::thread;
      
struct SharedData {
    counter: Arc<Mutex<u32>>,
}
fn increment_counter(shared_data: Arc<Mutex<u32>>, thread_id: u32) {
    let mut counter = shared_data.lock().unwrap();
    *counter += 1;
    println!("Thread {}: Counter: {}", thread_id, *counter);
}
fn main() {
    let shared_data = Arc::new(Mutex::new(0));
