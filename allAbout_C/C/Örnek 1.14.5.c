#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *dosya;
    char metin[80];
    
    dosya = fopen("./Ornek_1.txt", "r");
    if(dosya == NULL)
    {
        printf("Dosya acilamadi\n");
        return -1;
    }
    printf("Dosya acildi\n");

    fgets(metin, 80, dosya);
    printf("%s", metin);
    
    fclose(dosya);
    printf("\nOkuma tamamlandi\n");
    getch();
    return 0;
}
