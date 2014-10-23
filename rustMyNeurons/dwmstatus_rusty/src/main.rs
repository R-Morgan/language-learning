extern crate dwmstatus_rusty;

use std::io::BufferedReader;
use std::io::File;

fn main() {
    get_loadavg();
}

pub fn get_loadavg(){

    let path = Path::new("/proc/loadavg");
    let mut file = BufferedReader::new(File::open(&path));
    for line in file.lines() {
        print!("{}", line.unwrap());
    }
}

