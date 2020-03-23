#include <stdio.h>

int main(){

	int n;

	printf("Adja meg az n értékét!\n");
	scanf("%d",&n);

	for(int i=0; i<n; i++)
	{
		for(int j=0 ; j<= i; j++)
		{
			putchar('*');
		}
		puts("");
	}

	for(int i=0; i<n; i++)
	{
		for(int j=0 ; j<= i; j++)
		{
			//putchar(j == 0 || i == j || i == n-1 ? '*' : ' ');
			if(j == 0 || i == j || i == n-1 )
			{
				putchar('*');
			} else {
				putchar(' ');
			}
		}
		puts("");
	}


	int i = 0;
	while(i<n)
	{
		for(int j=0 ; j<= i; j++)
		{
			//putchar(j == 0 || i == j || i == n-1 ? '*' : ' ');
			if(j == 0 || i == j || i == n-1 )
			{
				putchar('*');
			} else {
				putchar(' ');
			}
		}
		puts("");
		i++;
	}












}
