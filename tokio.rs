use tokio::time::{sleep, Duration};
async fn async_task(id: u32) {
    println!("Task {} started", id);
    sleep(Duration::from_secs(2)).await;
    println!("Task {} completed", id);
}
async fn main() {
    let task1 = async_task(1);
    let task2 = async_task(2);
