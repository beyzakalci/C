#include <stdio.h>

int main(void)
{
  int id1;

  printf("Bir int deger giriniz: ");
  scanf("%d", &id1);

  if(id1 > 0 && id1 <= 100) printf("Girdiginiz sayi 1-100 arasindadir!\n");

  if(id1 > 0 && id1 <= 100) printf("Girdiginiz sayi 1-100 arasindadir!\n");
  else printf("Girdiginiz sayi 100'den buyuktur!\n");
  
  if(id1 > 0 && id1 <= 100) printf("Girdiginiz sayi 1-100 arasindadir!\n");
  else if(id1 > 100 && id1 <= 200) printf("Girdiginiz sayi 100-200 arasindadir!");
  else if(id1 > 200 && id1 <= 300) printf("Girdiginiz sayi 200-300 arasindadir!");
  else printf("Girdiginiz sayi 300'den buyuktur!");
  
  return 0;
  }
