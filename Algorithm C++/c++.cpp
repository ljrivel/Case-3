#include <cstdlib>
#include <iostream>
#include <ctime>
#include <windows.h>

using namespace std;

int main(){
    double tiempoInicial;
    tiempoInicial=clock();
    MEMORYSTATUSEX status;
    double memoriaUtilizada;
    status.dwLength=sizeof(status);
    GlobalMemoryStatusEx(&status);
    memoriaUtilizada=status.ullAvailPhys/1024;
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
    status.dwLength=sizeof(status);
    GlobalMemoryStatusEx(&status);
    memoriaUtilizada-=(status.ullAvailPhys/1024);
    cout<<"Memoria utilizada por el programa "<<memoriaUtilizada<<" kb"<<endl;
}