#include <iostream>

using namespace std;

class Circulo 
{
    // atributos
    private: 
        float radio ;
    // clases
    public:
        Circulo( float ); 
        void metodoDiametro() ;
} ;

// se desarrollan los metodos declarados en la clase

// constructor
Circulo::Circulo( float radio )
{
    // this->radio es el atributo declarado en la clase
    // radio es el parametro ingresado
    this->radio = radio ;
}

// metodo que calcula el diametro del circulo
void Circulo::metodoDiametro()
{
    float diametro = 2 * this->radio ;
    cout << "El diametro del circulo es: " << diametro << "" << endl ;
}

// fin de la clase

int main()
{
    Circulo c1 = Circulo( 5 ) ; // declaramos una instancia de la clase circulo con radio 5
    c1.metodoDiametro() ; // invocamos al metodo que nos mostrara el diametro del circulo
    return 0 ;
} // fin main