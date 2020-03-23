#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int a = 3;
	int b = 4;

	
	srand(time(0));
	printf("%d\n",rand());
	printf("%d\n",rand());

	int c = rand()%90;

	printf("C: %d\n",c);

	printf("%d\n",3/4);
	printf("%f\n",3/4.0);
	printf("%f\n",3.0/4);

	printf("%f\n",a/(float)b);



}
