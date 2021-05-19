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

    while (!feof(dosya))
    {
        kr = fgetc(dosya);
        printf("%c", kr);
    }
    
    fclose(dosya);
    printf("\nOkuma tamamlandi\n");
    getch();
    return 0;
}
