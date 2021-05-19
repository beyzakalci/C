#include <stdio.h>
#include <conio.h>
int main(void)
{ int id1, id2, id3;
  char cd;
  printf("Ekrana sayi yazdirma!\n");  printf("[A] 1-50 [B] 1-100 [C] 1-150 [D] 1-200\n");
  do {printf("Yapacaginiz islemi gosteren harfi giriniz: ");
     cd = toupper(getche());
     printf("\n");} while (cd!='A' && cd!='B' && cd!='C' && cd!='D');
  do {printf("Kac sayi aralikla yazilmasini tercih edersiniz? [1-10]: ");  scanf("%d", &id1);} 
while (id1>10);
  switch (cd) {
 case 'A': id2 = 50; break;
 case 'B':  id2 = 100;  break;
 case 'C': id2 = 150;  break;
 case 'D': id2 = 200;  break; }
  id3 = 1;
  do {printf("%d ", id3);
     id3 = id3+id1; } 
while (id3<=id2);
  return 0;}


