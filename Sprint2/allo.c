#include <stdio.h>
#include <stdlib.h>

int allo()
{
	printf("You are allocating memory");
	int num, i, *memptr;
	printf("Enter number of elements: ");
	scanf("%d", &num);

	if (num == 0)
	{	
	printf("No memory allocated\n");
	}

	else
	{
	memptr = (int*) malloc(num * sizeof(int));
	printf("%d",memptr);    
	if(memptr == NULL)
	{
		printf("Error! memory not allocated.");
		exit(0);
	}

	else
	{
		printf("%d memory allocated\n",num);
	}
	}
	return memptr;
}
