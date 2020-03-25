#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

#define MERET 10

void tomb_megfordit(char tomb[], int meret)
{
	for(int i=0; i<meret/2; i++)
	{
		char csere = tomb[meret-1-i];
		tomb[meret-1-i] = tomb[i];
		tomb[i] = csere;
	}
}

int main() {

    char szoveg[10];
    puts("Adja meg a beolvasando szoveget!");
    gets(szoveg);

    printf("strlen(szoveg): %d\n", strlen(szoveg));
    printf("sizeof(szoveg): %d\n", sizeof(szoveg));

    for(int i=0 ; i<MERET; i++){
        printf("szoveg[%d]: %c = %d\n", i, szoveg[i], szoveg[i]);
    }

    char szoveg2[MERET];
    puts("Adjon meg egy legfeljebb 10 karakter hosszu szoveget!");
    fgets(szoveg2,MERET,stdin);

    printf("strlen(szoveg2): %d\n", strlen(szoveg2));
    printf("sizeof(szoveg2): %d\n", sizeof(szoveg2));

    for(int i=0 ; i<MERET; i++){
        printf("szoveg2[%d]: %c = %d\n", i, szoveg2[i], szoveg2[i]);
    }

    char szoveg3[MERET];
    puts("Adjon meg egy legfeljebb 10 karakter hosszu szoveget!");
    scanf("%s",&szoveg3);

    printf("strlen(szoveg3): %d\n", strlen(szoveg3));
    printf("sizeof(szoveg3): %d\n", sizeof(szoveg3));

    for(int i=0 ; i<MERET; i++){
        printf("szoveg3[%d]: %c = %d\n", i, szoveg3[i], szoveg3[i]);
    }

    tomb_megfordit(szoveg,strlen(szoveg));
    
    puts(szoveg);

    return 0;
}