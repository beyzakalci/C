#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int uzunluk;
	int i;
	int rastgele_harf;
	int rastgele_buyuk_harf;
	int rastgele_kucuk_harf;
	int rastgele_sayi;
	int random_numara;
	char gecici;
	char a[500];
	char b[500];
	char c[500];
	char random;
    int alt_deger_kucuk_harf = 97;
	int ust_deger_kucuk_harf = 122;
	int sayac_kucuk_harf = 150;
    int alt_deger_buyuk_harf = 65;
	int ust_deger_buyuk_harf = 90;
	int sayac_buyuk_harf = 100;
    int alt_deger_sayi = 48;
	int ust_deger_sayi = 57;
	int sayac_sayi = 100;
	int num_kucuk_harf;
	int num_buyuk_harf;
	int rant;
	char num;
	
	printf("Sifre uzunlugunu giriniz : ");
	scanf("%d", &uzunluk);
	
	char rastgele_harfcpy[uzunluk];
	int rastgele_sayi1[uzunluk];
	int rastgele_buyuk_harf1[uzunluk];
	int rastgele_kucuk_harf1[uzunluk];	
	char dizi[uzunluk];
	char asil[uzunluk];

	
	srand(time(NULL));
	rastgele_harf = 1 + rand()%(uzunluk-1);
	rastgele_sayi = uzunluk - rastgele_harf;
	
	
	if(rastgele_harf == 1)

	{
		num_buyuk_harf='D';
	}
	
	else
	{
	
	rastgele_buyuk_harf = 1 + rand()%(rastgele_harf-1);
	rastgele_kucuk_harf = rastgele_harf - rastgele_buyuk_harf;

	
	for(i=0;i<rastgele_kucuk_harf;i++)
    {
        rastgele_kucuk_harf1[i] = (rand() % (ust_deger_kucuk_harf - alt_deger_kucuk_harf + 1)) + alt_deger_kucuk_harf; 
    }
    
    for(i=0;i<rastgele_buyuk_harf;i++)
    {
        rastgele_buyuk_harf1[i] = (rand() % (ust_deger_buyuk_harf - alt_deger_buyuk_harf + 1)) + alt_deger_buyuk_harf; 
    }
    
    for(i=0;i<rastgele_sayi;i++)
    {
        rastgele_sayi1[i] = (rand() % (ust_deger_sayi - alt_deger_sayi + 1)) + alt_deger_sayi;  
    }
   
    
    
	}
	
	for(i=0;i<rastgele_sayi;i++)
    {
        rastgele_sayi1[i] = rastgele_sayi1[i] + 1; 
        if(rastgele_sayi1[i] == 58)
        {
        	rastgele_sayi1[i] = 48;
		}
		a[i] = rastgele_sayi1[i];
    }

	for(i=0;i<rastgele_buyuk_harf;i++)
    {
        rastgele_buyuk_harf1[i] = rastgele_buyuk_harf1[i] + 1;
        if(rastgele_buyuk_harf1[i] == 91)
        {
        	rastgele_buyuk_harf1[i] = 65;
		}
		b[i] = rastgele_buyuk_harf1[i];
    }
	
	for(i=0;i<rastgele_kucuk_harf;i++)
    {
        rastgele_kucuk_harf1[i] = rastgele_kucuk_harf1[i] + 1;
        if(rastgele_kucuk_harf1[i] == 123)
        {
        	rastgele_kucuk_harf1[i] = 97;
		}
		c[i] = rastgele_kucuk_harf1[i];
    }
	
	for(i=0 ; i<rastgele_kucuk_harf ; i++)
	{
		asil[i] = c[i];
	}
	
	for(i=rastgele_kucuk_harf ; i<(rastgele_buyuk_harf+rastgele_kucuk_harf) ; i++)
	{
		asil[i] = b[i-rastgele_kucuk_harf];
	}
	
	for(i=(rastgele_buyuk_harf+rastgele_kucuk_harf) ; i<uzunluk ; i++)
	{
		asil[i] = a[i-(rastgele_buyuk_harf+rastgele_kucuk_harf)];
	}
	
	for(i=0 ; i<uzunluk ; i++)
	{
		rant = rand()%(uzunluk-1);
		gecici = asil[i];
		asil[i] = asil[rant];
		asil[rant] = gecici;
		
	}
	
	printf("+1 Sezar sifreleme ile uretilen sifreniz : ");
	for(i=0 ; i<uzunluk ; i++)
		printf("%c", asil[i]);
		
	
	return 0;
}
