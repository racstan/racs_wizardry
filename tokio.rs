use tokio::time::{sleep, Duration};  
async fn async_task(id: u32) {     
    println!("Task {} started", id); 
    sleep(Duration::from_secs(2)).await; 
    println!("Task {} completed", id); 
}
async fn main() {
    let task1 = async_task(1);
    let task2 = async_task(2);
    let task3 = async_task(3);

    tokio::try_join!(task1, task2, task3).expect("Failed to join tasks");
    println!("All tasks completed");
}
