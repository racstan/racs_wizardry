trait Greeter{
        fn greet(&self);

}
struct Person {
    name: String,
}

impl Greeter for Person {
    fn greet(&self) {
        println!("Hello, {}!", self.name);
    }
}

struct Robot {
    model: String,
}

impl Greeter for Robot {
    fn greet(&self) {




