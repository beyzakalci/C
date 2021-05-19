#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* 
        int dizi[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
        int dizi[4][3] = {{1, 2, 3}, {4}};
    */
    int dizi[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int i;
    int j;
    
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 3; j++)
            printf("%d ", dizi[i][j]);
        printf("\n");
    }

    getch();
    return 0;
}
