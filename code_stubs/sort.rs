use std::io;

fn print_array(arr: &[i32]) {
    println!("{{");
    for (i, &num) in arr.iter().enumerate() {
        if i == arr.len() - 1 {
            print!("{}", num);
        } else {
            print!("{} ", num);
        }
    }
    println!("\n}}");
}

fn sort(arr: &mut Vec<i32>) {
    // Your code goes here!

    print_array(arr);  // Make sure to call this print after every iteration
}

fn main() {
    println!("Enter numbers separated by spaces: ");
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Failed to read line");

    let arr: Vec<i32> = input
        .trim()
        .split_whitespace()
        .map(|s| s.parse().expect("Parse error"))
        .collect();

    print_array(&arr);
    let mut sortable_arr = arr.clone();
    sort(&mut sortable_arr);
    print_array(&sortable_arr);
}
