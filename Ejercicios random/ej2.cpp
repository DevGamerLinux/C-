#include <iostream>
#include <vector>
#include <map>

using namespace std;

map< int , int > divisible( vector<int> ) ;
void mostrar( map< int , int > ) ;

int main()
{
    vector<int> a = { 5 , 8 , 17 , 21 , 6 , 36 , 18 , 46 , 37 } ;
    cout << "Valores e indices que son divisibles por 2." << endl ;
    mostrar( divisible( a ) ) ;
    return 0 ;
} // fin main

map< int , int > divisible( vector<int> a )
{
    map< int , int > resp ;

    for( int i = 0 ; i < a.size() ; i++ )
    {
        if( a.at(i) % 2 == 0 ) resp[i] = a.at(i) ;
    }

    return resp ;
} // fin divisible

void mostrar( map< int , int > valores )
{
    for( map< int , int >::iterator it = valores.begin() ; it != valores.end() ; ++it )
        cout << it->first << " => " << it->second << endl ;
} // fin mostrar