extern crate dwmstatus_rusty;

use std::io::BufferedReader;
use std::io::File;

fn main() {
   get_loadavg();
}

pub fn get_loadavg(){
// Function declaration

    let path = Path::new("/proc/loadavg");
    // Path specification. What is up with Path::new, though. Why is Path
    // captialised?

    loop { 
        let mut file = BufferedReader::new(File::open(&path));
    // File's path seems to be referenced by a pointer to our path variable.
    // Is it that File::open() takes a pointer to a string? Or that this is a
    // &str? May very well be one and the same in Rust.

        for line in file.lines() {
    // Starts for loop
            let s: String = match line { 
                Ok(s) => s,
                Err(e)   => { 
            // The match syntax is useful for unwrapping results of type Result
                    println!("No line!");
                    return;
                }
            };
        
        // By using the match syntax, it's possible to work with Result-types.
        // For Haskellers, this is similar to having to unwrapping Just a or
        // Maybe a

            let sliced = s.as_slice();
            let split:  Vec<&str> = sliced.split(' ').collect();
        // NB: the split() method requires single quotes in this instance

            println!("{}", s);
            println!("L: {}, {}, {}", split[0], split[1], split[2]);
        }
    }
}
