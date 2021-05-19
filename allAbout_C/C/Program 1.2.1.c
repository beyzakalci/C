#include <stdio.h>

int gid1; /* Ýlk deðer atanmadýðýndan deðeri 0 olur. */
int gid2 = 128;

main()
{
  int id1;
  int id2 = 21;
  id1 = 5;

  printf("Lokal degisken degerleri : %d %d\n", id1, id2);

  fonk1(7);
}

fonk1(int id1) /* Fonksiyon parametre deðiþkeni */
{
  /* Deðiþkenler global olduðundan fonksiyon içinden eriþim saðlanýr. */
  printf("Global degisken degerleri: %d %d\n", gid1, gid2);
  printf("Sayinin karesi: %d", id1*id1);
}
