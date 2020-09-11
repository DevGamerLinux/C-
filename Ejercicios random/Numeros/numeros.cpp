#include "metodos.h"

vector<int> Numeros :: getValores() 
{
    return this->valores ;
} // fin getValores

void Numeros :: leerNumero()
{
    int aux = 0 ;
    for( int i = 0 ; i < this->valor ; i++ )
    {
        cout << i + 1 << ": " ; cin >> aux ;
        this->valores.push_back( aux ) ;
    }
} // fin leerNumero

void Numeros :: mostrarValores( vector<int> valores )
{
    for( int i = 0 ; i < valores.size() ; i++ )
    {
        i == valores.size() - 1 ? cout << valores.at(i) << endl : cout << valores.at(i) << " " ;
    }
} // fin mostrarValores

void Numeros :: numerosPrimos()
{
    vector<int> numPrimos ;
    for( int i = 0 ; i < this->valores.size() ; i++ ) 
    {
        if( esPrimo( this->valores.at(i) ) ) numPrimos.push_back( this->valores.at(i) ) ;
    }
    this->mostrarValores( numPrimos ) ;
} // fin numerosPrimos

bool Numeros :: esPrimo( int numero ) 
{
  if( numero == 0 || numero == 1 || numero == 4 ) return false ;
  for( int x = 2 ; x < numero ; x++ ) if (numero % x == 0) return false ; 
  return true ;
}