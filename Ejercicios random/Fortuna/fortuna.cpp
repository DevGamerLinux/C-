#include "metodos.h"

int main()
{
    usuario user1 ;
    string signo ;
    user1 = soliDatos() ;
    mostrarDatos( user1 ) ;
    signo = zodiaco( user1.dia , user1.mes ) ;
    cout << "Eres del signo: " << signo << endl ;
    tiempo( user1.anioHoy , user1.anio ) ;
    return 0 ;
} // fin main