#include <stdio.h>
#include <conio.h>
#include <string.h>
void main ()
{
	char sesli[]="aeiýoöuü",k[50],k1[50]="",k2[50]="";
	int i,j,kon,s1=-1,s2=-1;
	//clrscr();
	printf("kucuk harflerle kelime: ");
	gets(k);
	for(i=0; i<strlen(k);i++)
	{
		kon=0;
		for(j=0; j<8; j++)
		if(k[i] == sesli[j])
		{
			kon=1;
			break;
		}
	
	if(kon == 1) 
	{
		s1++;
		k1[s1]=k[i];
	}
	else 
	{
		s2++;
		k2[s2]=k[i];
	}
	}
	printf("\n sesli harflerden kelime : %s\n",k1);
	printf("\n sessiz harflerden kelime : %s\n",k2);
	getch();
}
