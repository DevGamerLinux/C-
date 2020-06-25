#include "metodos.h"

typedef struct Usuario
{
    int     id ;         // identificador
    string  user ,       // usuario
            pass ,       // contrasenia
            name ,       // nombre del usuario
            lastname ;   // apellido del usuairo
} ;

typedef struct Categorias
{
    int     id ;        // identificador
    string  nombre ;    // nombre de la categoria
    bool    estado ;    // 1 = up  ...  0 = down
} ;

typedef struct Archivo
{
    int         id ;            // identificador
    Categorias  categoria ;     // categoria que pertenece
    string      nombre ,        // nombre del archivo
                fecha ,         // fecha de instalacion
                path ;          // ruta de instlacion
    Usuario     responsable ;   // quien lo instalo.
    bool    estado ;            // 1 = up  ...  0 = down
} ;