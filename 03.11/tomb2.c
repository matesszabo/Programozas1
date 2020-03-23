#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void tomb_kiir2D(int m, int n, int tomb[m][n])
{

	for(int i=0 ; i<m; i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",tomb[i][j]);
		}
		puts(""); // printf("\n");
	}
}


int main()
{
	int tomb[2][5];
	int tomb2[2][5] = {{1,2,3,4,5},
			   {6,7,8,9,10}};

	int tomb3[3][5];



	for(int i=0 ; i<2; i++)
	{
		for(int j=0;j<5;j++)
		{
			tomb[i][j] = i+j;
		}
	}

	for(int i=0 ; i<2; i++)
	{
		for(int j=0;j<5;j++)
		{
			printf("tomb[%d][%d]:%d\n",i,j,tomb[i][j]);
		}
	}

	for(int i=0 ; i<2; i++)
	{
		for(int j=0;j<5;j++)
		{
			printf("%d ",tomb[i][j]);
		}
		puts(""); // printf("\n");
	}

	srand(time(0));
	for(int i=0 ; i<3; i++)
	{
		for(int j=0;j<5;j++)
		{
			tomb3[i][j]=rand()%91;
		}

	}

	tomb_kiir2D(3,5,tomb3);












	return 0;
}
