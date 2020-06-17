#include <iostream>

using namespace std;

#ifndef _METODOS_H_
#define _METODOS_H_

typedef struct user {
    string nombre ;
    // fecha actual
    int diaHoy , 
        mesHoy , 
        anioHoy ;
    // fecha de nacimiento
    int dia , 
        mes , 
        anio ;
} usuario ;


int validar( string ) ;
string soliCadena( string ) ;
int soliNumero( string ) ;
usuario soliDatos() ;
void mostrarDatos( usuario ) ;
string zodiaco( int , int ) ;
void tiempo( int , int ) ;
int horas( int ) ;
int segundos( int ) ;
void numeroSuerte( int ) ;

#endif // fin _METODOS_H_
