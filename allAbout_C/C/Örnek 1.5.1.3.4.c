#include <stdio.h>

int main(void)
{
  int id;

  printf("Bir sayi giriniz [1-5]");
  scanf("%d", &id);
  printf("\n");
  switch (id) {
    case 1 :
      printf("Bir ");
    case 2 :
      printf("Ýki ");
    case 3 :
      printf("Uc ");
    case 4 :
      printf("Dort ");
    case 5 :
      printf("Bes ");
  }
  
  return 0;
}

