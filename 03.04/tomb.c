#include <stdio.h>
void tomb_kiir5(int tomb[5])
{
}

void tomb_kiir(int tomb[], int meret)
{
	for(int i=0 ; i<meret ; i++)
	{
		printf("tomb[%d]: %d\n",i,tomb[i]);
	}
}

void csere(int *a, int *b){
	int csere = *b;
	*b = *a;
	*a = csere;
}

void tomb_megfordit(int tomb[], int meret)
{
	for(int i=0; i<meret/2; i++)
	{
		csere(&tomb[meret-1-i],&tomb[i]);
		/*int csere = tomb[meret-1-i];
		tomb[meret-1-i] = tomb[i];
		tomb[i] = csere;*/
	}
}


int main()
{
	int tomb[5];
	printf("%d\n", tomb[0]);
	for(int i=0; i<5; i++)
	{
		printf("%p\n",&tomb[i]);
	}
	int tomb2[3] = {10, 20, 30};
	/*for(int i=0;i<3;i++)
	{
		printf("tomb[%d]: %d\n",i,tomb2[i]);
	}*/
	tomb_kiir(tomb2,3);

	for(int i=0;i<3;i++)
	{
		tomb2[i] += i;
		printf("tomb[%d]: %d\n",i,tomb2[i]);
	}
	printf("Tömb megfordítása.\n");
	int n;
	printf("Adja meg a tömb méretét!\n");
	scanf("%d",&n);
	int tomb3[n];
	for(int i=0; i<n; i++)
	{
		tomb3[i] = i;
		printf("tomb[%d]: %d\n",i,tomb3[i]);
	}
	tomb_megfordit(tomb3,n);
	tomb_kiir(tomb3,n);


	/*for(int i=0; i<n/2; i++)
	{
		int csere = tomb3[n-1-i];
		tomb3[n-1-i] = tomb3[i];
		tomb3[i] = csere;

	}*/

	/*for(int i=0; i<n; i++)
	{
		printf("tomb[%d]: %d\n",i,tomb3[i]);
	}*/



	return 0;
}
