#[derive(Debug)]
struct Node<T> {
    data: T,
    next: Option<Box<Node<T>>>,
}
      
struct LinkedList<T> {
    head: Option<Box<Node<T>>>,
