#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char fname[20];
    char str;

    printf("Adja meg a beolvasando file nevet!\n");
    scanf("%s",fname);
    fptr = fopen( fname, "r");
    if( fptr == NULL)
    {
        printf("Hiba a file megnyitasa kozben!\n");
        exit(0);
    }

    /* str = fgetc(fptr);
    while( str != EOF)
    {
        printf("%c", str);
        str = fgetc(fptr);

    }
    */

    char buff[255];

    fgets(buff, 255, fptr);
    printf("1: %s\n", buff);

    fscanf(fptr, "%s", buff);
    printf("2: %s\n", buff);

    fclose(fptr);

    return 0;
}