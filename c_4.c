#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void tersyazdir(char *sifre)
{
	char i ; 
 int uzunluk=strlen(sifre)-1;  // Uzunlugu bul  - Diziler 0 . dan basladýgýndan uzunlugun bir eksiði
 for(i=uzunluk; i=0;i--)
  {
    printf("%c",sifre[i]);  // Son elemandan baslayarak karakter karakter ekrana basar.
    printf("");                      
  }
}

int main()
{//int gecici;
char sifre[100];
//char sifrelenmis;

//Random karakter ve sayý üretme;
srand(time(NULL));
static int satir,sutun,i,j;
static char matris[100][100];
printf("Sifrenin uzunlugu icin ilk carpimi giriniz \n[or: 8 karakterlik bir sifre isteniyorsa ilk carpim 4 ikinci carpim 2 girilmeli]:"); 
scanf("%d",&satir); 
printf("Sifrenin uzunlugu icin ikinci carpimi giriniz :"); scanf("%d",&sutun);

for(i=0;i<satir;i++)
{
for(j=0;j<sutun;j++)
{

matris[i][j]='1'+rand()%99;

//ürettiðim þifreyi ekrana bastýrma;
printf("%c",matris[i][j]);

//ürettiðim þifreyi 100 elemanlý sifre dizisine atadým
sifre[100]=matris[i][j];

//sifre dizisini tersten yazdýrdým
tersyazdir(sifre);

}
}

/*gecici=matris[i][j];
matris[i][j]=matris[j][i];
matris[j][i]=gecici;*/
//printf("%c",matris[j][i]);
//sifrelenmis=
//scanf("%c",sifrelenmis);
//printf("\nSifrenizin ters cevirme yontemi ile sifrelenmis hali: %c",matris[j][i]);
//printf("\nSifrenizin ters cevirme yontemi ile sifrelenmis hali: \n",sifrelenmis);
//printf("%c",matris[j][i]);
//printf("%d",gecici[0]);

/*	for(j=0;j<sutun;j--)
	{
		printf("%c",matris[j]);
	}
*/

//printf("\n");

return 0;
}

