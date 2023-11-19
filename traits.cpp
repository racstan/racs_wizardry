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






