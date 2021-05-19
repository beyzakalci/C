#include <stdio.h>

main()
{
    char tamad[10];         // Bir karakter dizisi tanimlayalim //
    tamad[0] = 'B';
    tamad[1] = 'E';
    tamad[2] = 'Y';
    tamad[3] = 'Z';
    tamad[4] = 'A';
    tamad[5] = 'K';
    tamad[6] = 'A';
    tamad[7] = 'L';
    tamad[8] = 'C';
    tamad[9] = 'I';             // Bos karakter - stringin sonu //
    printf("tamadi %s dir. \n",tamad);
    printf("Icinden bir karakter: %c\n",tamad[2]);
    printf("Tamadinin bir parcasi: %s \n",&tamad[3]);
}
