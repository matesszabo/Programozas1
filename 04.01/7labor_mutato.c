#include <stdio.h>

int main(){

    int szam = 10;
    int *p;

    p = &szam;

    printf("A valtozo memoriacime: %X\n", &szam);
    printf("A p valtozoban tarolt memoriaertek: %x\n", p);
    printf("A p valtozo erteke %d\n", *p);

    szam += 10;

    printf("A p valtozo erteke %d\n", *p);

    *p += 10;

    printf("A p valtozo erteke %d\n", *p);
    printf("A p valtozo erteke %d\n", szam);

    int *ptr = NULL;

    printf("A ptr valtozoban tarolt memoriaertek: %x\n",ptr);

    return 0;
}