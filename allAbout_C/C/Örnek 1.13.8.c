#include<stdio.h>
int main( void )
{
	struct {
		char isim[40];
		int boy;
		struct {
			int yil;
			int ay;
			int gun;
		} dogum_bilgileri;
	} kisi;

	printf( "Adiniz: " );
	scanf( "%s", kisi.isim );
	printf( "Boyunuz: " );
	scanf( "%d", &kisi.boy );
	printf( "Dogum tarihi: ");
	scanf( "%d-%d-%d", 	&kisi.dogum_bilgileri.gun,
				&kisi.dogum_bilgileri.ay,
				&kisi.dogum_bilgileri.yil );

	printf( "Girilen bilgiler:\n" );
	printf( "Isim: %s\n", kisi.isim );
	printf( "Boy: %d\n", kisi.boy );
	printf( "Dogum tarihi: %d/%d/%d\n", 	kisi.dogum_bilgileri.gun,
						kisi.dogum_bilgileri.ay,
						kisi.dogum_bilgileri.yil );
	return 0;
}
