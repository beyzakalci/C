#include<stdio.h>
int main( void )
{	int elm;  int month[ 12 ];   int *ptr; 
	ptr = month;                    // month[0] adresini atar
	elm = ptr[ 3 ];                 // elm = month[ 3 ] deðerini atar 
	ptr = month + 3;            // month[ 3 ] adresini atar
	ptr = &month[ 3 ];         // month[ 3 ] adresini atar
	elm = ( ptr+2 )[ 2 ];       // elm = ptr[ 4 ] ( = month[ 7 ] )deðeri atanýr. 
	elm = *( month + 3 );   ptr = month;
	elm = *( ptr + 2 );          // elm = month[ 2 ] deðerini atar
	elm = *( month + 1 ); // elm = month[ 1 ] deðerini atar 
return 0;}

