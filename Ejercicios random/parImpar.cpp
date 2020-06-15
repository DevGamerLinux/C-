#include <iostream>
#include <vector>

using namespace std;

vector<int> soliNumeros() ;
vector<int> parImpar( vector<int> , int ) ;
void mostrarVector( vector<int> );

int main()
{
    vector<int> lista , pares , impares ;

    lista = soliNumeros() ;
    pares = parImpar( lista , 0 ) ;
    impares = parImpar( lista , 1 ) ;

    cout << "Cantidad de numeros pares: " << pares.size() << endl ;
    cout << "posiciones: " ; mostrarVector( pares ) ;

    cout << "Cantidad de numeros impares: " << impares.size() << endl ;
    cout << "posiciones: " ; mostrarVector( impares ) ;

    return 0 ;
} // fin main

vector<int> soliNumeros()
{
    vector<int> lista ;
    int valor ;
    for( int i = 0 ; i < 20 ; i++ )
    {
        cout << "Ingrese valor: " ; cin >> valor ;
        lista.push_back( valor );
    }
    return lista ;
} // fin soliNumeros

vector<int> parImpar( vector<int> lista , int comparar ) 
{
    vector<int> posiciones ;
    for( int i = 0 ; i < 20 ; i++ )
    {
        if( comparar == 0 ) // par
        {
            if( ( lista.at(i) % 2 ) == 0 ) posiciones.push_back( i );
        }
        else if( comparar == 1 ) // impar
        {
            if( ( lista.at(i) % 2 ) != 0 ) posiciones.push_back( i );
        }
        else continue ;
    }
    return posiciones ;
} // fin parImpar

void mostrarVector( vector<int> lista )
{
    for( int i = 0 ; i < lista.size() ; i++ )
    {
        if( i == lista.size() - 1 ) cout << lista.at(i) << endl ;
        else cout << lista.at(i) << " " ;
    }
} // fin mostrarVector