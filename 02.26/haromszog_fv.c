#include <stdio.h>

int kerulet(int a, int b){
	printf("A kerület függvénybe léptünk, a: %d, b: %d\n",a,b);
	return 2 * a + b;
}


void kirajzol(int a)
{
	for(int i=0; i<a; i++)
	{
		for(int j=0 ; j<= i; j++)
		{
			putchar('*');
		}
		puts("");
	}
}

int ervenyes(int a, int b, int c)
{
	if((a + b < c) || (a + c < b) || (b + c < a)){
		return 0;
	} else {
		return 1;
	}
}


int main()
{
	int a,b;
	printf("Kérem az a oldal hosszát!\n");
	scanf("%d", &a);
	printf("Kérem az b oldal hosszát!\n");
	scanf("%d", &b);
	printf("A megadott hárömszög %s érvényes. \n",ervenyes(a,a,b)? "":"nem");

	printf("A megadott háromszög kerülete: %d \n",kerulet(a,b));
	kirajzol(a);

	





	return 0;
}
