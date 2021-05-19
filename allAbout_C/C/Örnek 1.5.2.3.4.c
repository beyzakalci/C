#include <stdio.h>
int main(void)
{int id1, id2, id3=3;
 printf("do while dongusu ile yazdirma:\n\n");  
 id2 = 0;
 do { id1=1;
        do {
        printf("%d ", id1++);  } 
while (id1<=10);  printf("\n"); } 
while (++id2<id3);  printf("\nwhile dongusu ile yazdirma:\n\n");  
 id2 = 0;
  while (id2++<id3) {
     id1=1;
     while (id1<=10) {printf("%d ", id1++); } 
     printf("\n"); } 
 printf("\nfor dongusu ile yazdirma:\n\n");  
 for (id2=0; id2<id3; id2++) {
       for (id1=1; id1<=10; id1++) { printf("%d ", id1);  } 
       printf("\n");}
  return 0;
}

