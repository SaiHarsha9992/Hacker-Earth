#include<iostream>
using namespace std ;
int main(){ 
string st;  
int f=1; 
cin>>st;
if ( st[ 2 ] == 'A' || st [ 2 ] =='E'|| st [ 2 ] == 'I' || st [ 2 ] =='O' || st [ 2] == 'U' || st [ 2 ] == 'Y' ) 
f = 0 ; 
else 
 for(int i = 0 ; st [ i + 1 ] != '\0' ; i++ )
        if ( i == 2 || i == 1 || i == 5 || i == 6 ) 
		continue;  
        else if( ( st [ i ] + st [ i + 1 ] ) % 2 )
		{
			f = 0 ; 
			break ; 
		}
   if ( f == 0 ){
	   cout << "invalid" ;
   }
   else
   {
	   cout << "valid" ;
   }
return 0;
}