#include <stdio.h>
#define diziBoyutu 10

int main(int argc, char const *argv[])
{
    FILE *dosya;
    int dizi[diziBoyutu] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int okunanDizi[diziBoyutu];
    int i;

    dosya = fopen("./Ornek.dat", "wb");
    if(dosya == NULL)
    {
        printf("Dosya acilamadi\n");
        return -1;
    }
    printf("Dosya acildi\n");

    fwrite(dizi, sizeof(int), diziBoyutu, dosya);
    printf("Yazma tamamlandi\n");
    fclose(dosya);
    
    getch();
    dosya = fopen("./Ornek.dat", "rb");

    fread(okunanDizi, sizeof(int), diziBoyutu, dosya);
    for (i = 0; i < diziBoyutu; i++)
        printf("%d\n", okunanDizi[i]);
    
    getch();
    return 0;
}
