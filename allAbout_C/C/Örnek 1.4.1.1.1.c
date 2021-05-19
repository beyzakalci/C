#include<stdio.h>
int main( void )
{
	int girilen_sayi;
	printf("Lutfen bir tam sayi giriniz> ");
	scanf("%d",&girilen_sayi);
	if( girilen_sayi > 100 )
		printf("Girilen sayi 100'den buyuktur\n");
	return 0;
}
