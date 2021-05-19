#include <stdio.h>
int main()
{
 int *ptam, tam = 33;
 ptam = &tam; /* ptam -> tam */
 printf("&tam = %p\n",&tam);
 printf("ptam = %p\n",ptam);
 printf("\n");
 printf("tam = %d\n",tam);
 printf("*ptam = %d\n",*ptam);
 printf("\n");
 *ptam = 44; /* tam = 44 anlamýnda */
 printf("tam = %d\n",tam);
 printf("*ptam = %d\n",*ptam);
return 0;
}

