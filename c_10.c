
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dg;           /* dosya göstericisi */
    const int n = 2;   /* öðrenci sayýsý    */
    char  ad[10];
    int   no, Not, i=0;

    dg = fopen("ogrenci", "wb");

    if(  dg == NULL )
      puts("ogrenci.txt dosyasi acilmadi. !\n"), exit(1);

    puts("2 ogrenciye ait bilgileri girin:");

    while( i++<n )
    {
      printf("%d. ogrencinin numarasi: ",i); scanf("%d",&no);
      printf("%d. ogrencinin adi     : ",i); scanf("%s",ad);
      printf("%d. ogrencinin notu    : ",i); scanf("%d",&Not);
      printf("\n");

      fprintf(dg,"%5d %10s %3d\n",no,ad,Not); /* verileri formatlý yaz! */
    }

    /* dosyayý kapat */
    fclose(dg);  

    puts("Bilgiler kaydedildi.\a");

 return 0;
}
