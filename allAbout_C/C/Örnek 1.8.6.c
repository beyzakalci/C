#include<stdio.h>

// Verilen sayinin asal olup olmadigina 
// bakar. Sayi asalsa, geriye 1 aksi hâlde
// 0 degeri doner. 
int sayi_asal_mi( int sayi )
{
	int i;
	for( i = 2; i <= sayi/2; i++ ) {
	// Sayi asal degilse, i'ye tam olarak 
	// bolunur.
		if( sayi%i == 0 ) return 0;
	}
	// Verilen sayi simdiye kadar hicbir 
	// sayiya bolunmediyse, asaldir ve 
	// geriye 1 doner.
	return 1;
}

// main fonksiyonu
int main( void )
{
	int girilen_sayi;
	int test_sonucu;
	do{
		printf( "Lutfen bir sayi giriniz> " );
		scanf( "%d",&girilen_sayi );
		test_sonucu = sayi_asal_mi( girilen_sayi );
		if( !test_sonucu ) 
			printf("Girilen sayi asal degildir!\n");
	} while( !test_sonucu );
	printf( "Girilen sayi asaldir!\n" );
	
	return 0;
}
