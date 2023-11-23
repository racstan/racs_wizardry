struct Node<T> {
    data: T, 
    next: Option<Box<Node<T>>>,
    prev: Option<Box<Node<T>>>,
}

struct DoublyLinkedList<T> {
    head: Option<Box<Node<T>>>,
    tail: Option<Box<Node<T>>>,
}

impl<T> DoublyLinkedList<T> {
    fn new() -> Self {
        DoublyLinkedList {
            head: None,
            tail: None,
        }
    }

    fn push_back(&mut self, data: T) {
        let new_node = Box::new(Node {
