#include <stdio.h>
int main ( )
{
	long int a [ 1000 ] , n , i , p = 1 , m = 1000000007 ;
    scanf ( "%ld" , &n ) ;
    for ( i = 0 ; i < n ; i++ )
    {
    scanf ( "%ld" , &a [ i ] ) ;
    p = ( ( p * a [ i ] ) % m ) ;
    }
    printf ( "%ld" , p ) ;
}