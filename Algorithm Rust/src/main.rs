extern crate rand;
use rand::Rng;
use std::time::SystemTime;

fn main() {
    let sys_time = SystemTime::now();

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
    
    let new_sys_time = SystemTime::now();
    let difference = new_sys_time.duration_since(sys_time)
    .expect("Clock may have gone backwards");
    println!("El tiempo de ejecucion fue: {:?}", difference);
}