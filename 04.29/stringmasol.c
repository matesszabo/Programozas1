#include <stdio.h>
#include <string.h>

void stringMasol(char s1[], char s2[], int index)
{
    s2[index] = s1[index];

    if( s1[index] == '\0')
        return;

    stringMasol(s1, s2, index + 1);

    //Programozas 1, , 0
    //Programozas 1, P, 0 // masol(s1,s2,1)
    //Programozas 1, P, 1
    //Programozas 1, Pr, 1 // masol(s1,s2,2)
}

int main()
{
    char s1[100] = "Programozas 1";
    char s2[100] = "";

    stringMasol(s1, s2, 0);
    printf("%s\n", s2);

    return 0;
}