#include <stdio.h>
#include <stdlib.h>

struct personal {    //PERSONELE AIT DEGISKENLERIN TANIMLANDIGI STRUCT YAPISI
  char isim[15];
  char soyisim[15];
  char bolum[15];
  char adres[15];
  int numara;
  int maas;
}calisan;


void kayit_ekleme()   //KAYIT EKLEME FONKSIYONU
{
	FILE *fp;
	if((fp = fopen("Soru1.bin", "a"))== NULL)
	{
		printf("Dosya acilamadi");
		exit(1);
	}
    printf("Calisanini ismini giriniz =");
    scanf("%s",calisan.isim);
	
	printf("Calisanin soyismini giriniz =");
    scanf("%s",calisan.soyisim);
    
	printf("Calisanin calistigi bolumu giriniz =");
    scanf("%s",calisan.bolum);
    
	printf("Calisanin adresini giriniz =");
    scanf("%s",calisan.adres);
    
	printf("Calisanin numarasini giriniz =");
    scanf("%d",&calisan.numara);
    
	printf("Calisanin maasini giriniz =");
    scanf("%d",&calisan.maas);
    
    printf("\n");
    
	fprintf(fp,"%s %s %s %s %d %d\n",calisan.isim, calisan.soyisim, calisan.bolum, calisan.adres, calisan.numara, calisan.maas);
    fclose(fp);
    			
}



void kayit_ara()     //KAYIT ARAMA FONKSIYONU

{
	int aranan;
	int sayac=0;
	FILE *fp;

	fp=fopen("Soru1.bin","r");

	printf("Aramak istediginiz kaydin numarasini giriniz = \n");
	scanf("%d", &aranan);

	while (fscanf(fp,"%s %s %s %s %d %d\n",calisan.isim,calisan.soyisim,calisan.bolum,calisan.adres,&calisan.numara,&calisan.maas)!= EOF)
	{
		if (aranan==calisan.numara)
		{
			sayac++;
			if (sayac>0)
				printf ("\n%s %s %s %s %d %d\n",calisan.isim,calisan.soyisim,calisan.bolum,calisan.adres,calisan.numara,calisan.maas);
		}
	}
	if (sayac==0)
	{
		printf ("Kayit bulunamadi");
	}
	fclose(fp);
	
}


void kayit_degistir()

{

	int degisecek;
	int degisim_bilgi;
	int say=0;
	
	printf ("Degistirmek istediginiz calisanin numarasini giriniz =");
	scanf ("%d",&degisecek);

	FILE *fpold;
	FILE *fpnew;
	fpold = fopen("Soru1.bin","r");
	fpnew = fopen("Soru1n.bin","w+");

	while (fscanf(fpold,"%s %s %s %s %d %d ",calisan.isim,calisan.soyisim,calisan.bolum,calisan.adres,&calisan.numara,&calisan.maas)!= EOF)
	{
		if (degisecek==calisan.numara)
			printf ("\n %s %s %s %s %d %d  \n\t\tSilindi!\n\n",calisan.isim,calisan.soyisim,calisan.bolum,calisan.adres,calisan.numara,calisan.maas);
		
		else
			fprintf (fpnew,"\n %s %s %s %s %d %d ",calisan.isim,calisan.soyisim,calisan.bolum,calisan.adres,calisan.numara,calisan.maas);
	}
			
	
    printf("Calisanini degistirilmis ismini giriniz =");
    scanf("%s",calisan.isim);
	
	printf("Calisanin degistirilmis soyismini giriniz =");
    scanf("%s",calisan.soyisim);
    
	printf("Calisanin degistirilmis calistigi bolumu giriniz =");
    scanf("%s",calisan.bolum);
    
	printf("Calisanin degistirilmis adresini giriniz =");
    scanf("%s",calisan.adres);
    
	printf("Calisanin degistirilmis numarasini giriniz =");
    scanf("%d",&calisan.numara);
    
	printf("Calisanin degistirilmis maasini giriniz =");
    scanf("%d",&calisan.maas);
    
	fprintf(fpnew,"%s %s %s %s %d %d\n",calisan.isim, calisan.soyisim, calisan.bolum, calisan.adres, calisan.numara, calisan.maas);
    
    fclose(fpold);
	fclose(fpnew);

	remove ("Soru1.bin");
	rename ("Soru1n.bin","Soru1.bin");
}


int main ()
{
	int secim,aranan_kisi,degisecek_kisi;
	FILE *fp;
	while(1)
	{
		printf("\t\tMENU\n");
		printf("[1] Kayit Ekleme\n");
		printf("[2] Kayit Arama\n");
		printf("[3] Kayit Degistirme\n");
		printf("[4] Cikis\n");
		printf("Seciminiz = ");
		scanf("%d", &secim);
	
		
		switch(secim)
		{
			case 1:
				kayit_ekleme();
				break;
			
			case 2:
				kayit_ara(aranan_kisi);
				printf("\n");
				break;
			
			case 3:
				kayit_degistir(degisecek_kisi);
				break;
				
			case 4:
				printf("\t\tCikisiniz yapiliyor...");
				exit(1);
				break;
				
			default:
				printf("Yanlis tuslama yaptiniz, tekrar deneyiniz\n ");
		}
	
    }
	
	return 0;
}
