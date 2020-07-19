#include <iostream>
#include <vector>

using namespace std;

vector< vector<int> > llenarMatriz( int , int ) ;
vector<int> soliNumeros( int ) ;

int main()
{
    vector< vector<int> > matriz( 4 , vector<int>(4) ) ;  

    cout << "Llenas matriz" << endl ;  
    matriz = llenarMatriz( 4 , 4 ) ;

    return 0 ;
} // fin main

vector< vector<int> > llenarMatriz( int filas , int columnas )
{
    vector< vector<int> > matriz( filas , vector<int>( columnas ) ) ;
    int valor = 0 ;

    for( int i = 0 ; i < filas ; i++ )
    {
        matriz[i] = soliNumeros( columnas ) ;
    }

    return matriz ;
} // fin llenarMatriz

vector<int> soliNumeros( int columnas )
{
    vector<int> vector( columnas ) ;
    int valor = 0 ;

    for( int i = 0 ; i < columnas ; i++)
    {
        cout << "Ingrese valor: " ; cin >> valor ;
        vector.push_back( valor ) ;
    }

    return vector ;
}

int valMaxMatriz( vector< vector<int> > matriz )
{
    int max = 0 , 
        aux = 0 ;

    for( int i = 0 ; i < matriz.size() ; i++ )
    {
        aux = valMaxVector( matriz.at(i) ) ;
        if( aux > max ) max = aux ;
    }

    return max ;
} // fin valMaxMatriz

int valMaxVector( vector<int> vector )
{
    int max = 0 ;

    for( int i = 0 ; i < vector.size() ; i++ )
    {
        if( max < vector.at(i) ) max = vector.at(i) ;
    }

    return max ;
}