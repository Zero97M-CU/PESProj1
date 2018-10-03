#include <stdio.h>
#include <stdlib.h>
extern int *memptr;
int allo()
{
	printf("You are allocating memory\n");
	int num, i;
	printf("Enter number of elements: ");
	scanf("%d", &num);

	if (num == 0)
	{	
		printf("No memory allocated\n");
	}

	else
	{
		memptr = (int*) malloc(num * sizeof(int));
	
		if(memptr == NULL)
		{
			printf("Error! memory not allocated.");
			exit(0);
		}	

		else
		{
			printf("%d memory locations allocated\n",num);
			printf("Allocation address: %x\n", memptr);
		}
	}
return 0;
}
