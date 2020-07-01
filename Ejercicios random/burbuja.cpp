#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> burbuja( vector<int> ) ;
vector<int> burbujaCorto( vector<int> ) ;
void mostrarVector( vector<int> ) ;

int main()
{
    vector<int> lista1 = { 9,8,7,6,5,4,3,2,1 } , 
                lista2 = { 9,8,7,6,5,4,3,2,1 } ;

    cout << "Mostrar vector: " ;
    mostrarVector( lista1 ) ;

    cout << "Ordenar vector sin libreria" << endl ;
    lista1 = burbuja( lista1 ) ;
    cout << "Mostrar vector: " ;
    mostrarVector( lista1 ) ;

    cout << "Ordenar vector con libreria" << endl ;
    lista2 = burbujaCorto( lista2 ) ;
    cout << "Mostrar vector: " ;
    mostrarVector( lista2 ) ;

    return 0 ;
} // fin main

vector<int> burbuja( vector<int> lista )
{
    int aux = 0 ;
    for( int i = 0 ; i < lista.size() ; i++ )
    {
        for( int j = 0 ; j < lista.size()-i-1 ; j++ )
        {
            if( lista[j] > lista[j+1] )
            {
                aux = lista[j] ;
                lista[j] = lista[j+1] ;
                lista[j+1] = aux ;
            }
        }
    }
    return lista ;
} // fin burbuja

vector<int> burbujaCorto( vector<int> lista )
{
    sort( lista.begin() , lista.end() ) ;
    return lista ;
} // fin burbujaCorto

void mostrarVector( vector<int> lista )
{
    for( int i = 0 ; i < lista.size() ; i++ )
    {
        if( i == lista.size() - 1 ) cout << lista.at(i) << endl ;
        else cout << lista.at(i) << " " ;
    }
} // fin mostrarVector