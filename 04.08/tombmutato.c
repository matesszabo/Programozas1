#include <stdio.h>
#include <windows.h>

int main(){

    int tomb[5];
    int atlag = 0;

    for (int i =0; i<5; i++)
    {
        printf("Add meg a(z) %d. szamot!\n",i+1);
        scanf("%d", tomb+i);
    }

    printf("A te szamaid: \n");
    for (int i = 0; i<5; i++)
        printf("%d ", *(tomb + i));

    for (int i = 0; i<5; i++)
        atlag += *(tomb + i);

    atlag /= 5;

    printf("A szamok atlaga: %d\n", atlag);




    return 0;
}