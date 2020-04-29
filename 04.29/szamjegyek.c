#include <stdio.h>

int getOsszeg(int n)
{
    int sum =0;
    while( n != 0)
    {
        sum = sum + n % 10;
        n = n/10;
    }
    return sum;
}

int getOsszegRekurziv(int n)
{
    if (n == 0)
        return 0;
    return (n % 10 + getOsszegRekurziv(n / 10)); 
    // 7 + getOsszegRekurziv(68) // 7 + 14
    // 8 + getOsszegRekurziv(6) // 8 + 6
    // 6 + getOsszegRekurziv(0) // 6 + 0
    // 0
}

int sumDigits(int no)
{
    return no == 0 ? 0 : no % 10 + sumDigits(no / 10);
}

int main()
{
    int n = 687;

    printf("%d\n", getOsszeg(n));
    printf("%d\n", getOsszegRekurziv(n));
    printf("%d\n", sumDigits(n));

}