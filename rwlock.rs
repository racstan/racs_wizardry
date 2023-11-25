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

    writer.push(new_value);
    println!("Writer {}: Writing data: {:?}", thread::current().id(), &*writer);
}
fn main() {
    let shared_data = Arc::new(SharedData {
        data: Vec::new(),
        rw_lock: RwLock::new(Vec::new()),
    });
    for i in 0..3 {
        let shared_data_clone = Arc::clone(&shared_data);
        thread::spawn(move || {
            read_data(shared_data_clone);
        });
    }
    thread::spawn(move || {
        for i in 0..5 {
            write_data(Arc::clone(&shared_data), i);
            thread::sleep(std::time::Duration::from_secs(1));
