/* Sayının tek veya çift olmasını  kontrol eder. */
#include<stdio.h>
void tek_mi_cift_mi( int sayi )
{if( sayi%2 == 0 )   printf( "%d, cift bir sayidir.\n", sayi );
else  printf( "%d, tek bir sayidir.\n", sayi );}
int main( void )
{int girilen_sayi;  printf( "Lutfen bir sayi giriniz> " );  scanf( "%d",&girilen_sayi );
tek_mi_cift_mi( girilen_sayi );
return 0;}

