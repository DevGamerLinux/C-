#include <iostream>
#include <vector>
#include <map>
#include <ios> 
#include <iomanip> 

using namespace std;

vector< vector<int> > llenarMatriz( int , int ) ;
vector<int> soliNumeros( int ) ;
void mostrarMatriz( vector< vector<int> > ) ;
int valMaxMatriz( vector< vector<int> > ) ;
int valMaxVector( vector<int> ) ;
map< int , int > duplicados( int , vector< vector<int> > ) ;
void mostrarDuplicados( map< int , int > ) ;
int sumaDiagonalPrincipal( vector< vector<int> > ) ;
int promedioMatriz( vector< vector<int> > ) ;
int mayorPromedio( int , vector< vector<int> > ) ;

int main()
{
    vector< vector<int> > matriz( 4 , vector<int>(4) ) ;
    int valMax = 0 ,        // valor maximo de la matriz
        sumaDiagonal = 0 ,  // suma de la diagonal principal
        promedio = 0 ,      // promedio de la matriz
        cantidad = 0 ;      // cantidad de numeros mayores al promedio
    map< int , int > posiciones ;   // posiciones de los duplicados

    cout << "Llenar matriz" << endl ;  
    matriz = llenarMatriz( matriz.size() , matriz.at(0).size() ) ;

    cout << "Mostrar contenido de la matriz" << endl ;
    mostrarMatriz( matriz ) ;
    cout << endl ;

    valMax = valMaxMatriz( matriz ) ;
    cout << "El valor maximo de la matriz es: " << valMax << endl << endl ;

    cout << "Buscar la cantidad de duplicados y sus posiciones" << endl ;
    posiciones = duplicados( valMax , matriz ) ;
    cout << "Cantidad de duplicados: " << posiciones.size() << endl ;
    cout << "Mostrar las posiciones del los duplicados" << endl ;
    mostrarDuplicados( posiciones ) ;
    cout << endl ;

    sumaDiagonal = sumaDiagonalPrincipal( matriz ) ;
    cout << "La suma de la diagonal principal es: " << sumaDiagonal << endl ;

    promedio = promedioMatriz( matriz ) ;
    cout << "El promedio de la matriz es: " << promedio << endl ;

    cantidad = mayorPromedio( promedio , matriz ) ;
    cout << "Valores mayores al promedio es: " << cantidad << endl ;

    return 0 ;
} // fin main

vector< vector<int> > llenarMatriz( int filas , int columnas )
{
    vector< vector<int> > matriz( filas , vector<int>( columnas ) ) ;
    int valor = 0 ;

    for( int i = 0 ; i < filas ; i++ )
    {
        cout << "Valores de la fila " << i+1 << endl ;
        matriz[i] = soliNumeros(4) ;
        cout << endl ;
    }

    return matriz ;
} // fin llenarMatriz

vector<int> soliNumeros( int columnas )
{
    vector<int> vector ;
    int valor = 0 ;

    for( int i = 0 ; i < columnas ; i++)
    {
        cout << "Ingrese valor: " ; cin >> valor ;
        vector.push_back( valor ) ;
    }

    return vector ;
}

void mostrarMatriz( vector< vector<int> > matriz )
{
    for( int i = 0 ; i < matriz.size() ; i++ )
    {
        for( int j = 0 ; j < matriz.at(0).size() ; j++ )
        {
            cout << setw( 5 ) ;
            j == matriz.at(0).size() - 1 ?  cout << matriz[i][j] << endl : cout << matriz[i][j] ;
        }
    }
} // mostrarMatriz

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
} // fin valMaxVector

map< int , int > duplicados( int max , vector< vector<int> > matriz )
{
    map< int , int > posiciones ;   // posiciones X,Y

    for( int i = 0 ; i < matriz.size() ; i++ )
    {
        for( int j = 0 ; j < matriz.at(0).size() ; j++ )
        {
            if( max == matriz[i][j] ) posiciones[i] = j ;
        }
    }

    return posiciones ;
} // fin duplicados

void mostrarDuplicados( map< int , int > posiciones )
{
    for( map< int , int >::iterator it = posiciones.begin() ; it != posiciones.end() ; ++it )
    {
        cout << "(" << it->first << "," << it->second << ")" << endl ;
    }
} // fin mostrarDuplicados

int sumaDiagonalPrincipal( vector< vector<int> > matriz ) 
{
    int suma = 0 ;

    for( int i = 0 ; i < matriz.size() ; i++ )
    {
        suma += matriz[i][i] ;
    }

    return suma ;
} // fin sumaDiagonalPrincipal

int promedioMatriz( vector< vector<int> > matriz )
{
    int promedio = 0 ;

    for( int i = 0 ; i < matriz.size() ; i++ )
    {
        for( int j = 0 ; j < matriz.at(0).size() ; j++ )
        {
            promedio += matriz[i][j] ;
        }
    }

    return promedio / ( matriz.size() * matriz.at(0).size() ) ;
} // fin promedioMatriz

int mayorPromedio( int promedio , vector< vector<int> > matriz )
{
    int cantidad = 0 ;

    for( int i = 0 ; i < matriz.size() ; i++ )
    {
        for( int j = 0 ; j < matriz.at(0).size() ; j++ )
        {
            if( matriz[i][j] > promedio ) cantidad++ ;
        }
    }

    return cantidad ;
} // fin mayorPromedio
