#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *dosya;
    char kr = 'A';
    
    dosya = fopen("./Ornek_1.txt", "w");
    if(dosya == NULL)
    {
        printf("Dosya acilamadi\n");
        return -1;
    }
    printf("Dosya acildi\n");

    fputc(kr, dosya);

    fclose(dosya);
    printf("Yazma tamamlandi\n");
    
    getch();
    return 0;
}
