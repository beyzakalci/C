#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct personel{
	char ad[10];
	char soyad[10];
	char adres[20];
	char bolum[20];
	int numara;
	int maas;
	}kisi,degisen;
	
void kayit_ekle()
	
{ 	int i=0,c;
	
	FILE *personel;
	if((personel = fopen("personel.bin", "a"))== NULL)
	//if((personel = fopen("personel.bin","wb"))==NULL)
	{
		printf("Dosya acilirken bir hata olustu.");
		exit(1);
	}
	puts("kac personel kayit edeceksiniz:");
    scanf("%d",&c);
    
		while( i++<c )
    {
      printf("%d. personelin numarasi: ",i); scanf("%d",&kisi.numara);
      printf("%d. personelin adi(bosluk kullanmayin)    : ",i); scanf("%s",kisi.ad);
      printf("%d. personelin soyadi    : ",i); scanf("%s",kisi.soyad);
      printf("%d. personelin bolumu(!bosluk kullanmayin!)   :",i); scanf("%s",kisi.bolum);
      printf("%d. personelin adresi(!bosluk kullanmayin!)   :",i); scanf ("%s",kisi.adres);
      printf("%d. personelin maasi   :",i); scanf("%d",&kisi.maas);
      printf("\n");
      fprintf(personel,"\nNumara: %d    \nÝsim: %s   \nSoyisim: %s  \nBolum: %s  \nAdres: %s  \nMaas: %d \n-----------------------------",kisi.numara,kisi.ad,kisi.soyad,kisi.bolum,kisi.adres,kisi.maas); 
    }

    fclose(personel);  

    puts("Bilgiler kaydedildi.\a");
}
  void kayit_ara()
  {
	int ara;
	int i=0;
	FILE *personel;

	personel=fopen("personel.bin","wb");

	printf("\nAradiginiz personelin numarasini giriniz:");
	scanf("%d", &ara);

	while (fscanf(personel,"%d %s %s %s %s %d\n",&kisi.numara, kisi.ad, kisi.soyad, kisi.bolum, kisi.adres, &kisi.maas)!= EOF);
	{
		if (ara==kisi.numara)
		{
			i++;
			if (i>0)
				printf ("Numarasi:%d Adi:%s Soyadi:%s Bolumu:%s Adresi:%s Maas:%d", kisi.numara, kisi.ad, kisi.soyad, kisi.bolum, kisi.adres, kisi.maas);
				printf("\n");
		}
	}
	if (i==0)
	{
		printf ("Bu numaraya ait bir personel bulunmamaktadir.");
}
 fclose(personel);
  }

/*void kayit_degistir()

{

	int degisecek;
	int cevap;
	
	
	printf ("Degistirmek istediginiz personelin numarasini giriniz =");
	scanf ("%d",&degisecek);

	FILE *personelold;
	FILE *personelnew;
	personelold= fopen("personel.bin","r");
	personelnew = fopen("personel1.bin","w+");

	while (fscanf(personelold,"%d %s %s %s %s %d\n",&kisi.numara, kisi.ad, kisi.soyad, kisi.bolum, kisi.adres, &kisi.maas)!= EOF)
	{
		if (degisecek==kisi.numara)
		{
		
			printf ("\nPersonele ait hangi bilgiyi deðistirmek istiyorsunuz numara giriniz?(numara=1, ad=2, soyad=3, bolum=4, adres=5, maas=6 ):");
			scanf("%d",cevap);
		}
			if(cevap==1)
			{
				fprintf(personelnew,"%d",kisi.numara);
				printf("Personelin yeni numarasýný giriniz :");
    			scanf("%s",degisen.numara);
    			fprintf(personelnew,"%d %s %s %s %s %d",degisen.numara,kisi.ad,kisi.soyad,kisi.bolum,kisi.adres,kisi.maas);
			}
			if(cevap==2)
			{
				fprintf(personelnew,"%s",kisi.ad);
				printf("Personelin yeni adini giriniz :");
    			scanf("%s",degisen.ad);
    				fprintf(personelnew,"%d %s %s %s %s %d",kisi.numara,degisen.ad,kisi.soyad,kisi.bolum,kisi.adres,kisi.maas);
			}
				if(cevap==3)
			{
				fprintf(personelnew,"%s",kisi.soyad);
				printf("Personelin yeni soyadini giriniz :");
    			scanf("%s",degisen.soyad);
    				fprintf(personelnew,"%d %s %s %s %s %d",kisi.numara,kisi.ad,degisen.soyad,kisi.bolum,kisi.adres,kisi.maas);
			}
				if(cevap==4)
			{
				fprintf(personelnew,"%s",kisi.bolum);
				printf("Personelin yeni bolumunu giriniz :");
    			scanf("%s",degisen.bolum);
    				fprintf(personelnew,"%d %s %s %s %s %d",kisi.numara,kisi.ad,kisi.soyad,degisen.bolum,kisi.adres,kisi.maas);
			}
				if(cevap==5)
			{
				fprintf(personelnew,"%s",kisi.adres);
				printf("Personelin yeni adresini giriniz :");
    			scanf("%s",degisen.adres);
    				fprintf(personelnew,"%d %s %s %s %s %d",kisi.numara,kisi.ad,kisi.soyad,kisi.bolum,degisen.adres,kisi.maas);
			}
				else
			{
				fprintf(personelnew,"%d",kisi.maas);
				printf("Personelin yeni maasini giriniz :");
    			scanf("%s",degisen.maas);
    				fprintf(personelnew,"%d %s %s %s %s %d",kisi.numara,kisi.ad,kisi.soyad,kisi.bolum,kisi.adres,degisen.maas);
			}
	}
	
    
    fclose(personelold);
	fclose(personelnew);

	remove ("personel.bin");
	rename ("personel1.bin","personel.bin");
}*/

