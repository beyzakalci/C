#include <stdio.h>
double ortalama(double dizi[], int n);
int main()
{
 double a[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
 double o;
 o = ortalama(a,5);
 printf("Dizinin ortalamasi = %lf\n",o);
return 0;
}
double ortalama(double dizi[], int n)
{
 double *p, t=0.0;
 int i;

 p = dizi; /* veya p = &dizi[0] */
 for(i=0; i<n; i++)
 t += *(p+i);
 return (t/n);
}

