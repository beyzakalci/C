#include <stdio.h>

struct yap {
  char cdizi1[15];    /* �sim      */ 
  char cdizi2[15];    /* Soyad�    */
  char cdizi3[15];    /* Memleketi */
  char cdizi4[15];    /* B�l�m�   */
  int id;             /* Ya��      */
} yd;

int main(void)
{
  printf("Adi: ");
  gets(yd.cdizi1);
  printf("Soyadi: ");
  gets(yd.cdizi2);
  printf("Memleketi: ");
  gets(yd.cdizi3);
  printf("Bolumu: ");
  gets(yd.cdizi4);
  printf("Yasi: ");
  scanf("%d", &yd.id);
  printf("%s %s %s %s %d", yd.cdizi1, yd.cdizi2, yd.cdizi3, yd.cdizi4, yd.id);
  
  return 0;
}

