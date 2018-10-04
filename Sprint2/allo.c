#include <stdio.h>
#include <stdlib.h>

extern int allo_flag, total_mem, offset;
extern int *base_addr;

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
		base_addr = (int*) malloc(locations * sizeof(int));
	
		if(base_addr == NULL)
		{
			printf("Error! memory not allocated.");
			exit(0);
		}	

		else
		{
			allo_flag = 1;			
			total_mem = locations;
			printf("%d memory locations allocated\n", locations);
			printf("Allocation address: %p\n", base_addr);
		}
	}
return 0;
}
