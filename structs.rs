struct Person{
    name: String,
    age: u32,
    is_student: bool,

}

fn main() {
    let person1 = Person {
        name: String::from("Alice"),
        age: 25,
        is_student: true,
    };
    println!("Name: {}", person1.name);









