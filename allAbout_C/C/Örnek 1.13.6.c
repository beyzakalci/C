#include<stdio.h>
// Ay listesini olusturuyoruz. Ocak
// ayi 1 olacak sekilde, aylar sirayla
// numerik degerler aliyor.
enum ay_listesi {
	ocak = 1, subat, mart, nisan,
	mayis, haziran, temmuz, agustos,
	eylul, ekim, kasim, aralik
};
// Degisken tanimlamasini kolaylastirmak
// icin typedef kullaniliyoruz. aylar diyerek
// tanimlama yapmak mumkun hale geliyor.
typedef enum ay_listesi aylar;

void ay_ismini_yazdir( aylar );
int main( void )
{
	// aylar tipinde bir degisken
	// yaratip, 'kasim' degerini atiyoruz.
	aylar bu_ay = kasim;
	// kasim, numerik olarak 11'i ifade edecektir.
	printf( "%d. ay: ", bu_ay );
	// fonksiyonumuzu cagiriyoruz.
	ay_ismini_yazdir( bu_ay );
	return 0;
}
// Kendisine verilen aylar tipindeki degiskene gore
// hangi ayin oldugunu ekrana yazmaktadir.
void ay_ismini_yazdir( aylar ay_adi )
{
	switch( ay_adi ) {
		case ocak: printf( "Ocak\n" );break;
		case subat: printf( "Subat\n" );break;
		case mart: printf( "Mart\n" );break;
		case nisan: printf( "Nisan\n" );break;
		case mayis: printf( "Mayis\n" );break;
		case haziran: printf( "Haziran\n" );break;
		case temmuz: printf( "Temmuz\n" );break;
		case agustos: printf( "Agustos\n" );break;
		case eylul: printf( "Eylul\n" );break;
		case ekim: printf( "Ekim\n" );break;
		case kasim: printf( "Kasim\n" );break;
		case aralik: printf( "Aralik\n" );break;
	}
}
