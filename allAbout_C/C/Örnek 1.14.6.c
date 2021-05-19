#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *dosya;
    char metin[80] = "Lab Dersi";
    
    dosya = fopen("./Ornek_1.txt", "a+");
    if(dosya == NULL)
    {
        printf("Dosya acilamadi\n");
        return -1;
    }
    printf("Dosya acildi\n");

    fputs("\n", dosya);
    fputs(metin, dosya);
    
    fclose(dosya);
    printf("%s yazildi\n", metin);
    getch();
    return 0;
}
