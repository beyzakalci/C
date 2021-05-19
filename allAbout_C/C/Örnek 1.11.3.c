#include<stdio.h>
#include<string.h>
int main( void )
{
	int sonuc;
	char ilk_kelime[40]="Maymun";
	char ikinci_kelime[40]="Maytap";
	sonuc = strcmp( ilk_kelime, ikinci_kelime );
	printf( "%d\n", sonuc );
	sonuc = strncmp( ilk_kelime, ikinci_kelime, 3 );
	printf( "%d\n", sonuc );

	return 0;
}
