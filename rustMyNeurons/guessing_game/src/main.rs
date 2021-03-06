use std::io;
use std::rand;

fn main() {
    println!("Guess the number!");

    let secret_number = (rand::random::<uint>() % 100u) + 1u;

    println!("The secret number is {}!", secret_number);

    loop {     

        println!("Input your guess.");
    
        let input = io::stdin().read_line().ok().expect("Failed to read line");

        let input_num: Option<uint> = from_str(input.as_slice().trim());

        let num = match input_num {
            Some(num) => num,
            None      => { 
                println!("Please enter a number!");
                continue;
            }
        };

        println!("You guessed: {}", input);

        match my_compare(num, secret_number) { 
            Less    => println!("Too small!"),
            Greater => println!("Too big!"),
            Equal   => { 
                println!("Spot on! You Win!");
                return;
            },
        }
    }
}

fn my_compare(a: uint, b: uint) -> Ordering { 
    if a < b { Less }
    else if a > b { Greater }
    else { Equal }

}
