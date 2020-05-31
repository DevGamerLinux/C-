#include <iostream>
#include <cstring>

using namespace std;

string eliminarCaracter( string , char );
string obtenerMensaje( string , int );
string voltearMensaje( string );
string cifrar( string );

int main()
{
    string msj = "Este es un (mensaje cifrado)" ,
           aux = "" ,
           msjFinal = "";
    
    for( int i = 0 ; i < msj.length() ; i++ )
    {
        if( msj[i] != (char)40 )
        {
            msjFinal += msj[i];
        }
        else
        {
            aux = obtenerMensaje( msj , i ) ;
            msjFinal += cifrar( aux ) ;
            i += aux.length() ;
        }        
    }
    
    cout << msjFinal << endl ;

    return 0 ;
} // fin main

string eliminarCaracter( string msj , char caracter )
{
    string aux ;
    
    for( int i = 0 ; i < msj.length() ; i++ )
    {
        if( msj[i] == caracter ) msj[i] = (char)255;
    }

    for( int i = 0 ; i < msj.length() ; i++ )
    {
        if( msj[i] != (char)255 ) aux += msj[i] ;
    }

    return aux ;
} // fin eliminarCaracter

string obtenerMensaje( string msj , int inicio )
{
    string aux = "" ;
    while( true )
    {
        if( msj[inicio] == (char)41 )
        {
            aux += msj[inicio] ;
            break ;
        }
        aux += msj[inicio] ;
        inicio++;
    }
    return aux ;
    
} // fin obtenerMensaje

string voltearMensaje( string msj )
{
    string aux = "";
    for( int i = msj.length() - 1 ; i >= 0 ; i-- ) aux += msj[i] ;
    return aux ;
} // fin voltearMensaje

string cifrar( string msj )
{
    msj = eliminarCaracter( msj , (char)40 ) ; // eliminamos abrir parentesis
    msj = eliminarCaracter( msj , (char)41 ) ; // eliminamos cerrar parentesis
    msj = voltearMensaje( msj );
    return msj ;
} // fin cifrar