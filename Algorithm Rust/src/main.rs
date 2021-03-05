extern crate rand;
use rand::Rng;

fn main() {
    let mut rng = rand::thread_rng();
    let mut _list = [4; 50000];
     
    for _i in 0.._list.len(){
        _list[_i] = rng.gen_range(0..11);
    }
    
    
    for _i in 0.._list.len(){
        if _list[_i] == -1 {
            println!("Encontre el numero: -1 ");
        }
    }
    
     println!(" ");
    println!("Termino de correr el programa ");
}