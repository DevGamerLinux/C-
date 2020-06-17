#include "metodos.h"

usuario soliDatos() 
{
    usuario user1 ;

    user1.nombre = soliCadena( "Ingrese su nombre: " ) ;

    cout << "Fecha de hoy. (solo el numero)" << endl ;
    user1.diaHoy = soliNumero( "Ingrese dia actual: " );
    user1.mesHoy = soliNumero( "Ingrese mes actual: " ) ;
    user1.anioHoy = soliNumero( "Ingrese anio actual: " ) ;
    
    cout << "Fecha de cumpleanios. (solo el numero)" << endl ;
    user1.dia = soliNumero( "Dia de su cumpleanios: " ) ;
    user1.mes = soliNumero( "Mes de su cumpleanios: " ) ;
    user1.anio = soliNumero( "Anio de su cumpleanios: " ) ;

    return user1 ;
} // fin estructura usuario

int validar( string cadena )
{
    int cont = 0 ;
    
    for( int i = 0 ; i < cadena.length() ; i++ )
    {
        if( isdigit( cadena[i] ) == 1 ) cont++ ;
    }

    if( cont == cadena.length() ) return 1 ; //cadena ingresada es numeral
    else return 0 ; // cadena ingresada no es numeral
}

string soliCadena( string msj ) 
{
    string cadena ;
    cout << msj ; cin >> cadena ;
    return cadena ;
} // fin soliCadena

int soliNumero( string msj )
{
    int valor ;
    string cadena ;
    
    while( true )
    {
        cout << msj ; cin >> cadena ;
        valor = validar( cadena );
        if( valor == 1 ) break ;
        else cout << "Valor ingresado no valido." << endl ;
    }
    
    return stoi( cadena ) ;
} // fin soliNumero

void mostrarDatos( usuario user1 )
{
    cout << "Nombre: " << user1.nombre << endl ;
    cout << "Fecha de hoy: " << user1.diaHoy << "/" << user1.mesHoy << "/" << user1.anioHoy << endl ;
    cout << "Cumpleanios: " << user1.dia << "/" << user1.mes << "/" << user1.anio << endl ;
} // fin mostrarDatos