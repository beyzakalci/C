#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dg;     /* dosya göstericisi */
	int c;        /* personel sayýsý    */
    char  ad[10], soyad[10], adres[20], bolum[20];
    int   numara, maas, i=0;

    dg = fopen("personel", "wb");

    if(  dg == NULL )
      puts("ogrenci.txt dosyasi acilmadi. !\n"), exit(1);

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

      fprintf(dg,"%d    %s    %s   %s   %s   %d \n",numara,ad,soyad,bolum,adres,maas); /* verileri formatlý yaz! */
    }

    /* dosyayý kapat */
    fclose(dg);  

    puts("Bilgiler kaydedildi.\a");

 return 0;
}
