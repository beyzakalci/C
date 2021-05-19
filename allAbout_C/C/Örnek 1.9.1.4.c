#include<stdio.h>
int main( void )
{
	int i, j;

	// Dizi isimleri keyfi secilmistir.
	// alfa, beta, gama gibi baska isimler de
	// verebilirdik.
	int Kanada[8];
	int ABD[8];
	int Meksika[8];
	int Rusya[8];
	int Japonya[8];

	// Bir pointer dizisi tanimliyoruz.
	int *tablo[5];
	// Yukarda tanimlanan dizilerin adreslerini  
	// tablo'ya aktiriyoruz. 
	tablo[0] = Kanada;
	tablo[1] = ABD;
	tablo[2] = Meksika;
	tablo[3] = Rusya;
	tablo[4] = Japonya;
	
	// Tablo elemanlarinin adreslerini gosteriyor 
	// gibi gozukse de, gosterilen adresler Kanada, 
	// ABD, Meksika, Rusya ve Japonya dizilerinin 
	// eleman adresleridir.
	for( i = 0; i < 5; i++ ) {
		for( j = 0 ; j < 8; j++ ) 
			printf( "%p\n", &tablo[i][j] );
	}
	return 0;
}
