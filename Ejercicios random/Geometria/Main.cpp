#include "Metodos.h"

int main()
{
    string msj = "0.- Salir\n"
          "1.- Perimetro de X\n"
          "2.- Perimetro de X\n"
          "3.- Perimetro de X\n"
          "4.- Perimetro de X\n"
          "5.- Perimetro de X\n"
          "6.- Perimetro de X\n"
          "7.- Perimetro de X\n"
          "8.- Perimetro de X\n"
          "9.- Teorema de pitagoras\n"
          "10.- Ecuacion de 2do grado" ;

    int op = 1 ;

    while( op != 0 )
    {
        op = soliDatos() ;
    }

    return 0 ;
} // fin main