#include <iostream>
#include <algorithm>    // std::all_of
#include <string>

using namespace std;

bool validar( const string & ) ;
int soliLimite() ;
float sumatoria( int ) ;
void calcularSerie() ;

int main()
{
    calcularSerie() ;
    return 0 ;
} // fin main

bool validar( const string &str )
{
    return all_of(str.begin(), str.end(), ::isdigit); // C++11    
} // fin validar

int soliLimite()
{
    string numero ;

    while( true )
    {
        cout << "Ingrese un valor entero positivo: " ; cin >> numero ;
        if( validar( numero ) ) break ;
        else cout << "Valor ingresado no valido." << endl ;
    }

    return stoi( numero ) ;
} // fin soliLimite

float sumatoria( int limite ) 
{
    const float numerador = 1 ;
    float   denominador = 1 ,
            resultado = 0.0f ;
    bool bandera = true ;

    while( denominador <= limite - 1 )
    {
        if( bandera == true )
        {
            resultado += numerador / denominador ; 
            denominador += 2 ; 
            bandera = false ;
        }
        else
        {
            resultado -= numerador / denominador ; 
            denominador += 2 ; 
            bandera = true ;
        }
    }

    return resultado ;
} // fin sumatoria

void calcularSerie()
{
    const float numero = 4.0f ;
    int limite = 0 ;
    float resultado = 0.0f ;

    limite = soliLimite() ;
    resultado = numero * sumatoria( limite ) ; 

    cout << "El resultado de la serie es: " << resultado << endl ;   

} // fin calcularSerie
