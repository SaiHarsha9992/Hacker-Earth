#include <iostream>
using namespace std ;
int main ( ) 
{
    int n , r ;
    cin >> n ;
    int a [ n ] ;
    for ( int i = 0 ; i < n ; i++ )
    {
        cin >> a [ i ] ;
    }
    r = a [ n - 1 ] % 10 ;
    if ( r == 0 )
    {
        cout << "Yes" ;
    }
    else
    {
        cout << "No" ;
    }
}