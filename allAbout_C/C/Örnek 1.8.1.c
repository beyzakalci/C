#include<stdio.h>
int sonuc = 0;

// Verilen sayinin karesini hesaplayip,
// global 'sonuc' degiskenine yazar.
void kare_hesapla( int sayi )
{
	sonuc = sayi * sayi;
}

int main( void )
{
	// main( ) fonksiyonunda 
	// a degiskeni tanimliyoruz. 
	int a;
	printf( "Sayi giriniz> ");
	scanf( "%d",&a );
	printf( "Girdiginiz sayi\t: %d\n", a );
	kare_hesapla( a );
	printf("Sayinin karesi\t: %d\n", sonuc );
	return 0;
}
