#include <bits/stdc++.h>
using namespace std;
int contador;
int Valor(int x){
    x=x+2;
    return x;
}

void Referencia(int &x){ /// el '&' se utiliza para indicar que se recibe la direccion de memoria en vez del valor
    x=x+2;
}

int Binaria(int ini,int fin,int &buscado){ ///paso por valor y referencia
    contador++;///aumentamos el numero de veces que entramos en la funcion
    int m=(ini+fin)/2;///encontrar la mitad entre ini y fin
    if(m==buscado) return contador;///Caso base(encontramos el numero que buscabamos
    if(m>buscado) return Binaria(m+1,fin,buscado);///Recursividad
    if(m<buscado) return Binaria(ini,m-1,buscado);///Recursividad
}

int main()
{
    int buscado;
    int variable=10,resultado;
    resultado=Valor(variable);
    cout<<variable<<" "<<resultado<<endl<<endl; ///En esta parte se puede ver que el valor de 'variable' no cambio
    Referencia(variable);
    cout<<variable<<endl<<endl; /// Como se puede ver se cambia el valor de 'variable' dado que se paso su direccion de memoria por lo tanto todos los cambios se realizaron directamente en ella
    contador=0;
    cout<<"Valor a buscar: "; cin>>buscado; ///Para utilizar busqueda binaria
    cout<<"Utilizando busqueda binaria con INT_MAX,INT_MIN, tarda "<<Binaria(INT_MIN,INT_MAX,buscado)<<" busquedas en encontrar el valor ";


    return 0;
}
/// xD
