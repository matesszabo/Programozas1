#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct termek
{
    char nev[16];
    float ar;
};

int struct_cmp_by_ar(const void *a, const void *b)
{
    struct termek *ia = (struct termek *)a;
    struct termek *ib = (struct termek *)b;
    return (int) (100.f*ia->ar - 100.f* ib->ar);
}

int struct_cmp_by_nev(const void *a, const void *b)
{
    struct termek *ia = (struct termek *)a;
    struct termek *ib = (struct termek *)b;
    return strcmp(ia->nev, ib->nev);
}

void print_struct_arrayt(struct termek *array, int len)
{
    int i;

    for(i = 0 ; i<len; i++)
        printf("nev: %s \t ar: %.2f\n", array[i].nev, array[i].ar);

    puts(" ");
}


int main(){

    struct termek structs[] = {{"mp3 lejatszo", 299.0f}, {"televizio", 2200.0f},
                                {"notebook", 1300.0f}, {"telefon", 499.0f},
                                {"blue-ray", 150.0f}, {"gyufa", 0.2f}};

    int structs_len = sizeof(structs) / sizeof(struct termek);

    print_struct_arrayt(structs,structs_len);

    qsort(structs, structs_len, sizeof(struct termek), struct_cmp_by_ar);

    print_struct_arrayt(structs,structs_len);

    qsort(structs, structs_len, sizeof(struct termek), struct_cmp_by_nev);

    print_struct_arrayt(structs,structs_len);



    return 0;
}
