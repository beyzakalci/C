#include<stdio.h>
int main( void )
{
	// int tipinde de�i�ken 
	// tan�ml�yoruz:
	int xyz = 10, k;
	// int tipinde pointer
	// tan�ml�yoruz:  
	int *p;

	// xyz de�i�keninin adresini 
	// pointer'a at�yoruz. 
	// Bir de�i�ken adresini '&'
	// i�aretiyle al�r�z.
	p = &xyz;
	
	// k de�i�kenine xyz'nin de�eri 
	// atan�r. Pointer'lar de�er tutmaz.
	// de�er tutan de�i�kenleri i�aret 
	// eder. Ba��na '*' koyuldu�unda, 
	// i�aret etti�i de�i�kenin de�erini 
	// g�sterir. 
	k = *p;
	
	return 0;
}
