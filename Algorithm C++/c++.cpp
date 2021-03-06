#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main(){
    unsigned tiempoInicial;
    tiempoInicial=clock();
    int arreglo[500000];
    for(int i=0; i<500000; i++){
        arreglo[i]=rand()%100;
    }
    for(int i=0; i<500000; i++){
        if(arreglo[i]==-1){
            return 0;
        }
    }
    double tiempo=1000L*(clock()-tiempoInicial)/CLOCKS_PER_SEC;
    cout<<"Tiempo de ejecucion es "<<tiempo<<" ms"<<endl;
        
}