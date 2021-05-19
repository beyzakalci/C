#include<stdio.h>
int main( void )
{
	int i;
	i = 0;
	for( ; i < 10; ) {
		printf("%2d: Merhaba Dunya\n",(i+1));
		i = i + 1;
	}
	return 0;
}
