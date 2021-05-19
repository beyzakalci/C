
#include <stdio.h>

int main(void)
{
  struct yap {
    int id;
    char cd;
  } yd;

  int id = 21;

  yd.id = 192;
  yd.cd = 'A';

  printf("%d %d %c", id, yd.id, yd.cd);
  
  return 0; 
}

