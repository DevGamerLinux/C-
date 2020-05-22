#include <iostream>
#include <string>
#include <cstdlib>
#include <locale>

using namespace std;

// prototipo de funcion o pre-funcion
void formatoString( string , char* ) ;

// documentacion sobre constexpr: https://es.cppreference.com/w/cpp/language/constexpr
constexpr unsigned int str2int(const char* str, int h = 0)
{
    return !str[h] ? 5381 : (str2int(str, h+1) * 33) ^ str[h];
}

int main() 
{
    string mes; // variable que almacena el nombre del mes
    char* cadena ;

    cout << "Ingrese el nombre del mes: " ; // solicitamos el nombre del mes al usuario
    cin >> mes ;    // lo que ingrese el usuario por teclado, se almacenara en la variable

    cadena = (char*)malloc( mes.length() * sizeof(char*) ) ; // redimencionamos la dimencion del puntero

    formatoString( mes , cadena ) ; // realizamos la conversion de la cadena

    // en c++, switch-case solo evalua numerales, no cadenas, aunque si caracteres
    // existe la opcion de transformar una cadena de caracteres a valores numericos.
    switch( str2int( cadena ) )
    {
        case str2int( "Enero" ):      cout<<"Enero es el mes numero 1."<<endl;      break;
        case str2int( "Febrero" ):    cout<<"Febrero es el mes numero 2."<<endl;    break;
        case str2int( "Marzo" ):      cout<<"Marzo es el mes numero 3."<<endl;      break;
        case str2int( "Abril" ):      cout<<"Abril es el mes numero 4."<<endl;      break;
        case str2int( "Mayo" ):       cout<<"Mayo es el mes numero 5."<<endl;       break;
        case str2int( "Junio" ):      cout<<"Junio es el mes numero 6."<<endl;      break;
        case str2int( "Julio" ):      cout<<"Julio es el mes numero 7."<<endl;      break;
        case str2int( "Agosto" ):     cout<<"Agosto es el mes numero 8."<<endl;     break;
        case str2int( "Septiembre" ): cout<<"Septiembre es el mes numero 9."<<endl; break;
        case str2int( "Octubre" ):    cout<<"Octubre es el mes numero 10."<<endl;    break;
        case str2int( "Noviembre" ):  cout<<"Noviembre es el mes numero 11."<<endl;  break;
        case str2int( "Diciembre" ):  cout<<"Diciembre es el mes numero 12."<<endl;  break;
        default:                      cout<<"Mes ingresado incorrecto."<<endl;      break;
    }

    free( cadena ) ; // liberamos memoria

    return 0;
} // fin del main

/**
 * @brief convierte una cadena de caracteres en letras minusculas, el primer caracter en mayuscula.
 * 
 * @param mes
 * @param cadena
*/
void formatoString( string mes , char* cadena )
{
    locale loc;

    // convierte toda la cadena en letras minusculas
    for( int i = 0 ; i < mes.length() ; i++ )
    {        
        cadena[i] = tolower( mes[i] , loc ) ;
    }

    // convierte el primer caracter en mayuscula
    cadena[0] = toupper( mes[0] , loc ) ;

} // fin formatoString