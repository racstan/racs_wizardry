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
    println!("Age: {}", person1.age);
    println!("Is Student: {}", person1.is_student);

    let mut person2 = Person {
        name: String::from("Bob"),
        age: 30,
        is_student: false,
    };
    person2.age += 1;
    println!("Name: {}", person2.name);
    println!("Age: {}", person2.age);








