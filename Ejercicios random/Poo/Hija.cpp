#include "Metodos.h"

class Persona : public Direccion
{
    // atributos
    private:
        string  nombre ;
        char    sexo ; // F o M
        int     edad;
        double  peso , 
                altura ;

    // metodos
    public:
        Persona() ; // constructor
};

// aca desarrollas los metodos declarados en la clase.