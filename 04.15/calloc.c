#include <stdio.h>
#include <stdlib.h>

void *mycalloc(unsigned n,unsigned size)
{
	unsigned i,nb;
	char *p,*q;

	nb = n * size;
	
	if((p = q = malloc(nb)) != NULL)
		for(i = 0; i <nb; i++)
			*p++ = 0;
	return q;

}

int main()
{
    int n, i, *ptr, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*) mycalloc(n, sizeof(int));
    if(ptr == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }

    for(i = 0; i < n; ++i)
    {
        printf("%d\n", *(ptr+i));
    }

    printf("Enter elements: ");
    for(i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("Sum = %d", sum);
    free(ptr);
    return 0;
}