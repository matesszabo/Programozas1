#include <stdio.h>

int calculateLength(char* ch){
    int szamlalo = 0;
    while( *ch != '\0')
    {
        szamlalo++;
        ch++;
    }
    return szamlalo;
}

int main(){

    char str1[50];
    int l;

    printf("Adjon meg egy szot!\n");
    scanf("%s", &str1);

    l = calculateLength(str1);
    printf("A(z) %s szo hossza: %d.\n", str1, l);

    return 0;
}