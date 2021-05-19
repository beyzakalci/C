#include <stdio.h>

int main(int argc, char const *argv[])
{
    int dizi[5] = {2, 5, 8, 9, 5};
    int sayi;
    int gecici;
    int i;

    for(i = 0; i < 5 / 2; i++)
    {
        gecici = dizi[i];
        dizi[i] = dizi[4 - i];
        dizi[4 - i] = gecici;
    }
    for(i = 0; i < 5; i++)
        printf("%d ", dizi[i]);
    
    getch();
    return 0;
}
