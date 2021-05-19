#include <stdio.h>

int main(void)
{
  int id;

  printf("Bir sayi giriniz [1-5]");
  scanf("%d", &id);
  printf("\n");
  switch (id) {
    case 1 :
      printf("Bir "); break;
    case 2 :
      printf("Ýki "); break;
    case 3 :
      printf("Uc "); break;
    case 4 :
      printf("Dort "); break;
    case 5 :
      printf("Bes "); break;
  }
  
  return 0;
}

