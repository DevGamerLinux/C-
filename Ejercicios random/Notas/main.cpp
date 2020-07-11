#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

vector<float> calificacion( vector<string> ) ;
vector< vector<float> > soliNotas( vector<string> , vector<string> ) ;
vector<float> burbuja( vector<float> ) ;
int promedio( vector<float> ) ;
void mostrarPromedio( vector<float> ) ;
void mostrarNota( vector<float> , int ) ;

int main()
{
    vector<string> materias = { "Fisica" , "Quimica" , "Matematicas" } ,
                   alumnos = { "Alumno 1" , "Alumno 2" , "Alumno 3" } ;
    return 0 ;
} // fin main

vector<float> calificacion( vector<string> materias )
{
    vector<float> notas ;
    int valor ;

    for( int i = 0 ; i < materias.size() ; i++ )
    {
        cout << "Solicitando nota de la materia " << materias[i] << ": " << endl ;
        cout << "Ingrese Nota: " ; cin >> valor ;
        notas.push_back( valor ) ;
    }

    return notas ;
} // fin calificacion

vector< vector<float> > soliNotas( vector<string> materias , vector<string> alumnos )
{
    vector< vector<float> > notas( 3 , vector<float>(3) ) ;
    
    float valor ;

    for( int i = 0 ; i < notas.size() ; i++ )
    {
        cout << "Solicitando calificaciones del " << alumnos[i] << endl ;
        notas[i] = calificacion( materias ) ;
    }

    return notas ;
} // fin soliNotas

vector<float> burbuja( vector<float> lista )
{
    sort( lista.begin() , lista.end() ) ;
    return lista ;
} // fin burbuja

int promedio( vector<float> notas )
{
    int resultado ;

    for( int i = 0 ; i < notas.size() ; i++ )
    {
        resultado += notas.at( i ) ;
    }

    return resultado / notas.size() ;
} // fin promedio

void mostrarPromedio( vector<float> notas )
{
    int medio ;
    notas = burbuja( notas ) ;
    medio = promedio( notas ) ;

    cout << "Nota promedio: " << promedio << endl ;
    cout << "Nota menor: " << notas[0] << endl ;
    cout << "Nota mayor: " << notas[ notas.size() - 1 ] << endl ;

} // fin mostrarPromedio

void mostrarNota( vector<float> notas , int materia )
{
    cout << "Nota: " << notas[ materia ] << endl ;
} // fin mostrarNota