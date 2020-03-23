#include <stdio.h>

int main()
{
	//for(;;)
	//	printf("Ismétlődő utasítás\n");

	int osszeg = 0;

	for(int i = 0; i<100; i++)
		printf("i: %d.\n",i);


	for(int i = 0; i < 50; i++)
	{
		osszeg += i; //osszeg = osszeg + i
		printf("Összeg: %d.\n",osszeg);
	}


	osszeg = 0;

	for(int i = 0; i < 50; i+=2)
	{
		osszeg += i; //osszeg = osszeg + i
		printf("Összeg: %d.\n",osszeg);
	}


	for(int i = 100; i > 50; i--)
	{
		printf("Az i értéke: %d.\n",i);
	}


	for(int i = 100; i > 50; i % 2 ? i-=4 : i++)
	{
		printf("Az i értéke: %d.\n",i);
	}

	int feltetel = 0;

	while(feltetel < 10)
	{
		printf("Feltétel: %d.\n",feltetel);
		feltetel++;
	}

	while(1)
		printf("Végtelen ciklus\n");











}
