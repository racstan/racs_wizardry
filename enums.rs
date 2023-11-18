enum Color {
    Red,
    Green,
    Blue,
}

fn main() {

    let my_color1 = Color::Red;
    let my_color2 = Color::Green;
    let my_color3 = Color::Blue;

    match my_color1 {
        Color::Red => println!("It's red!"),
        Color::Green => println!("It's green!"),
        Color::Blue => println!("It's blue!"),

        enum Person {
            Engineer,
            Scientist(String, usize),
            Artist { name: String, age: usize },
        }
        let person1 = Person::Engineer;
        let person2 = Person::Scientist(String::from("Alice"), 30);
        let person3 = Person::Artist {
            name: String::from("Bob"),
            age: 25,




















