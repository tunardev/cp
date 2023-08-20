// https://codeforces.com/contest/1807/submission/202367357

use std::io::{self, BufRead};
 
fn solve() {
    let mut sum = 0;
    let mut line = String::new();
    io::stdin().read_line(&mut line).unwrap();
    let n: usize = line.trim().parse().unwrap();
 
    let mut a = Vec::new();
    line.clear();
    io::stdin().read_line(&mut line).unwrap();
    for x in line.split_whitespace() {
        let val: i64 = x.trim().parse().unwrap();
        a.push(val);
    }
    a.sort();
 
    if a[0] != 1 {
        println!("NO");
        return;
    } else {
        let mut ok = true;
        for i in 1..n {
            if sum + 1 < a[i] {
                ok = false;
                break;
            }
            sum += a[i];
        }
 
        println!("{}", if ok { "YES" } else { "NO" });
    }
}
 
fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines();
    let t: usize = lines.next().unwrap().unwrap().trim().parse().unwrap();
 
    for _ in 0..t {
        solve();
    }
}