use std::sync::{RwLock, Arc};
use std::thread;
struct SharedData {
    data: Vec<i32>,
