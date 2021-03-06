package main

import (
	"fmt"
	"math/rand"
	"time"
	
)

func main() {
	var lista [500000] int
	T0 := time.Now()
	for i := 0; i < len(lista); i++ {
		lista[i] = rand.Intn(100)
	}
	
	for i := 0; i < len(lista); i++ {
		if lista[i] == -1{
			fmt.Println("Encontre el -1")
		}
	}

	fmt.Println("El tiempo de ejecucion fue: ")

	T1 := time.Now()
	tf := T1.Sub(T0)

	fmt.Println(tf)

}
