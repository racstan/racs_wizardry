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
    let thread1_data = Arc::clone(&shared_data);
    let thread2_data = Arc::clone(&shared_data);
    let handle1 = thread::spawn(move || {
        for _ in 0..5 {
            increment_counter(thread1_data.clone(), 1);
            thread::sleep(std::time::Duration::from_secs(1));
        }
    });

        let handle2 = thread::spawn(move || {
            for _ in 0..5 {
                increment_counter(thread2_data.clone(), 2);
                thread::sleep(std::time::Duration::from_secs(1));
            }
        });
        handle1.join().unwrap();
        handle2.join().unwrap();
    }
