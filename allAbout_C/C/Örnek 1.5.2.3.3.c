#include <stdio.h>
#include <conio.h>

int main(void)
{
  char cd;

  printf("Bir karakter giriniz:\n");
  do {
     cd = getch();
     printf("Girdiginiz karakter: %c ASCII Kodu: %d\n", cd, cd);
  } while (cd!='\r');
 
  return 0;
}

