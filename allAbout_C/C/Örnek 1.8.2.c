#include <stdio.h>

void fonk1 (int id1);

void main (void)
{
  int id1;
  id1 = 34;

  fonk1 (id1);

  printf("main() fonksiyonu icinde id1 degisken degeri: %d", id1);
}

void fonk1 (int id1)
{
  id1 = id1 + 27;
  printf("Fonksiyon icinde id1 degisken degeri: %d\n", id1);
}

