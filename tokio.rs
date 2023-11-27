use tokio::time::{sleep, Duration};
async fn async_task(id: u32) {
    println!("Task {} started", id);
    sleep(Duration::from_secs(2)).await;
