#include <stdio.h>

int main(void)
{
  int id=1;

  while (id<=100) {
     printf("Bir int deger giriniz: ");
     scanf("%d", &id);
  }
  
  printf("Girilen sayi 100'den buyuk oldugundan donguden ciktiniz!");
 
  return 0;
}
