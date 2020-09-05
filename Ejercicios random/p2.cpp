#include <iostream>
#include <vector>

using namespace std;

vector<float> soliSueldo( vector<string> ) ;              // sueldo actual
vector<float> calcular( vector<float> , vector<int> ) ;   // calcular nuevo sueldo
void mostrarSueldo( vector<float> , vector<string> ) ;    // mostrar nuevo sueldo

int main()
{
    vector<string> empleados = { "Vendedores" , "Diseniadores" , "Administrativos" } ;
    vector<int> porcentaje = { 12 , 10 , 5 } ;

    vector<float> sueldos = soliSueldo( empleados ) ;
    sueldos = calcular( sueldos , porcentaje ) ;
    mostrarSueldo( sueldos , empleados ) ;

    return 0 ;
} // fin main

vector<float> soliSueldo( vector<string> empleados )
{
    vector<float> vector ;
    int valor = 0 ;

    for( int i = 0 ; i < 3 ; i++ )
    {
        cout << "Ingrese sueldo de " << empleados.at(i) << ": " ; cin >> valor ;
        vector.push_back( valor ) ;
    }

    return vector ;
} // fin soliSueldo

vector<float> calcular( vector<float> valores , vector<int> porcentaje ) 
{
    vector<float> vector ;

    for( int i = 0 ; i < 3 ; i++ )
    {
        vector.push_back( valores.at(i) + ( valores.at(i) * porcentaje.at(i) ) / 100 ) ;
    }

    return vector ;
} // fin calcular

void mostrarSueldo( vector<float> sueldos , vector<string> empleados ) 
{
    for( int i = 0 ; i < 3 ; i++ )
    {
        cout << "El nuevo sueldo de " << empleados.at(i) << " es: " << sueldos.at(i) << endl ;
    }
} // fin mostrarSueldo