#include <stdio.h>

typedef struct ogr
{
    int no;
    char *isim;
}ogrenci;

int main(int argc, char const *argv[])
{
    FILE *dosya;
    int secim;
    ogrenci ogrencim, aranacakOgrencim;
    ogrencim.isim = (char *) malloc(sizeof(char) * 20);
    aranacakOgrencim.isim = (char *) malloc(sizeof(char) * 20);

    while (1)
    {
        printf("1- Kayit Girisi\n2- Kayit Arama\n3- Cikis\nSeciminizi Yapin: ");
        scanf("%d", &secim);

        switch (secim)
        {
            case 1:
                dosya = fopen("./Ornek_2.txt", "a+");

                printf("Isim giriniz: ");
                scanf("%s", ogrencim.isim);
                printf("Numara giriniz: ");
                scanf("%d", &ogrencim.no);

                fprintf(dosya, "%s\n%d\n", ogrencim.isim, ogrencim.no);

                fclose(dosya);
                printf("Ogrenci Eklendi!\n");
                getch();
                break;
            case 2:
                dosya = fopen("./Ornek_2.txt", "r");
                printf("Numara giriniz: ");
                scanf("%d", &aranacakOgrencim.no);

                while (!feof(dosya))
                {
                    fscanf(dosya, "%s\n%d\n", ogrencim.isim, &ogrencim.no);
                    if(aranacakOgrencim.no == ogrencim.no)
                    {
                        printf("Ogrenci Bulundu!\n");
                        break;
                    }
                }
                
                printf("Arama Tamamlandi!\n");
                fclose(dosya);
                getch();
                break;
        }

        if(secim == 3)
            break;
    } 
    
    free(ogrencim.isim);
    free(aranacakOgrencim.isim);
    fclose(dosya);
    return 0;
}
