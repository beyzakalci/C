/*  iki say�y� toplar ve sonucu ekranda g�sterir */
#include <stdio.h>
int topla( int x, int y ){
 return (x+y);
}
int main(void)
{
 int toplam,a,b;
 printf("Iki sayi girin : ");
 scanf("%d %d",&a,&b);
 toplam = topla(a,b);
 printf("%d ve %d nin toplami %d dir.\n", a,b,toplam);
 return 0;
}
