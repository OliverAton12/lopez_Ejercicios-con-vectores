//fecha: 03/07/24
////Autor:Lopez Quiroz Wagner
//tema:Diseñe el programa que calcule el tamaño del vector de enteros utilizando el operador sizeof 
#include<iostream>
using namespace std;

//ordena el vector usando el atgoritmo de ordenacion secuencial
void ordenSecuencia(int x[], int total)
{
  for(int k=0; k < total; k++)
  {
    for(int j=k+1; j< total; j++)
    {
        if(x[k] > x[j])
        {
            //intercambiar valores
            int aux = x[k];
            x[k]= x[j];
            x[j] = aux;
        }
    }
  }
}
//imprimir los elementos del vector
void ImprimirVector(int x[], int total )
{
 for(int k=0; k <total; k++)
 {
    cout<<endl<<x[k];
 }
}



int main()
{


    int x[] = {10, 6, 34, 4, 2, 7, 15, 1, 100, 56, 33};
    cout<<endl<<"tamanño del vcetor"<<sizeof(x);
    cout<<endl<<"tamaño de un entero"<<sizeof(int);
    int MAX = sizeof(x) / sizeof(int);


    cout<<endl<<"vector original" ;
    ImprimirVector (x, MAX);
    cout<<endl<<endl<<"vector ordenado";
    ordenSecuencia(x, MAX);
    ImprimirVector (x, MAX);

    return 0;
}