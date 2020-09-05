#include <iostream>
#include <ctime>
#include <vector>

using namespace std;

vector< vector<int> > llenarMatriz() ;
vector<int> genenarVector() ;
int suma( vector< vector<int> > ) ;
void mostrarMatriz( vector< vector<int> > ) ;

int main()
{
    srand( time( NULL ) ) ;
    vector< vector<int> > matriz = llenarMatriz() ;
    mostrarMatriz( matriz ) ;
    cout << "La suma de la matriz, menos la diagonal principal, es: " << suma( matriz ) << endl ;
    return 0 ;
} // fin main

vector< vector<int> > llenarMatriz()
{
    vector< vector<int> > matriz ;

    for( int i = 0 ; i < 5 ; i++ )
    {
        matriz.push_back( genenarVector() ) ;
    }

    return matriz ;
} // fin llenarMatriz

vector<int> genenarVector()
{
    vector<int> arreglo ;

    for( int i = 0 ; i < 5 ; i++ )
    {        
        arreglo.push_back( rand()%(100-1+1)+1 ) ;
    }

    return arreglo ;
} // fin generarVector

int suma( vector< vector<int> > matriz )
{
    int resul = 0 ;

    for( int i = 0 ; i < matriz.size() ; i++ )
    {
        for( int j = 0 ; j < matriz[i].size() ; j++ )
        {
            if( i != j ) resul += matriz[i][j] ;
        }
    }

    return resul ;
} // fin suma

void mostrarMatriz( vector< vector<int> > matriz )
{
    for( int i = 0 ; i < matriz.size() ; i++ )
    {
        for( int j = 0 ; j < matriz.size() ; j++ )
        {
            j == matriz.size() - 1 ? cout << matriz[i][j] << endl : cout << matriz[i][j] << " " ;
        }
    }
} // fin mostrar