void kayit_degistir(/*char ara[]*/)

{	
	char gecici[20];
	int degisecek;
	FILE *personelold;
	FILE *personelnew;
	personelold = fopen("personel.bin","r");
	personelnew = fopen("personel1.bin","w+");
	
	printf("\nPersonele ait hangi bilgiyi degistireceksiniz?:");
	printf("\nNumara icin [1]");
	printf("\nAd icin [2]");
	printf("\nSoyad icin [3]");
	printf("\nBolum icin [4]");
	printf("\nAdres icin [5]");
	printf("\nMaas icin [6] tuslayin:");
	scanf("%d",&degisecek);
	getchar();
	
	switch(degisecek)
	{
		case 1:
			printf("Personelin degisen numarasý?: ");
			scanf("%d",&degisen.numara);
			fprintf(personelnew,"%d %s %s %s %s %d",degisen.numara,kisi.ad,kisi.soyad,kisi.bolum,kisi.adres,kisi.maas);
			break;
			
		case 2:
			printf("Personelin degisen adi?: ");
			gets(degisen.ad);
			fprintf(personelnew,"%d %s %s %s %s %d",kisi.numara,degisen.ad,kisi.soyad,kisi.bolum,kisi.adres,kisi.maas);
			break;
			
		case 3:
			printf("Personelin degisen soyadi?: ");
			gets(degisen.soyad);
			fprintf(personelnew,"%d %s %s %s %s %d",kisi.numara,kisi.ad,degisen.soyad,kisi.bolum,kisi.adres,kisi.maas);
			break;
			
		case 4:
			printf("Personelin degisen bolumu?:");
			gets(degisen.bolum);
			fprintf(personelnew,"%d %s %s %s %s %d",kisi.numara,kisi.ad,kisi.soyad,degisen.bolum,kisi.adres,kisi.maas);
			break;
			
		case 5:
			printf("Personelin degisen adresi?:");
			gets(degisen.adres);
			fprintf(personelnew,"%d %s %s %s %s %d",kisi.numara,kisi.ad,kisi.soyad,kisi.bolum,degisen.adres,kisi.maas);
			break;
		case 6:
			printf("Personelin degisen maasi?:");
			scanf("%d",&degisen.maas);
			fprintf(personelnew,"%d %s %s %s %s %d",kisi.numara,kisi.ad,kisi.soyad,kisi.bolum,kisi.adres,degisen.maas);
			break;
		default:
			printf("!!!OLMAYAN BÝR SECÝM YAPTÝNÝZ TEKRAR DENEYÝN!!!");
			break;
	}

	if(fprintf(personelnew,"%d %s %s %s %s %d",degisen.numara,degisen.ad,degisen.soyad,degisen.bolum,degisen.adres,degisen.maas));
	{
		printf("Islem Basarili.");
	}
	
	fclose(personelold);
	fclose(personelnew);
}

/*int main()
{
   kayit_ekle();
   kayit_ara();
   kayit_degistir(char ara[]);
    return 0;
}*/
int main ()
{
	int secim;
	FILE *personel;
	while(1)
	{
		printf("\n[1] Kayit Ekleme\n");
		printf("[2] Kayit Arama\n");
		printf("[3] Kayit Degistirme\n");
		printf("[4] Cikis\n");
		printf("Seciminiz : ");
		scanf("%d", &secim);
		getchar();
	
		
		switch(secim)
		{
			case 1:
				kayit_ekle();
				break;
			
			case 2:
				
				kayit_ara();
				break;
			
			case 3:
				kayit_degistir();
				remove ("personel.bin");
				rename ("personel1.bin","personel.bin");
				printf("\n");
				break;
				
			case 4:
				printf("\nCikis Yapildi.");
				exit(1);
				break;
				
			default:
				printf("!!!OLMAYAN BIR SECIM YAPTINIZ TEKRAR DENEYIN!!!\n ");
				break;
		}
	
    }
	
	return 0;
}
