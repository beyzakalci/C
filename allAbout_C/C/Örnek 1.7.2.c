#include<stdio.h>
int main( void )
{
	// Aylari temsil etmesi icin 
	// aylar adinda 12 elemanli 
	// bir dizi olusturuyoruz. 
	int aylar[ 12 ];
	int toplam = 0;
	int i;

	// Birinci dongu, deger atamak icindir
	for( i = 0; i < 12; i++ ) {
		printf( "%2d.Ay: ", (i+1) );
		// aylara deger atýyoruz:
		scanf( "%d", &aylar[ i ] );
	}

	// Az evvel girilen degerleri gostermek icin 
	// ikinci bir dongu kurduk
	printf( "\nGIRDIGINIZ DEGERLER\n\n" );
	for( i = 0; i < 12; i++ ) {
		printf( "%2d.Ay icin %d girdiniz\n", (i+1), aylar[i] );
		toplam += aylar[ i ];
	}

	printf( "Toplam gunesli gun sayisi: %d\n", toplam );
	return 0;
}
