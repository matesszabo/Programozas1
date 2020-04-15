#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *ptr, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));
 
    // if memory cannot be allocated
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
  

    return 0;
}