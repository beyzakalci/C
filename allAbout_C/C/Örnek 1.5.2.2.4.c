#include <stdio.h>
#include <conio.h>

int main(void)
{
  char cd;

  cd = 'a';

  while (cd != 'c') {
     printf("Bir harf giriniz: ");
     cd = getch();
     printf("%c\n", cd);
  }
 
  printf("c harfini girdiniz ve donguden ciktiniz!");
 
  return 0;
}

