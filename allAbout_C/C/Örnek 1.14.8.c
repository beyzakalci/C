#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *dosya;
    
    dosya = fopen("./Ornek_3.txt", "w");
    if(dosya == NULL)
    {
        printf("Dosya acilamadi\n");
        return -1;
    }
    printf("Dosya acildi\n");

    fputs("Bu bir dosyadir", dosya);
    fseek(dosya, 3, SEEK_SET);
    fputs("Elma", dosya);

    printf("Islem tamamlandi\n");
    fclose(dosya);
    getch();
    return 0;
}
