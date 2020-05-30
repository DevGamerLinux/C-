#include <iostream>

using namespace std;

// prefunciones o prototipo de funciones
void imprimirLetra( char , int );
void cantidadLetra( char , int );

int main()
{
    // documentacion sobre el codigo ASCII: https://elcodigoascii.com.ar/
    char letra = 97 ; // 97 hasta 122, el abecedario
    unsigned int limite = 0 ;

    while( true )
    {       
        cin.clear();  
        cout << "0 para salir\nIngrese un numero(27 como valor maximo): " ; cin >> limite ;

        if( limite == 0 ) break;   // condicion para salir del loop
        else if( limite > 0 && limite <= 27 ) imprimirLetra( letra , limite ) ;  // rango aceptable
        else cout << "Valor fuera de rango." << endl ;
    } // fin while
    
    return 0 ;
} // fin main

/**
 * @brief  imprime las letras y la cantidad de estas
 * @note   
 * @param  letra: 
 * @param  limite: 
 * @retval None
 */
void imprimirLetra( char letra , int limite )
{
    for( int i = 1 ; i <= limite ; i++ )
    {
        cantidadLetra( letra , i ) ;      

        if( letra == 110 ) // si letra es n
        {
            i++ ;
            cantidadLetra( 164 , i ) ; // letra ñ
        }

        letra++ ;
    } cout<<endl;
} // fin imprimirLetra

/**
 * @brief  imprime la letra designada, la cantidad de veces que corresponda.
 * @note   
 * @param  letra: 
 * @param  cantidad: 
 * @retval None
 */
void cantidadLetra( char letra , int cantidad )
{
    for( int i = 0 ; i < cantidad ; i++ )
    {
        cout << letra ;
    }
} // fin cantidadLetra