#include<stdio.h>
int main( void )
{
	int x, y, z;
	int *int_addr;
	x = 41;
	y = 12;
	// int_addr x degiskenini 
	// isaret ediyor.
	int_addr = &x;
	// int_addr'in isaret ettigi 
	// degiskenin sakladigi deger 
	// aliniyor. (yani x'in degeri)
	z = *int_addr;
	printf( "z: %d\n", z );
	// int_addr, artik y degiskenini 
	// isaret ediyor.
	int_addr = &y;
	// int_addr'in isaret ettigi 
	// degiskenin sakladigi deger 
	// aliniyor. (yani y'nin degeri)
	z = *int_addr;
	printf( "z: %d\n" ,z );

	return 0;
}
