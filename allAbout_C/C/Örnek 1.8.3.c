#include<stdio.h>
void elemanlari_goster( int [ 5 ] );
int main( void )
{
	int dizi[ 5 ] = { 55, 414, 7, 210, 15 };
	elemanlari_goster( dizi );
	return 0;
}
void elemanlari_goster( int gosterilecek_dizi[ 5 ] )
{
	int i;
	for( i = 0; i < 5; i++) 
		printf( "%d\n", gosterilecek_dizi[ i ] );
}
