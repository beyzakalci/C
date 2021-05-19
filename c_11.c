#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct personel{
	int numara;
	int maas;
	char ad[10];
	char soyad[10];
	char bolum[20];
	char adres[50];

}personel;


int main()
{	 FILE *dg;     /* dosya göstericisi */
	int c;        /* personel sayýsý    */
	int i=0;
	int secim;
	int numara;
	int maas;
	char ad[10];
	char soyad[10];
	char bolum[20];
	char adres[50];
	

		printf("[1] Yeni Kayit\n");
		printf("[2] Kayit Ara\n");
		printf("[3] Kayit Degistir\n");
		printf("[4] Cikis\n");
		printf("Yapmak istediginiz islemi seciniz: ");
		scanf("%d",&secim);
		
		if (secim == 1){
		dg = fopen("personel", "wb");

    if(  dg == NULL )
      puts("personel.txt dosyasi acilmadi. !\n"), exit(1);

    puts("kac personel kayit edeceksiniz:");
    scanf("%d",&c);
    
		while( i++<c )
    {
      printf("%d. personelin numarasi: ",i); scanf("%d",&numara);
      printf("%d. personelin adi     : ",i); scanf("%s",ad);
      printf("%d. personelin soyadi    : ",i); scanf("%s",soyad);
      printf("%d. personelin bolumu(!bosluk kullanmayin!)   :",i); scanf("%s",bolum);
      printf("%d. personelin adresi(!bosluk kullanmayin!)   :",i); scanf ("%s",adres);
      printf("%d. personelin maasý   :",i); scanf("%d",&maas);
      printf("\n");

      fprintf(dg,"Numara: %d    \nÝsim: %s   \nSoyisim: %s  \nBolum: %s  \nAdres: %s  \nMaas: %d ",numara,ad,soyad,bolum,adres,maas); 
    }

    /* dosyayý kapat */
    fclose(dg);  

    puts("Bilgiler kaydedildi.\a");
}
		
		 if(secim == 2){
                 FILE *fp=fopen("kayit","r+b");
                 char ad[10];
                 printf("aranan ismi giriniz:");
                 scanf("%s",ad);
                 while(!feof(fp)){
                   fscanf(fp,"%s %s %d",personel.ad,personel.bolum,personel.numara);
                   if(strcmp(personel.ad,ad)==0){
                       printf("%s %s %d\n", personel.ad,personel.bolum,personel.numara);
                   }                            
                 }     
                 fclose(fp);    
        }
	
	return 0;
}
