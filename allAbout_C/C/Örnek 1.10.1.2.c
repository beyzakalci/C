#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char *cp;

  cp = malloc(40);

  if (!cp) {
      printf("Bellek tahsis hatas�!");
      exit(1);
  }

  printf("Bir karakter dizisi giriniz: ");
  gets(cp);
  printf(cp);
  free(cp);
  
  return 0;
}

