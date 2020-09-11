#include <iostream>
#include <vector>

using namespace std;

#ifndef _METODOS_H_
#define _METODOS_H_

class Numeros
{
    int valor ;
    vector<int> valores ;

public:
    Numeros( int valor )
    {
        this->valor =  valor ;
    }

    vector<int> getValores() ;
    void leerNumero() ;
    void mostrarValores( vector<int> ) ;
    void numerosPrimos() ;
    bool esPrimo( int ) ;
};

#endif // fin _METODOS_H_