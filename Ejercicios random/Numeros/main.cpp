#include "metodos.h"

int main()
{
    int valor ;
    cout << "Ingrese un numero de datos: " ; cin >> valor ;

    Numeros numeros( valor ) ;
    
    numeros.leerNumero() ;
    
    cout << "Mostrar cantidad de numeros ingresados. " << endl ;
    numeros.mostrarValores( numeros.getValores() ) ;

    cout << "Mostrar numeros primos." << endl ;
    numeros.numerosPrimos() ;

    return 0 ;
}