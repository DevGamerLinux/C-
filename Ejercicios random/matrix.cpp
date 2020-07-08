#include <iostream>
#include <vector>

using namespace std;

vector< vector<int> > aumentar( vector< vector<int> > ) ;
vector<int> almacenar( vector<int> ) ;
void mostrarMatriz( vector< vector<int> > ) ;

int main()
{
    vector< vector<int> > matriz( 3 , vector<int>(3) ) ;    // matriz original
    vector< vector<int> > matrizAumentada( 6 , vector<int>(6) ) ;

    matriz = { {1,0,1},{0,1,0},{0,1,0} } ;

    cout << "Matriz original" << endl ;
    mostrarMatriz( matriz ) ;

    matrizAumentada = aumentar( matriz ) ;
    
    cout << "Matriz aumentada" << endl ;
    mostrarMatriz( matrizAumentada ) ;

    return 0 ;
} // fin main

vector< vector<int> > aumentar( vector< vector<int> > original )
{
    vector< vector<int> > matriz( 6 , vector<int>(6) ) ;
    int fila = 0 ;
    
    for( int i = 0 ; i < original.size() ; i++ )
    {
        for( int j = 0 ; j < 2 ; j++ )
        {
            matriz[fila] = almacenar( original[i] ) ;
            fila++ ;
        }
    }

    return matriz ;
} // fin aumentar

vector<int> almacenar( vector<int> original )
{
    vector<int> lista ;

    for( int i = 0 ; i < original.size() ; i++ )
    {
        for( int j = 0 ; j < 2 ; j++ )
        {
            lista.push_back( original.at(i) ) ;
        }
    }

    return lista ;
} // fin almacenar

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