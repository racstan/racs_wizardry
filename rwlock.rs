use std::sync::{RwLock, Arc};
use std::thread;
struct SharedData {
    data: Vec<i32>,
    rw_lock: RwLock<Vec<i32>>,
}
fn read_data(shared_data: Arc<SharedData>) {
    let reader = shared_data.rw_lock.read().unwrap();
    println!("Reader {}: Reading data: {:?}", thread::current().id(), &*reader);
}
fn write_data(shared_data: Arc<SharedData>, new_value: i32) {
    let mut writer = shared_data.rw_lock.write().unwrap();
