#include <stdio.h>
int main()
{
	int character , totalword;
	char word;
		printf("Nokta ile biten cumle giriniz : ");
		scanf("%c", &word);
		totalword=0;
		character=0;
		while(word!='.')
		{
			character++;
			if(word == ' ')
			totalword++;
			scanf("%c", &word);
		}
		printf("Cumlede '%d' tane karakter var.", character+1);
		printf("\nCumlede '%d' tane kelime var.", totalword+1);
		getch();
		return 0;
}
