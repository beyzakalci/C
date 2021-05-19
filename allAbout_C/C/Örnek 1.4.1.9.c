#include<stdio.h>
int main( void )
{
	float sayi1,sayi2,ortalama;
	printf("Iki sayi giriniz> ");
	scanf("%f%f",&sayi1,&sayi2);
	ortalama = ( sayi1 + sayi2 ) / 2;
	printf("Ortalama sonucu: %f'dir",ortalama);
	return 0;
}
