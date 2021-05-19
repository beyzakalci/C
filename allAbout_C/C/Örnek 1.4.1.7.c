#include <stdio.h>
  int main() {
      int carpan1;
      int carpan2;
      int sonuc;
      printf("Ilk carpani giriniz: ");
      scanf("%d",&carpan1);
      printf("Ikinci carpani giriniz: ");
      scanf("%d", &carpan2);
      sonuc= carpan1 * carpan2;
      printf(" %d x %d = %d \n", carpan1, 
                             carpan2, sonuc);
      return 0;
  }
