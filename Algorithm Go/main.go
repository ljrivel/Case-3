package main

import (
	"fmt"
	"math/rand"
	
)

func main() {
	var lista [500000] int
	
	for i := 0; i < len(lista); i++ {
		lista[i] = rand.Intn(100)
	}
	
	for i := 0; i < len(lista); i++ {
		if lista[i] == -1{
			fmt.Println("Encontre el -1")
		}
	}
	
	fmt.Println("")
	fmt.Println("Termino la ejecucion")
}
