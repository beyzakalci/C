#include<stdio.h>
int main( void )
{
	// int tipinde deðiþken 
	// tanýmlýyoruz:
	int xyz = 10, k;
	// int tipinde pointer
	// tanýmlýyoruz:  
	int *p;

	// xyz deðiþkeninin adresini 
	// pointer'a atýyoruz. 
	// Bir deðiþken adresini '&'
	// iþaretiyle alýrýz.
	p = &xyz;
	
	// k deðiþkenine xyz'nin deðeri 
	// atanýr. Pointer'lar deðer tutmaz.
	// deðer tutan deðiþkenleri iþaret 
	// eder. Baþýna '*' koyulduðunda, 
	// iþaret ettiði deðiþkenin deðerini 
	// gösterir. 
	k = *p;
	
	return 0;
}
