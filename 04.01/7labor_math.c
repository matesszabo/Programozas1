#include <stdio.h>
#include <math.h>

float fmax1(float a, float b)
{
    return fmax(a,b);
}

int main(){

    double t;

    for(t=1.0; t<=10.00; t++)
    {
        printf("A 2 %.f számmal vett hatványa %.f\n",t,pow(2.0,t));
    }

    printf("%f\n", fmax1(4.5, 3.2));

    return 0;
}