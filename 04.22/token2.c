#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *fptr;
    char fname[20];
    char* year[1000];
    char* flood[1000];
    char* token;
    char* delim = ",";

    printf("Adja meg a beolvasando file nevet!\n");
    scanf("%s", fname);
    fptr = fopen( fname, "r");
    if( fptr == NULL)
    {
        printf("Hiba a file megnyitasa kozben!\n");
        exit(0);
    }

    char buff[255];
    int i=0;

    while ( fgets(buff, 255, fptr) != NULL )
    {
        token = strtok( buff, delim);
        if( token != NULL)
            year[i] = token;

        token = strtok( NULL, delim);
        if( token != NULL)
            flood[i] = token;

        printf("sor: %s, %s\n", year[i], flood[i]);
        i++;
    }

    fclose(fptr);
    


    return 0;
}