#include <stdio.h>
#include <conio.h>
int main(void)
{	int id;  char cd;
 printf("Yandaki sayilardan birini giriniz: [1] [2] [3]");   scanf("%d", &id);
 switch (id) {
        case 1 :  printf("Yandaki harflerden birini giriniz: [A] [B]\n");
          cd = toupper (getch());
          switch (cd) {
             case 'A':   fonk1();     break;
             case 'B':    fonk2();    break;
             default :
               printf("Belirtilen harflerden birini girmediniz!\n");} break;
        case 2 : printf("2 numarali secenegi sectiniz!\n");    break;
        case 3 :   printf("3 numarali secenegi sectiniz!\n");   break;
default :
          printf("Verilen seceneklerden birini girmediniz!\n");}  return 0;}
fonk1()
{printf("1 numarali secenek icinde A harfini girdiniz!\n");}
fonk2()
{printf("1 numarali secenek icinde B harfini girdiniz!\n");}

