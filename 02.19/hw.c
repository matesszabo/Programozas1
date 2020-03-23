#include <stdio.h>
#include <stdbool.h>

int main(){
	int a = 16;
	int b = 10;
	int c = a+b;
	int d;
	printf("Hello World!\n");
	printf("The value of c is: %d, %u, %x, %o\n",c,c,c,c);
	
	printf("Give me a number!");
	scanf("%d",&d);
	printf("The value of d is: %d\n",d);

	printf("The value of d is: %d\n",d++);
	printf("The value of d is: %d\n",++d);

	bool e = false;
	
	printf(d == a ? "True\n" : "False\n");


	return 0;
}
