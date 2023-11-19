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
        println!("Beep boop! I am a {}.", self.model);
}
}

fn main() {
    let person = Person {
        name: String::from("Alice"),
    };
    let robot = Robot {
        model: String::from("RoboX"),
    };


