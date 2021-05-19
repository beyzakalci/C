#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *dosya;
    char kr;
    
    dosya = fopen("./Ornek_1.txt", "r");
    if(dosya == NULL)
    {
        printf("Dosya acilamadi\n");
        return -1;
    }
    printf("Dosya acildi\n");

    kr = fgetc(dosya);
    printf("Okunan karakter = %c\n", kr);

    fclose(dosya);
    printf("Okuma tamamlandi\n");
    getch();
    return 0;
}
