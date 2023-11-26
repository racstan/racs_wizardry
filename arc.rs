use std::sync::{Arc, Mutex};
use std::thread;
      
struct SharedData {
    counter: Arc<Mutex<u32>>,
}
   