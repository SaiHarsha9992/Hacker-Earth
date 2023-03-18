#include <iostream>
using namespace std ;
int main ()
{
	int t ;
	cin >> t ;
	while ( t-- )
	{
		int p , g , n , a , b , c = 0 , m , y , d = 0 ;
		cin >> p >> g ;
		cin >> n ;
		for ( int i = 0 ; i < n ; i++ )
		{
			cin >> a >> b ;
			c += a ;
			d += b ;
		}
		m = ( p * c ) + ( g * d ) ;
		y = ( g * c ) + ( p * d ) ;
		if ( m < y )
		{
			cout << m << endl;
		}
		else
		{
			cout << y << endl;
		}
	}
}
