#include <stdio.h>
#include <stdlib.h>

void fonk1(int bos[], int sol, int orta, int sag)

{	
	int x, y, z;
	int b1 = orta - sol + 1; //dizinin ortanca elemanýndan soldaki elemanlarý çýkarýyoruz saðdaki elemanlar kalýyor.
	int b2 = sag - orta;   
	
	int s1[b1], s2[b2];
	
	for(x=0; x<b1; x++)
	s1[x]=bos[sol+x];
	
	for(y=0;y<b2;y++)
	s2[y]=bos[orta+1+y];
	
x=0;
y=0;
z=sol;
	
	while(x<b1 && y<b2)
	{
		if(s1[x]<=s2[y])
		{
			bos[z]=s1[x];
			x++;
		}
		else
		{
			bos[z]=s2[y];
			y++;
		}
		z++;
	}
	while(x<b1)
	{
		bos[z]=s1[x];
		x++;
		z++;
	}
	
	while(y<b2)
	{
		bos[z]=s2[y];
		y++;
		z++;
	}
}

void fonk2(int bos[], int sol, int sag)
{
	if(sol < sag)
	{
		int orta = sol+(sag-sol)/2;
		
		fonk2(bos, sol, orta);
		fonk2(bos, orta+1, sag);
		
		fonk1(bos, sol, orta, sag);
	}
}

void fonk3(int siralanmis[],int boyut)
{
	int x;
		for(x=0;x<boyut;x++)
	printf("%d ",siralanmis[x]);
	printf("\n");
}

int main()
{
	int sure[] = {45 , 13 , 5 , 2 , 14 , 30 , 23 , 17 , 10 , 36};  //konuþma sürelerini dakika cinsinden yazdýk.
	int sure1 = sizeof(sure)/sizeof(sure[0]);
	
	printf("Siralanmamis hali: \n");
	fonk3(sure, sure1);
	
	fonk2(sure, 0, sure1-1);
	
	printf("\nSiralanmis hali: \n");
	fonk3(sure, sure1);
	return 0;
}


	
