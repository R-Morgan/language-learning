extern crate dwmstatus_rusty;
extern crate time;

use std::io::BufferedReader;
use std::io::File;
use time::{now,strftime,Tm};

fn main() {
    loop { 
       get_loadavg();
       get_time();
    }
}

pub fn get_loadavg(){
// Function declaration

    let path = Path::new("/proc/loadavg");
    // Path specification. What is up with Path::new, though. Why is Path
    // captialised?

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

        println!("L: {}, {}, {}", split[0], split[1], split[2]);
        return;
    }
}

pub fn get_time() { 
    let cur_time = time::now();

    let day: &str = match cur_time.tm_wday { 
        0 => "Sun",
        1 => "Mon",
        2 => "Tues",
        3 => "Wed",
        4 => "Thurs",
        5 => "Fri",
        6 => "Sat",
        _ => "Nothing",
    };

    let month: &str = match cur_time.tm_mon{ 
        0 => "Jan",
        1 => "Feb",
        2 => "March",
        3 => "April",
        4 => "May",
        5 => "June",
        6 => "July",
        7 => "Aug",
        8 => "Sept",
        9 => "Oct",
        10 => "Nov",
        11 => "Dec",
        _ => "Nothing",
    };

    let day2: String = get_wday(cur_time);
    let month2: String = get_month(cur_time);

    println!("{:s} {:02d} {:s} {:02d}:{:02d}:{:02d}", day2.as_slice(), cur_time.tm_mday, month2.as_slice(), cur_time.tm_hour, cur_time.tm_min, cur_time.tm_sec);

}

fn get_wday(time_struct: Tm) -> String {
    let day = match time_struct.tm_wday { 
        0 => "Sun",
        1 => "Mon",
        2 => "Tues",
        3 => "Wed",
        4 => "Thurs",
        5 => "Fri",
        6 => "Sat",
        _ => "Nothing",
    };

    return from_str(day).unwrap();
}

fn get_month(time_struct: Tm) -> String { 

    let month = match time_struct.tm_mon{ 
        0 => "Jan",
        1 => "Feb",
        2 => "March",
        3 => "April",
        4 => "May",
        5 => "June",
        6 => "July",
        7 => "Aug",
        8 => "Sept",
        9 => "Oct",
        10 => "Nov",
        11 => "Dec",
        _ => "Nothing",
    };

    return from_str(month).unwrap();
 
}

