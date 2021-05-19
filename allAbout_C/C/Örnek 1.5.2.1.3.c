/*
Sadece tek sayýlarý yazdýran bir
program
*/
#include<stdio.h>
int main( void )
{
	int i;
	for( i = 0; i < 10; i++ ) {
		//i deðiþkeninin 2'ye göre modu
		//0 sonucunu veriyorsa, bu onun 
		//bir çift sayý olduðunu gösterir.
		//Bu durumda ekrana yazdýrýlmamasý 
		//için döngü bir sonraki adýma geçer.
		if( i%2 == 0 ) continue;
		printf("%2d\n",i);
	}
	return 0;
}	
