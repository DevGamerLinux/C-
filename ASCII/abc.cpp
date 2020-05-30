#include <iostream>

using namespace std;

void imprimirLetra( char , int );
void cantidadLetra( char , int );

int main()
{
    // documentacion osbre el codigo ASCII: https://elcodigoascii.com.ar/
    char letra = 97 ; // 97 hasta 122, el abecedario
    int limite = 0 ;

    while( true )
    {
        try
        {
            cout << "Ingrese un numero(27 como valor maximo): " ; cin >> limite ;
            
            if( cin.fail() ) throw "Valor ingresado incorrecto." ;

            if( limite == -1 ) break;
            else if( limite > 0 && limite <= 27 ) imprimirLetra( letra , limite ) ;  
            else cout << "Valor fuera de rango." << endl ;
        }
        catch( const char* e )
        {
            cerr << e << endl;
        }
    } // fin while
    
    return 0 ;
} // fin main

void imprimirLetra( char letra , int limite )
{
    for( int i = 1 ; i <= limite ; i++ )
    {
        cantidadLetra( letra , i ) ;      

        if( letra == 110 ) // si letra es n
        {
            i++ ;
            cantidadLetra( 164 , i ) ; // letra ñ
        }

        letra++ ;
    }
} // fin imprimirLetra

void cantidadLetra( char letra , int cantidad )
{
    for( int i = 0 ; i < cantidad ; i++ )
    {
        cout << letra ;
    }
} // fin cantidadLetra