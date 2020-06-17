#include <iostream>
#include <vector>

using namespace std;

int soliNumeros();
vector<int> Numeros();
int sumaNumeros( vector<int> );
int productoNumeros( vector<int> ) ;

int main()
{
    vector<int> lista ;
    int suma , producto ;

    lista = Numeros();
    suma = sumaNumeros( lista ) ;
    producto = productoNumeros( lista ) ;

    cout << "La suma de los numeros positivos es: " << suma << endl ;
    cout << "El producto de los numeros negativos es: " << producto << endl ;

    return 0 ;
} // fin main

vector<int> Numeros()
{
    vector<int> lista ;
    int valor = 0 ;

    while( lista.size() != 10 )
    {
        lista.push_back( soliNumeros() ) ;
    }

    return lista ;
} // fin Numeros

int soliNumeros()
{
    int valor ;

    while( true )
    {
        cout << "Ingrese valor: " ; cin >> valor ;
        if( valor != 0 ) break ;
        else cout << "Valor ingresado no valido." << endl ;
    }

    return valor ;
} // fin soliNumeros

int sumaNumeros( vector<int> lista )
{
    int resultado = 0 ;

    for( int i = 0 ; i < lista.size() ; i++ )
    {
        if( lista.at(i) > 0 ) resultado += lista.at(i) ;
    }

    return resultado ;
} // fin sumaNumeros

int productoNumeros( vector<int> lista )
{
    int producto = 1 ;

    for( int i = 0 ; i < lista.size() ; i++ )
    {
        if( lista.at(i) < 0 ) producto *= lista.at(i) ;
    }

    return producto ;
} // fin productoNumeros