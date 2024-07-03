//fecha: 03/07/24
////Autor:Lopez Quiroz Wagner
//tema:Diseñe la función que ordene un vector usando el algoritmo de ordenación secuencial 
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

    const int MAX = 7;
    int x[] = {10, 6, 34, 4, 2, 7, 15};
    cout<<endl<<"vector original" ;
    ImprimirVector (x, MAX);
    cout<<endl<<endl<<"vector ordenado";
    ordenSecuencia(x, MAX);
    ImprimirVector (x, MAX);

    return 0;
}