#include "Metodos.h"

int rango( int numero ) 
{
    int valor = 0 ;
    
    if( isdigit( numero ) == 1 ) 
    {
        numero > 0 && numero <= 10 ? valor = numero : valor = -1 ;
    }
    else valor = -1 ;

    return valor ;
} // fin rango

int validar( string op ) 
{
    int valor ;
    if( op.length() == 2 )
    {
        op[0] == '+' || op[0] == '-' ? valor = rango( (int)op[1] ) : valor = -1 ;
    }
    else if( op.length() == 1 )
    {
        valor = rango( (int)op[1] ) ;
    }
    else valor = -1 ;

    return valor ;
} // fin validar

int soliDatos( string msj )
{
    string  op ;
    int valor ;

    while( true )
    {
        cout << msj << endl ;
        cout << "op: " ; cin >> op ;
        valor = validar( op ) ;
        if( valor == -1 ) cout << "Valor ingresado no valido." << endl ;
        else break ;
    }

    return valor ;
 
} // fin soliDatos

void calcular( int op , string msj )
{
    switch( op )
    {
        case 1: /* llamar a metodo soliDatos y al metodo que calcula lo solicitado */ break;
        case 2: /* llamar a metodo soliDatos y al metodo que calcula lo solicitado */ break;
        case 3: /* llamar a metodo soliDatos y al metodo que calcula lo solicitado */ break;
        case 4: /* llamar a metodo soliDatos y al metodo que calcula lo solicitado */ break;
        case 5: /* llamar a metodo soliDatos y al metodo que calcula lo solicitado */ break;
        case 6: /* llamar a metodo soliDatos y al metodo que calcula lo solicitado */ break;
        case 7: /* llamar a metodo soliDatos y al metodo que calcula lo solicitado */ break;
        case 8: /* llamar a metodo soliDatos y al metodo que calcula lo solicitado */ break;
        case 9: /* llamar a metodo soliDatos y al metodo que calcula lo solicitado */ break;
        default: /* llamar a metodo soliDatos y al metodo que calcula lo solicitado */ break;
    }
} // fin calcular