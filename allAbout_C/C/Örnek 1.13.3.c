#include<stdio.h>
int main( void )
{
	// Degisken tipinin nasil olacagini tanimliyoruz
	enum ana_renkler {
		Kirmizi,
		Mavi,
		Sari
	};

	// Degiskeni tanimliyoruz.
	enum ana_renkler piksel;

	// Degisken degerini Mavi olarak belirliyoruz.
	// Dilersek Sari ve Kirmizi da girebiliriz.
	piksel = Mavi;

	// Degisken degeri karsilastiriliyor.
	if( piksel == Kirmizi )
		printf( "K�rm�z� piksel\n" );
	else if( piksel == Mavi )
		printf( "Mavi piksel\n" );
	else
		printf( "Sar� piksel\n" );
	return 0;
}

