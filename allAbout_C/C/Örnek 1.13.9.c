#include<stdio.h>
int main( void )
{
	int i;
	// Dogum tarihi tutmak icin
	// 'dogum_tarihi' adinda bir yapi
	// olusturuyoruz
	struct dogum_tarihi {
		int gun;
		int ay;
		int yil;
	};

	// Kisiye ait bilgileri tutmak
	// icin 'sahis_bilgileri' adinda
	// bir yapi kuruluyor.
	struct sahis_bilgileri {
		char isim[40];
		int boy;
		// Yapi icinde bir baska yapiyi
		// kullanmak mumkundur. dogum_tarihi
		// yapisindan 'tarih' adinda bir
		// degisken tanimlaniyor.
		struct dogum_tarihi tarih;
	};

	// Dizi elemanlarina ilk deger atamasi yapiyoruz. Dilerseniz
	// klavyeden deger girmeyi tercih edebilirsiniz.
	struct sahis_bilgileri kisi[3] = { "Sezgin", 170, { 17, 2, 1976 },
					"Veli", 178, { 14, 4, 1980 },
					"Cenk", 176, { 4, 11, 1983 } };

	// Yapi dizisi yazdiriliyor:
	for( i = 0; i < 3; i++ ) {
		printf( "Kayit no.: %d\n", ( i + 1 ) );
		printf( "Ad: %s\n", kisi[i].isim );
		printf( "Boy: %d\n", kisi[i].boy );
		printf( "Dogum Tarihi: %d/%d/%d\n\n", kisi[i].tarih.gun,
						kisi[i].tarih.ay,
						kisi[i].tarih.yil );
	}

	return 0;
}
