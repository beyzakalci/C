#include <stdio.h> 
main()
{
	int x=0, y=1, sayi, i, bilinmeyen;
	printf("Adim sayisini giriniz:");
	scanf("%d",&sayi);
	//printf("\n %d",x);
	printf("\n %d",y);
	for(i=0;i<sayi-2;++i)
	{
		printf("\n %d",x+y);
		bilinmeyen=x;
		x=y;
		y=bilinmeyen+y;
	}
getch();
}
