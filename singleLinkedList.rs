#[derive(Debug)]
struct Node<T> {
    data: T,
    next: Option<Box<Node<T>>>,
}
      
struct LinkedList<T> {
    head: Option<Box<Node<T>>>,
}

impl<T> LinkedList<T> {

    fn new() -> Self {
        LinkedList { head: None }
    }
    fn push(&mut self, data: T) {
        let new_node = Box::new(Node {
            data,
            next: self.head.take(),
        });
        self.head = Some(new_node);
    }
    fn display(&self) {
        let mut current = &self.head;
        while let Some(node) = current {
            println!("{}", node.data);
            current = &node.next;
        }
    }
}
fn main() {
    let mut list = LinkedList::new();
                      