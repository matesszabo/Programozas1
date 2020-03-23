#include <stdio.h>

int main(){

	int a,b;
	int c = 0;
	printf("Please give me the value of a!\n");
	scanf("%d",&a);

	printf("Please give me the value of b!\n");
	scanf("%d",&b);

	if( a + b > 10)
		printf("The sum is greater than 10.\n");
		printf("I'm outside the if.\n");

	if (a + b > 10)
	{
		printf("The sum is greater than 10.\n");
		c = a * b;
	}
	printf("The value of c is %d.\n",c);

	
	if ( (a + b) % 2 == 0)
	{
		printf("The sum of the given values is even.\n");
		c = (a + b) % 2;
	} else {
		printf("The sum of the given values is odd.\n");
		c = (a + b) % 2;
	}

	printf("The remainder is %d.\n",c);
	

	
	if( a + b > 20)
	{
		printf("The sum is greater than 20\n");
	} else if ( a + b > 10) {
		printf("The sum is less than or equals 20, but 	greater than 10\n");
	} else {
		printf("The sum is less than or equals 10\n");
	}

	if( a + b > 20)
	{
		printf("The sum is greater than 20\n");
	} else if ( a + b > 10) {
		printf("The sum is less than or equals 20, but 	greater than 10\n");
	} else if ( a+ b > 5 ){
		printf("The sum is less than or equals 5\n");
	}
	

	
	
	if ( a + b > 10 )
	{
		printf("The sum is greater than 10.\n");		
		if ( a % 2 == 0)
		{
			printf("A is even\n");
		}

		if ( b % 2 == 0)
		{
			printf("B is even\n");
		} else {
			printf("B is odd\n");
		}

	}

	

	a + b > 10 ? printf("The sum is greater than 10.\n") : printf("The sum is less than or equals 10.\n");


	a + b > 10 ? 
		(a + b) % 2 == 0 ? 
			printf("The sum is greater than 10 and 					even\n") 
		: 
			printf("The sum is greater than 10 and 				odd\n") 
	: 
		printf("The sum is less than or equals 10\n");

















	return 0;
}
