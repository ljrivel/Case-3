#include <stdlib.h>

int main(){
    int arreglo[500000];
    for(int i=0; i<500000; i++){
        arreglo[i]=rand()%100;
    }
    for(int i=0; i<500000; i++){
        if(arreglo[i]==-1){
            return 0;
        }
    }
}