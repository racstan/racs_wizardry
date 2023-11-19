use std::collections::BTreeMap;

fn main() {
    let mut btree_map: BTreeMap<u32, String> = BTreeMap::new();

    btree_map.insert(3, String::from("Three"));
    btree_map.insert(1, String::from("One"));
    btree_map.insert(4, String::from("Four"));
    btree_map.insert(2, String::from("Two"));

    for (key, value) in &btree_map {
        println!("Key: {}, Value: {}", key, value);
    }











