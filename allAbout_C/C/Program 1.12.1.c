#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
  int y = 5;  double x = 1.5;  double ondalik;   double tam;  double deger = 0.5;  double pi = 3.14;
    printf("e uzeri %d = %f\n", y, exp(y)); //�ss� hesaplar.
    printf("%d'nin karekoku = %f\n", y, sqrt(y)); //karek�k hesaplar.
    printf("%d'nin karesi = %f\n", y, pow(y, 2)); //karesini hesaplar.
    printf("log(%d) = %f\n", y, log(y)); //logaritma hesaplar.
    printf("floor(%f) = %f\n", x, floor(x)); // alt onlu�a yuvarlar.
    printf("ceil(%f) = %f\n", x, ceil(x)); //�st onlu�a yuvarlar.
    printf("fabs(-5) = %f\n", fabs(-5)); //negatifi pozitife d�nd�r�r.
    ondalik = modf(x, &tam); 
    printf("Ondalik = %f, Tam = %f\n", ondalik, tam); //ondal�k ve tam k�sm� ay�r�r.
    printf("fmod(57.8, 5.5) = %f\n", fmod(57.8, 5.5)); // modunu al�r.
    printf("Cos(%f) = %f\n", deger, cos(deger) * 180 / pi); //cosin�s hesaplar.
    printf("Sin(%f) = %f\n", deger, sin(deger) * 180 / pi); //sin�s hesaplar.
    printf("Cosh(%f) = %f\n", deger, cosh(deger) * 180 / pi); // hiperbolik cosin�s hesaplar.
    printf("Sinh(%f) = %f\n", deger, sinh(deger) * 180 / pi); // hiperbolik sin�s hesaplar.
    printf("Tan(%f) = %f\n", deger, tan(deger) * 180 / pi); // tanjant hesaplar.
    getch();
    return 0;
}

