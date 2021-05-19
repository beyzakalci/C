#include <stdio.h>
main()
{
int sayi1, sayi2, i;
printf(" Iki Sayi Giriniz : ");
scanf("%d%d", &sayi1, &sayi2);
for (i = 1; i <= sayi1 * sayi2; i ++)
{
    if (i % sayi1 == 0 && i % sayi2 == 0)
    {
		printf (" OKEK : %d\n", i);
    	break;
    }
}
(sayi1 > sayi2)? i = sayi1 : i == sayi2;
for (; i > 0; i --)
    {
        if (sayi1 % i == 0 && sayi2 % i == 0) 
    	{
        	printf (" OBEB :* %d\n", i);
            break;
        }
    }
getch();
}
