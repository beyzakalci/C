
#include <stdio.h>
#include <conio.h>

int main(void)
{
  char cd;

  cd = 'a';

  do {
     printf("Bir harf giriniz: ");
     cd = getch();
     printf("%c\n", cd);
  } while (cd != 'c');

  printf("c harfini girdiniz ve donguden ciktiniz!");
 
  return 0;
}

