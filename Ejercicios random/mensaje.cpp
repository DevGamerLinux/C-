#include <iostream>
#include <string>
#include <vector>

using namespace std;

string soliMensaje() ;
int soliCantidadMensaje() ;
vector<string> matriz() ;
template <typename T>
void mostrarMatriz( vector<T> ) ;

int main() 
{
    vector<string> mensaje ;
    mensaje = matriz() ;
    cout << "Mostrar contenido de la matriz" << endl ;
    mostrarMatriz( mensaje ) ;
    return 0 ;
}

string soliMensaje()
{
    string frase = "" ;

    while( true )
    {
        cout << "Ingrese un mensaje de 10 caracteres como maximo." << endl ;
        cout << "Ingrese mensaje: " ; cin >> frase ;
        if( frase.size() < 0 && frase.size() > 10 ) cout << "Mensaje excede largo permitido." << endl ;
        else break ;
    }

    return frase ;
} // fin soliMensaje

int soliCantidadMensaje()
{
    int valor = 0 ;

    while( true )
    {
        cout << "Ingrese la cantidad de mensajes que desea ingresar: " ; cin >> valor ;
        if( valor < 0 ) cout << "Valor ingresado no valido." << endl ;
        else break ;
    }

    return valor ;
}

vector<string> matriz()
{
    vector<string> mensaje ;
    int cantidad = 0 ;

    cantidad = soliCantidadMensaje() ;

    while( cantidad != 0 )
    {
        mensaje.push_back( soliMensaje() ) ;
        cantidad-- ;
    }

    return mensaje ;
} // fin matriz

template <typename T>
void mostrarMatriz( vector<T> matriz )
{
    for( int i = 0 ; i < matriz.size() ; i++ )
    {
        if( i == matriz.size() - 1 ) cout << matriz.at(i) << endl ;
        else cout << matriz.at(i) << " " ;
    }        
} // fin mostrarMatriz