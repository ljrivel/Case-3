#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    unsigned t0;
    t0=clock();
    int arreglo[500000];
    for(int i=0; i<500000; i++){
        arreglo[i]=rand()%100;
    }
    for(int i=0; i<500000; i++){
        if(arreglo[i]==-1){
            return 0;
        }
    }
    double tiempo=1000L*(clock()-t0)/CLOCKS_PER_SEC;
    printf("Tiempo de ejecucion es %f ms", tiempo);
}