#include <stdio.h>
#include <stdlib.h>

int main(){
	int *p;
	p=(int *)calloc(100,sizeof(int));
	if(p==NULL){
		printf("Yer ayrilamadi.");
	}
	return 0;
}
