use cmake;

fn main() {
    let dst = cmake::build("src/cpp");
    println!("cargo:rustc-link-search=native={}/lib", dst.display());

    println!("cargo:rustc-link-lib=static=MathFunctions");
}
