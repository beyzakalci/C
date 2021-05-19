/*
0 ile 99 arasýnda tesadüfi sayýlar üreten 
bir programýn, kaçýncý seferde 61 sayýsýný
bulacaðýný yazan program aþaðýdadýr.
*/
#include<stdio.h>
int main( void )
{
	int i,tesadufi_sayi;
	int deneme_sayisi = 0;
	//while içinde 1 olduðundan sonsuza kadar döngü çalýþýr.
	while( 1 ){
		//tesadufi_sayi deðiþkenine, 0 ile 99 arasýnda 
		//her seferinde farklý bir sayý atanýr.
		//rand( ) fonksiyonu tesadüfi sayý atamaya yarar.
		//mod 100 iþlemiyse, atanacak sayýnýn 0 ile 99
		//arasýnda olmasýný garantiler.
		tesadufi_sayi = rand() % 100;
		//Döngünün kaç defa çalýþtýðýný deneme_sayisi
		//deðiþkeniyle buluruz.
		deneme_sayisi++;
		//Eðer tesadufi sayý 61'e eþit olursa, 
		//döngü kýrýlýp, sonlandýrýlýr.
		if( tesadufi_sayi == 61 ) break;
	}
	printf("Toplam deneme sayisi: %d\n",deneme_sayisi);
	return 0;
}	
