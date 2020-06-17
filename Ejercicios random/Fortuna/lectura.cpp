#include "metodos.h"

string zodiaco( int dia , int mes )
{
    string templo ;
    
    switch( mes )
    {
        case 1: dia >= 1 && dia <= 20 ? templo = "Capricornio" : templo = "Acuario" ; break ;   // Enero
        case 2: dia >= 1 && dia <= 18 ? templo =  "Acuario" : templo = "Piscis" ; break ;       // Febrero
        case 3: dia >= 1 && dia <= 20 ? templo = "Piscis" : templo = "Aries" ; break ;          // Marzo                
        case 4: dia >= 1 && dia <= 20 ? templo = "Aries" : templo = "Tauro" ; break ;           // Abril                
        case 5: dia >= 1 && dia <= 20 ? templo = "Tauro" : templo = "Geminis" ; break ;         // Mayo
        case 6: dia >= 1 && dia <= 21 ? templo = "Geminis" : templo = "Cancer" ; break ;        // Junio
        case 7: dia >= 1 && dia <= 22 ? templo = "Cancer" : templo = "Leo" ; break ;            // Julio
        case 8: dia >= 1 && dia <= 22 ? templo = "Leo" : templo = "Virgo" ; break ;             // Agosto
        case 9: dia >= 1 && dia <= 23 ? templo = "Virgo" : templo = "Libra" ; break ;           // Septiembre
        case 10: dia >= 1 && dia <= 22 ? templo = "Libra" : templo = "Escorpio" ; break ;       // Octubre
        case 11: dia >= 1 && dia <= 22 ? templo = "Escorpio" : templo = "Sagitario" ; break ;   // Noviembre
        default: dia >= 1 && dia <= 21 ? templo = "Sagitario" : templo = "Capricornio" ; break ;// Diciembre
    }

    return templo ;
} // fin zodiaco

void tiempo( int aniohoy , int anio )
{
    int edad = aniohoy - anio ;
    cout << "Horas vividas: " << horas(edad) << endl ;
    cout << "Segundos vividos: " << segundos(edad) << endl ;
} // fin tiempo

int horas( int edad )
{
    return 365 * 25 * edad ;
} // fin horas

int segundos( int edad )
{
    return 3600 * 24 * edad ;
} // fin segundos

void numeroSuerte( int anio )
{
    string valor = to_string( anio ) ;
    anio = 0 ;
    for( int i = 0 ; i < valor.length() ; i++ )
    {
        anio += (int)valor[i] ;
    }
    cout << "Su numero de la suerte es: " << anio << endl ;
} // fin numeroSuerte