#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    char str[1000];
    FILE *fptr;

    fptr = fopen("test.txt","w");
    if( fptr == NULL)
    {
        printf("Hiba a file megnyitasa kozben!\n");
        exit(1);
    }

    fputc('c', fptr);
    printf("Add meg a fileba irando szoveget!\n");
    fgets(str, sizeof str, stdin);
    fprintf(fptr, "%s", str);
    fprintf(fptr, "%s", str);

    fclose(fptr);
    printf("A file letrehozasa sikeresen megtortent!\n");


    return 0;
}