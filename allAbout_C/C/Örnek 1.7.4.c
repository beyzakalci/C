#include <stdio.h>

int main(int argc, char const *argv[])
{
    int dizi[5] = {5, 10, 2, 3, 2};
    int min = dizi[0];
    int max = dizi[0];
    int sayi;
    int i;
    
    printf("Sayi giriniz: ");
    scanf("%d", &sayi);

    for(i = 0; i < 5; i++)
        if(sayi == dizi[i])
            printf("Sayi = %d dizi[] = %d, i = %d. index", sayi, dizi[i], i + 1);

    getch();
    return 0;
}
