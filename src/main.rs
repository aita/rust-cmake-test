use rust_cmake_test::mysqrt;

fn main() {
    println!("mysqrt(2.0): {}", unsafe { mysqrt(2.0) });
}
