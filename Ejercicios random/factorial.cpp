#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

vector<int> soliDatos() ;
int factorial( int ) ;
vector<int> burbuja( vector<int> ) ;
void mostrarVector( vector<int> ) ;

int main()
{
    vector<int> lista ;
    int valor = 0 ;

    lista = soliDatos() ;
    cout << "Numeros ingresados: " ; mostrarVector( lista ) ;

    lista = burbuja( lista ) ;
    cout << "Lista ordenada: " ; mostrarVector( lista ) ;

    valor = factorial( lista.at( 0 ) ) ;
    cout << "El factorial es: " << valor << endl ;

    return 0 ;
} // fin main

vector<int> soliDatos()
{
    vector<int> lista;
    int valor = 0 ;

    for( int i = 0 ; i < 5 ; i++ )
    {
        cout << "Ingrese numero: " ; cin >> valor ;
        lista.push_back( valor ) ;
    }

    return lista ;
} // fin soliDatos

int factorial( int valor )
{
    if( valor == 0 ) return 1 ;
    else return valor * factorial( valor - 1 ) ;
} // fin factorial

vector<int> burbuja( vector<int> lista )
{
    sort( lista.begin() , lista.end() ) ;
    return lista ;
} // fin ordenarMenorManyor

void mostrarVector( vector<int> lista )
{
    for( int i = 0 ; i < lista.size() ; i++ )
    {
        if( i == lista.size() - 1 ) cout << lista.at(i) << endl ;
        else cout << lista.at(i) << " " ;
    }
} // fin mostrarVector