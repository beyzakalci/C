#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{	int i;
	int harf= '065' && '090';
	char sifre;
	srand(time(0));
	
	for(i=0;i<10;i++)
	{
		sifre=(char)rand()%26 +97 && rand()%100;
		printf("%c",sifre);
	}
	return 0;
}
