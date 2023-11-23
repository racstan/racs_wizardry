struct Node<T> {
    data: T, 
    next: Option<Box<Node<T>>>,
    prev: Option<Box<Node<T>>>,
}

struct DoublyLinkedList<T> {
