#include <stdio.h>

int gid1; /* �lk de�er atanmad���ndan de�eri 0 olur. */
int gid2 = 128;

main()
{
  int id1;
  int id2 = 21;
  id1 = 5;

  printf("Lokal degisken degerleri : %d %d\n", id1, id2);

  fonk1(7);
}

fonk1(int id1) /* Fonksiyon parametre de�i�keni */
{
  /* De�i�kenler global oldu�undan fonksiyon i�inden eri�im sa�lan�r. */
  printf("Global degisken degerleri: %d %d\n", gid1, gid2);
  printf("Sayinin karesi: %d", id1*id1);
}
