#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct termek {
    int azonosito;
    char* nev;
    int kapcsolodo[3];
} Termek;

int main()
{

    Termek tomb[10] = {
        {0,"alma",{1,2,3}},
        {1,"korte",{2,3,4}},
        {2,"banan",{1,5,6}},
        {3,"kiwi",{0,2,5}},
        {4,"narancs",{0,3,7}},
        {5,"citrom",{0,1,2}},
        {6,"ananasz",{2,4,9}},
        {7,"mandarin",{3,4,6}},
        {8,"mango",{2,6,9}},
        {9,"grapefruit",{5,7,8}}
    };

    Termek ajanlasok[20];
    char azonositok[20];
    char* delim = ",";
    int ajanlasszam = 0;

    printf("Adja meg, mely termekeket vasarolta meg vesszovel elvalasztva!\n");
    scanf("%s", azonositok);

    char* token;

    token = strtok(azonositok, delim);

    while( token != NULL)
    {
        printf("Token beolvasva: %s\n", token);
        Termek keresett;
        for(int i=0; i<10; i++)
        {
            if( tomb[i].azonosito == atoi(token))
            {
                keresett = tomb[i];
                break;
            }
        }

        for(int i=0; i< sizeof(keresett.kapcsolodo)/sizeof(int); i++)
        {
            printf("Keresetthez kapcsolodo: %s, %d\n", keresett.nev, keresett.kapcsolodo[i]);
            for(int j =0; j<10; j++)
            {
                if(tomb[j].azonosito == keresett.kapcsolodo[i])
                {
                    ajanlasok[ajanlasszam] = tomb[j];
                    ajanlasszam++;
                    break;
                }
            }

        }
        token = strtok (NULL, delim);
    }

    printf("Ajanlasok: \n");
    for(int i=0; i<ajanlasszam; i++)
    {
        printf("%s\n", ajanlasok[i].nev);
    }


    return 0;
}