#include <stdio.h>

int kivono(int szam1, int szam2)
{
    int ertek;
    while( szam1 >= 0)
    {
        szam1 = szam1 - szam2;
    }
    ertek = szam1;
    return ertek;
}

int main()
{
    int szam1, szam2, ertek;
    printf("Adja meg az elso szamot!\n");
    scanf("%d", &szam1);

    printf("Adja meg a masodik szamot!\n");
    scanf("%d", &szam2);

    ertek = kivono(szam1,szam2);
    printf("Az elso 0-tol kisebb szam: %d\n", ertek);

    return 0;
}