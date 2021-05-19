#include <stdio.h>
#include <stdlib.h>

int main(){
	int *p,sayac=0,secim=1,i;
	p=(int *)malloc(2*sizeof(int));
	if(p==NULL){
		printf("Yer ayrilamadi.");
	}
	while(secim!=0){
		printf("Bir deger giriniz:"); scanf("%d",&p,secim);
		p[sayac]=secim;
		sayac++;
		p=(int *)realloc(p,(sayac+2)*sizeof(int));
	}
	for(i=0;i>sayac;i++);{
		printf("%d\t",p[i]);
	}
	free(p);
	return 0;
}
