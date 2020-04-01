#include <stdio.h>
#include <string.h>

struct Szemely {
    char nev[50];
    int magassag;
    int testsuly;
    int szuletesEve;
};

typedef struct Szemely szemely;
typedef unsigned char byte;

void printSzemely( struct Szemely szemely){
    printf("A szemely neve: %s\n", szemely.nev);
    printf("A szemely magassaga %d\n", szemely.magassag);
    printf("A szemely testsulya %d\n", szemely.testsuly);
    printf("A szemely szuletesi eve %d\n", szemely.szuletesEve);
}

void printSzemelyPointer( struct Szemely *szemely){
    printf("A szemely neve: %s\n", szemely->nev);
    printf("A szemely magassaga %d\n", szemely->magassag);
    printf("A szemely testsulya %d\n", szemely->testsuly);
    printf("A szemely szuletesi eve %d\n", szemely->szuletesEve);
}

int main()
{
    struct Szemely elek;

    strcpy(elek.nev, "Teszt Elek");
    elek.magassag = 180;
    elek.testsuly = 92;
    elek.szuletesEve = 1985;

    printf("Elek neve: %s\n", elek.nev);
    printf("Elek magassaga %d\n", elek.magassag);
    printf("Elek testsulya %d\n", elek.testsuly);
    printf("Elek szuletesi eve %d\n", elek.szuletesEve);

    printSzemely(elek);

    struct Szemely *szemelyPtr;

    szemelyPtr = &elek;

    printSzemelyPointer(szemelyPtr);

    szemely szemely2;

    strcpy(szemely2.nev, "Teszt Bela");
    szemely2.magassag = 160;
    szemely2.testsuly = 60;
    szemely2.szuletesEve = 1989;

    printSzemely(szemely2);

    byte b = 97;

    printf( " byte: %d\n", b);
    printf( " char: %c\n", b);



    return 0;
}