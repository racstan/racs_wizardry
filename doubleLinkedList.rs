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
            data,
            next: None,
            prev: self.tail.take(),
        });
        if let Some(mut tail_node) = self.tail.take() {
            tail_node.next = Some(new_node.clone());
            self.tail = Some(tail_node);
        } else {
            self.head = Some(new_node.clone());
            self.tail = Some(new_node);
        }
    }
    fn display_forward(&self) {
        let mut current = &self.head;
        while let Some(node) = current {
            println!("{}", node.data);
            current = &node.next;
        }
    }
    fn display_reverse(&self) {
        let mut current = &self.tail;
        while let Some(node) = current {
            println!("{}", node.data);
            current = &node.prev;
        }
    }
}
fn main() {
    let mut list = DoublyLinkedList::new();
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
                 
    println!("Forward Order:");
         