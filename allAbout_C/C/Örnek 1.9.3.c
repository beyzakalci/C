#include<stdio.h>
int main( void )
{
	int x, y;
	int *int_addr;
	x = 41;
	y = 12;
	// int_addr x degiskenini 
	// isaret ediyor
	int_addr = &x;
	// int_addr'in isaret ettigi 
	// degiskenin degerini 
	// degistiriyoruz
	*int_addr = 479;
	printf( "x: %d y: %d\n", x, y );
	int_addr = &y;

	return 0;
}
