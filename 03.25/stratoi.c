#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

#define MERET 10

int main(){
    char szoveg[MERET];
    int szam1;
    puts("Adja meg az elso szamot!");
    gets(szoveg);
    szam1 = atoi(szoveg);

    char muvelet[1];
    puts("Adja meg a muveleti jelet! (+, -, *, /, %)");
    gets(muvelet);

    int szam2;
    puts("Adja meg a masodik szamot!");
    gets(szoveg);
    szam2 = atoi(szoveg);

    switch (muvelet[0])
    {
    case '+':
        printf("A ket szam osszege: %d\n", szam1+szam2);
        break;
    case '-':
        printf("A ket szam kulonbsege: %d\n", szam1-szam2);
        break;
    case '*':
        printf("A ket szam szorzata: %d\n", szam1*szam2);
        break;
    case '/':
        printf("A ket szam hanyadosa %.2f\n", szam1/(float)szam2);
        break;
    case '%':
        printf("Az elso szam masodikkal vett maradeka: %d\n", szam1%szam2);
        break;
    }



    return 0;
}