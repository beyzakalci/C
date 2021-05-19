#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char ilk[10] = "Bilgi";
    char son[10] = "merkezi";
    char birlesim[20] = "";

    printf("%s %s\n", ilk, son);
    
    strcat(birlesim, ilk);
    printf("%s\n", birlesim);

    strcat(birlesim, " ");
    printf("%s\n", birlesim);
    
    /* strcat(birlesim, son); */
    strncat(birlesim, son, 3);
    printf("%s\n", birlesim);
    
    getch();
    return 0;
}
