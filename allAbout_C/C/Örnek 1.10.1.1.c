
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *ip;

  ip = (int*) malloc(sizeof(int)); /* 1 */
  *ip = 126;

  printf("%p\n", ip);
  printf("%d", *ip);
  
  free(ip);
  
  return 0;
}

