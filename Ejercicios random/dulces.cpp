#include <iostream>

using namespace std ;

int validar( char );
int menu( string ) ;
int acciones( int , string[] );
void orden( string , string );
int continuar( string );
int pedirSabor( string );

int main()
{
    string opciones[3] = { "PALETAS" , "CONOS" , "MALTEADAS" } ,
           msj = "** MENU PRINCIPAL **\n"
                    "1.- " + opciones[0] + ".\n"
                    "2.- " + opciones[1] + ".\n" 
                    "3.- " + opciones[2] + ".\n"
                    "4.- SALIR.\n"
                    "¿QUE ES LO QUE DESEA ELEGIR HOY?: " ;
    int op = 1 ;

    while( op )
    {
        system( "cls" ) ;
        op = menu( msj );
        op = acciones( op , opciones ) ;
        if( op == -1 ) 
        {
            cout << "BYE BYE" << endl ;
            op = 0 ;
        }
    }

    return 0 ;
}

int validar( char op )
{
    if( isdigit( op ) == 1 ) return 1 ;
    else return 0 ;
}

int menu( string msj ) 
{
    char op ;
    int aux ;

    fflush( stdin ) ;
    cout << msj ; cin >> op ;

    validar( op ) == 1 ? aux = (int)op - 48 : aux = op ;
    return aux ;
}

int continuar( string msj )
{
    int op = 0 ;
    char letra ;
    while( true )
    {
        letra = menu( msj ) ;
        if( letra == 's' || letra == 'S' ) { op = 1 ; break ; }
        else if( letra == 'n' || letra == 'N' ) { op = -1 ; break ; }
        else { cout << "valor ingresado no valido." << endl ; }
    }
    return op ;
}

int pedirSabor( string msj )
{
    int op = 1 ;
    while( true )
    {
        op = menu( msj ) ;
        if( op != 1 && op != 2 && op != 3 && op != 4 && op != 5 )
        {
            cout << "Valor ingresado no valido." << endl ;
        }
        else { break ; }
    }
    return op-1 ;
}

int acciones( int op , string opciones[] )
{
    char letra ;
    string sabores[5] = { "CHOCOLATE" , "VAINILLA" , "FRESA" , "PISTACHO" , "MANGO" } , 
           msj = "** MENU DE SABORES **\n"
                    "1.- " + sabores[0] + ".\n"
                    "2.- " + sabores[1] + ".\n" 
                    "3.- " + sabores[2] + ".\n"
                    "4.- " + sabores[3] + ".\n"
                    "5.- " + sabores[4] + ".\n"
                    "¿QUE SABOR DESEA ORDENAR?: " ;
    
    system( "cls" );
    
    switch( op )
    {
        case -1: cout << "valor ingresado no es un numero." << endl ;
                 op = continuar( "¿Volver a intentar?(s/n): " ) ; break;
        /*-----------------------------------------------------------------------------------------*/
        case 1: op = pedirSabor( msj ); orden( opciones[0] , sabores[ op ] );
                op = continuar( "¿Desea hacer otra orden?(s/n): " ) ; break;
        /*-----------------------------------------------------------------------------------------*/
        case 2: op = pedirSabor( msj ); orden( opciones[1] , sabores[ op ] ); 
                op = continuar( "¿Desea hacer otra orden?(s/n): " ) ; break;
        /*-----------------------------------------------------------------------------------------*/
        case 3: op = pedirSabor( msj ); orden( opciones[2] , sabores[ op ] ); 
                op = continuar( "¿Desea hacer otra orden?(s/n): " ) ; break;
        /*-----------------------------------------------------------------------------------------*/
        case 4: cout << "BYE BYE" << endl ; op = 0 ; break;
        /*-----------------------------------------------------------------------------------------*/
        default: cout << "Valor ingresado no valido." << endl ; 
                 op = continuar( "¿Volver a intentar?(s/n): " ) ; break;
    }

    return op ;
}

void orden( string opcion , string sabor )
{
    cout << "Su orden es " << opcion << " sabor " << sabor << endl ;
}