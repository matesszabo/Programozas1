#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmpfunc(const void * a, const void * b){
    return ( *(int*)a - *(int*)b );
}

int stringcmp(const void * a, const void * b){
    const char *pa = *(const char**)a;
    const char *pb = *(const char**)b;

    return strcmp(pa,pb);
}

int main()
{
    int n;
    int tomb[] = { 15, 11, 1, 13, 5, 9};
    char * tomb2[] = {"alma", "korte", "banan", "narancs"};

    printf("A tomb rendezes elott:\n");
    for( n = 0; n<6; n++){
        printf("%d ", tomb[n]);
    }

    puts("");

    qsort(tomb, 6, sizeof(int), cmpfunc);

    printf("A tomb rendezes utan:\n");
    for( n = 0; n<6; n++){
        printf("%d ", tomb[n]);
    }

    puts("");

    printf("A tomb rendezes elott:\n");
    for( n = 0; n<4; n++){
        printf("%s ", tomb2[n]);
    }

    puts("");

    qsort(tomb2, sizeof(tomb2)/sizeof(char*), sizeof(char*), stringcmp);

    printf("A tomb rendezes utan:\n");
    for( n = 0; n<4; n++){
        printf("%s ", tomb2[n]);
    }

    return 0;
}