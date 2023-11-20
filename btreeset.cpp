use std::collections::BTreeSet;

fn main() {
 
    let mut btree_set: BTreeSet<u32> = BTreeSet::new();
   
    btree_set.insert(3);
   
    btree_set.insert(1);
  
    btree_set.insert(4);
    
    btree_set.insert(2);
   
    for element in &btree_set {
           
        println!("Element: {}", element);
    }

       let element_to_check = 2;
    if btree_set.contains(&element_to_check) {
        println!("Element {} is present in the set.", element_to_check);
              } else {
           println!("Element {} is not present in the set.", element_to_check);








