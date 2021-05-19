#include <stdio.h>

int main(int argc, char const *argv[])
{
    int dizi[5] = {4, 12, 9, 152, 124};
    int min = dizi[0];
    int max = dizi[0];
    int i;

    printf("Dizi Min Max\n");

    for(i = 1; i < 5; i++)
    {
        if(dizi[i] > max)
            max = dizi[i];
        if(dizi[i] < min)
            min = dizi[i];
        printf("%d - %4d - %4d\n", dizi[i], min, max);
    }

    printf("Minimun = %d\nMaksimum = %d", min, max);
    getch();
    return 0;
}
