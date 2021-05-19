#include <stdio.h>
int main (void)
{
	int sayi1, sayi2;
	char devam;
	do
	{
		printf("Birinci sayýyý giriniz:");
		scanf("%d",&sayi1);
		printf("Ýkinci sayýyý giriniz:");
		scanf("%d",&sayi2);
		printf("%d+%d=%d\n",sayi1, sayi2, sayi1+sayi2);
		printf("Devam etmek ister misiniz?");
		do{
			scanf("%c",&devam);
		} while(devam=='\n');
		printf("\n");
	} while(devam== 'E', 'e');
	return 0;
	getch();
}
