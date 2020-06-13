#include <iostream>
#include <vector>       // documentacion: http://www.cplusplus.com/reference/vector/vector/
#include <algorithm>    // documentacion: http://www.cplusplus.com/reference/algorithm/?kw=algorithm

using namespace std ;

vector<int> llenarVector( vector<int> );
void mostrarVector( vector<int> );
vector<int> ordenarMenorManyor( vector<int> );
vector<int> ordenarManyorMenor( vector<int> );

int main()
{
    vector<int> lista;

    lista = llenarVector( lista ) ;   
    mostrarVector( lista ) ; 
    lista = ordenarMenorManyor( lista ) ;
    mostrarVector( lista ) ;
    lista = ordenarManyorMenor( lista ) ;
    mostrarVector( lista ) ;

    return 0 ;
} // fin main

vector<int> llenarVector( vector<int> lista )
{
    lista.push_back( 1 );
    lista.push_back( 2 );
    lista.push_back( 3 );
    lista.push_back( 4 );
    lista.push_back( 5 );
    lista.push_back( 8 );
    lista.push_back( 9 );
    lista.push_back( 10 );
    lista.push_back( 6 );
    lista.push_back( 7 );

    return lista ;
} // fin llenarVector

void mostrarVector( vector<int> lista )
{
    for( int i = 0 ; i < lista.size() ; i++ )
    {
        if( i == lista.size() - 1 ) cout << lista.at(i) << endl ;
        else cout << lista.at(i) << " " ;
    }
} // fin mostrarVector

vector<int> ordenarMenorManyor( vector<int> lista )
{
    sort( lista.begin() , lista.end() ) ;
    return lista ;
} // fin ordenarMenorManyor

vector<int> ordenarManyorMenor( vector<int> lista )
{
    reverse( lista.begin() , lista.end() ) ;
    return lista ;
} // fin ordenarManyorMenor
