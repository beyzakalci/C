#include<stdio.h>
int main( void )
{
	int not;
	printf("Lutfen notu giriniz> ");
	scanf("%d",&not);
	switch( not / 10 ) {
		case 10: 
		case 9: printf("NOT: A\n"); break;
		case 8: printf("NOT: B\n"); break;
		case 7: printf("NOT: C\n"); break;
		case 6: printf("NOT: D\n"); break;
		case 5:
		case 4:
		case 3:
		case 2: 
		case 1:
		case 0: printf("NOT: F\n"); break;
		default:
			printf("HATA: Bilinmeyen bir deger girdiniz!\n");
	}
	
	return 0;
}
