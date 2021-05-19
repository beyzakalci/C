#include<stdio.h>
int main( void )
{
	int saat;
	float ucret, toplam_ucret;
	char bas_harf;
	printf("Calisanin bas harfini giriniz> ");
	scanf("%c",&bas_harf);
	printf("Calisma saatini giriniz> ");
	scanf("%d",&saat);
	printf("Saat ucretini giriniz> ");
	scanf("%f",&ucret);
	toplam_ucret = saat * ucret;
	printf("%c basharfli calisanin alacagi ucret: %f\n",bas_harf,toplam_ucret);
	return 0;
}
