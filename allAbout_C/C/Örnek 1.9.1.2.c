#include<stdio.h>
int main( void )
{	int elm;  int month[ 12 ];   int *ptr; 
	ptr = month;                    // month[0] adresini atar
	elm = ptr[ 3 ];                 // elm = month[ 3 ] de�erini atar 
	ptr = month + 3;            // month[ 3 ] adresini atar
	ptr = &month[ 3 ];         // month[ 3 ] adresini atar
	elm = ( ptr+2 )[ 2 ];       // elm = ptr[ 4 ] ( = month[ 7 ] )de�eri atan�r. 
	elm = *( month + 3 );   ptr = month;
	elm = *( ptr + 2 );          // elm = month[ 2 ] de�erini atar
	elm = *( month + 1 ); // elm = month[ 1 ] de�erini atar 
return 0;}

