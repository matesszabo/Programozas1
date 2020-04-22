#include <stdio.h>
#include <string.h>


int main()
{
    char hatarolok[100] = "Ez - a - szoveg - hatarolokarakterekkel - van - elvalasztva";

    const char s[2] = "-";
    char* delim = "-";
    char* tok;

    tok = strtok(hatarolok, delim);

    while (tok != 0)
    {
        printf(" %s\n", tok);

        tok = strtok(NULL, delim);
    }
    

    return 0;
}