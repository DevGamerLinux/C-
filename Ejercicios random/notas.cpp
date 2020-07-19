#include <iostream>
#include <vector>
#include <ctime>
#include <ios> 
#include <iomanip> 

using namespace std;

int validar( string , vector<string> ) ;
string soliRegistro( vector<string> ) ;
vector<int> calificaciones() ;
int promedioNotas( vector<int> ) ;
void mostrarRegistro( vector<int> , vector<string> ) ;

int main()
{
    vector<string>  nombreCampos = { "TC1" , "TC2" , "TC3" , "TC4" , "TC5" , "Promedio" } ,
                    codigos ;    // almacena los 10 codigos de los alumnos
    vector< vector<int> > notas( 10 , vector<int>(5) ) ;    // almacena las notas de los alumnos
    int indice = 0 ;

    while( true )
    {
        if( indice == 10 ) break ;

        cout << "Solicitamos codigo del alumno" << endl ;
        codigos.push_back( soliRegistro( codigos ) ) ;

        notas[ indice ] = calificaciones() ;

        mostrarRegistro( notas.at( indice ) , nombreCampos ) ;

        indice++ ;
    }

    return 0 ;
} // fin main

int validar( string codigo , vector<string> codigos )
{
    int resultado = 0 ;
    for( int i = 0 ; i < codigos.size() ; i++ )
    {
        if( codigo == codigos.at(i) ) resultado = 1 ;
    }
    return resultado ;
} // fin validar

string soliRegistro( vector<string> codigos )
{
    string codigo ;

    while( true )
    {
        cout << "Ingrese codigo del estudiante: " ; cin >> codigo ;

        if( validar( codigo , codigos ) == 0 ) break ;
        else cout << "Codigo ya registrado" << endl ;
    }

    return codigo ;
} // fin soliRegistro

vector<int> calificaciones()
{
    vector<int> notas ;
    int valor = 0 ;

    srand( time(NULL) ) ;

    for( int i = 0 ; i < 5 ; i++ )
    {
        valor = rand() % (20-5+1)+5 ;
        notas.push_back( valor ) ;
    }

    return notas ;
} // fin calificaciones

int promedioNotas( vector<int> notas )
{
    int promedio = 0 ;

    for( int i = 0 ; i < notas.size() ; i++ )
    {
        promedio += notas.at(i) ;
    }

    return promedio / notas.size() ;
} // fin promedioNotas

void mostrarRegistro( vector<int> notas , vector<string>  nombreCampos )
{
    cout << "Registro" << endl ;
    for( int i = 0 ; i < nombreCampos.size() ; i++ )
    {
        cout << setw( 5 ) ;
        i == nombreCampos.size()-1 ? cout << nombreCampos.at(i) << endl : cout << nombreCampos.at(i) << " " ;
    }
    for( int i = 0 ; i < notas.size() ; i++ )
    {
        cout << setw( 5 ) ;
        cout << notas.at(i) << " " ;
        if( i == notas.size() - 1 ) 
        { 
            cout << setw( 5 ) ; 
            cout << promedioNotas( notas ) << endl ; 
        }
    }
} // fin mostrarRegistro