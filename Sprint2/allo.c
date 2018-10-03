#include <stdio.h>
#include <stdlib.h>
extern int *memptr;
extern int offset;

int allo()
{
	printf("You are allocating memory\n");
	int locations;
	printf("Enter number of elements: ");
	scanf("%d", &locations);
	offset = locations - 1;

	if (locations == 0)
	{	
		printf("No memory allocated\n");
	}

	else
	{
		memptr = (int*) malloc(locations * sizeof(int));
	
		if(memptr == NULL)
		{
			printf("Error! memory not allocated.");
			exit(0);
		}	

		else
		{
			printf("%d memory locations allocated\n", locations);
			printf("Allocation address: %x\n", memptr);
		}
	}
return 0;
}
