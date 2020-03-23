#include <stdio.h>

int main()
{
	for(int i =0 ; i<10 ; i++)
	{
		printf("%d\n",i);

		if( i == 7)
		{	
			break;
		}
	}	

	for(int i = 0; i<10; i++)
	{
		printf("%d\n",i);
		for(int j=0; j<5; j++)
		{
			printf("%d ",j);
			if(j>2)
			{
				break;
			}
		}
		puts(""); // printf("\n")
		if( i == 4 )
		{
			break;
		}
	}


	for(int i = 0 ; i < 10; i++)
	{
		if(i==5 || i==8)
		{
			continue;
		}
		printf("i: %d\n",i);
		
	}	

	return 0;
}
