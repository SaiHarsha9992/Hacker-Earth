#include <stdio.h> 
int main() 
{ 
   int n , c = 0 ; 
   long s = 0 , max ; 
   scanf ( "%d" , &n ) ; 
   int a [ n  ] ; 
   for ( int i = 0 ; i < n ; i++ )
   { 
      scanf ( "%d" , &a [ i ] ) ;  
	  if ( a [ i ] >= 0 )
	  { 
	    s = s + a [ i ] ; 
		c++ ;  
	  } 
   } 
   if ( s == 0 )
   { 
     max = a [ 0 ] ; 
	 for(int i = 1 ; i < n ; i++ ) 
	 { 
	    if ( a [ i ] > max ) 
	     max = a [ i ] ; 
	} 
	printf("%ld 1",max) ;  
	} 
	else 
	printf ( "%ld %d" , s , c ) ; 
	return 0; 
}