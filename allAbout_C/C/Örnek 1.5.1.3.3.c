#include <stdio.h>
#include <conio.h>

int main(void)
{
  char cd;
  int id;

  printf("Ekrana yazdirmak istediginiz harfi girin: [A] [B] [C]\n");
  cd = toupper(getch());

  printf("Ekrana kac kez yazdirmak istersiniz?: [1] [3] [5]");
  scanf("%d", &id);

  switch(id) {
     case 1:
        printf("%c", cd);
        break;
     case 3:
        printf("%c %c %c", cd, cd, cd);
        break;
     case 5:
        printf("%c %c %c %c %c", cd, cd, cd, cd, cd);
        break;
  }
  
  return 0;
}

