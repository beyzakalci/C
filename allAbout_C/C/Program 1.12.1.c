#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
  int y = 5;  double x = 1.5;  double ondalik;   double tam;  double deger = 0.5;  double pi = 3.14;
    printf("e uzeri %d = %f\n", y, exp(y)); //üssü hesaplar.
    printf("%d'nin karekoku = %f\n", y, sqrt(y)); //karekök hesaplar.
    printf("%d'nin karesi = %f\n", y, pow(y, 2)); //karesini hesaplar.
    printf("log(%d) = %f\n", y, log(y)); //logaritma hesaplar.
    printf("floor(%f) = %f\n", x, floor(x)); // alt onluða yuvarlar.
    printf("ceil(%f) = %f\n", x, ceil(x)); //üst onluða yuvarlar.
    printf("fabs(-5) = %f\n", fabs(-5)); //negatifi pozitife döndürür.
    ondalik = modf(x, &tam); 
    printf("Ondalik = %f, Tam = %f\n", ondalik, tam); //ondalýk ve tam kýsmý ayýrýr.
    printf("fmod(57.8, 5.5) = %f\n", fmod(57.8, 5.5)); // modunu alýr.
    printf("Cos(%f) = %f\n", deger, cos(deger) * 180 / pi); //cosinüs hesaplar.
    printf("Sin(%f) = %f\n", deger, sin(deger) * 180 / pi); //sinüs hesaplar.
    printf("Cosh(%f) = %f\n", deger, cosh(deger) * 180 / pi); // hiperbolik cosinüs hesaplar.
    printf("Sinh(%f) = %f\n", deger, sinh(deger) * 180 / pi); // hiperbolik sinüs hesaplar.
    printf("Tan(%f) = %f\n", deger, tan(deger) * 180 / pi); // tanjant hesaplar.
    getch();
    return 0;
}

