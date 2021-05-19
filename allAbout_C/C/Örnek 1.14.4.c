#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *dosya;
    char kr;
    int sayi = 0;
    
    dosya = fopen("./Ornek_1.txt", "r");
    if(dosya == NULL)
    {
        printf("Dosya acilamadi\n");
        return -1;
    }
    printf("Dosya acildi\n");

    printf("Aradiginiz karakteri giriniz: ");
    scanf("%c", &kr);

    while (!feof(dosya))
        if(fgetc(dosya) == kr)
            sayi++;
    
    printf("Karakterden %d tane bulunmaktadir", sayi);
    
    fclose(dosya);
    printf("\nOkuma tamamlandi\n");
    getch();
    return 0;
}
