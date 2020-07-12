#include <iostream>
#include <vector>

using namespace std;

struct Componentes 
{
    float levadura ,  // KG
          malta ,     // KG
          agua ,      // litros
          cebada ,    // KG
          lupulos ;   // KG
} ;

struct DatosMes
{
    Componentes s1 , // semana 1
                s2 , // semana 2 
                s3 , // semana 3
                s4 ; // semana 4
} ;

int menu( string ) ;
DatosMes soliDatos( vector<string> ) ;
Componentes datoSemanal( Componentes , vector<string> ) ;
void mostrarDatosMes( Componentes , vector<string> ) ;

int main()
{
    DatosMes meses[12] ;
    vector<string> nombres = { "levadura" , "malta" , "agua" , "cebada" , "lupulo" } ;
    vector<float> gastos ;
    string msj ;
    int op = 1 ;

    while( op != 0 )
    {
        msj =   "0.- Salir.\n"
                "1.- Ingresar datos.\n"
                "2.- Litros de agua consumidos.\n" 
                "3.- Promedio de los componentes.\n"
                "4.- Gastos por componente.\n" 
                "5.- Componente que mas se utilizo.\n"
                "op: ";
        op = menu( msj ) ; cout << endl ;

        switch( op )
        {
            case 1 : msj = "Ingrese el numero del mes: " ; op = menu( msj ) ;
                     meses[op-1] = soliDatos( nombres ) ; break ;
            case 2 :  break ;
            case 3 :  break ;
            case 4 :  break ;
            case 5 :  break ;
            default: cout << "Saliendo del programa." << endl ; break ;
        }
    }

    return 0 ;
} // fin main

int menu( string msj )
{
    int valor ;
    cout << msj ; cin >> valor ;
    return valor ;
} // fin menu

DatosMes soliDatos( vector<string> nombres )
{
    DatosMes semanaMes ;
    vector<Componentes> semanas = { semanaMes.s1 , semanaMes.s2 , semanaMes.s3 , semanaMes.s4 } ;

    cout << "Ingrese los datos solicitados." << endl << endl ;
    for( int i = 0 ; i < semanas.size() ; i++ )
    {
        cout << "Datos de la semana " << i+1 << endl ;
        semanas[i] = datoSemanal( semanas.at(i) , nombres ) ;
        cout << endl ;
    }

    cout << "Mostrar los datos del mes." << endl ;
    for( int i = 0 ; i < semanas.size() ; i++ )
    {
        mostrarDatosMes( semanas.at(i) , nombres ) ;
    }

    semanaMes.s1 = semanas.at(0) ;
    semanaMes.s2 = semanas.at(1) ;
    semanaMes.s3 = semanas.at(2) ;
    semanaMes.s4 = semanas.at(3) ;

    return semanaMes ;
} // fin soliDatos

Componentes datoSemanal( Componentes semana , vector<string> nombres )
{
    cout << nombres.at(0) << ": " ; cin >> semana.levadura ;
    cout << nombres.at(1) << ": " ; cin >> semana.malta ;
    cout << nombres.at(2) << ": " ; cin >> semana.agua ;
    cout << nombres.at(3) << ": " ; cin >> semana.cebada ;
    cout << nombres.at(4) << ": " ; cin >> semana.lupulos ;
    return semana ;
} // fin datoSemanal

void mostrarDatosMes( Componentes semana , vector<string> nombres )
{
    cout << nombres.at(0) << ": " ; cout << semana.levadura << endl ;
    cout << nombres.at(1) << ": " ; cout << semana.malta << endl ;
    cout << nombres.at(2) << ": " ; cout << semana.agua << endl ;
    cout << nombres.at(3) << ": " ; cout << semana.cebada << endl ;
    cout << nombres.at(4) << ": " ; cout << semana.lupulos << endl ;
} // fin mostrarDatosMes