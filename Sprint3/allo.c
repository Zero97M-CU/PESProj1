//allocate//
//Suman Hosmane and Mohit Rane//
//gcc,linux terminal//
//https://www.programiz.com/c-programming/c-dynamic-memory-allocation//


#include <stdio.h>
#include <stdlib.h>

extern int allo_flag, total_mem, offset;
extern int *base_addr;

int allo()
{
	printf("You are allocating memory\n");			
	int locations;					//Taking input for the allocation size
	printf("Enter number of elements: ");
	scanf("%d", &locations);
	offset = locations - 1;

	if (locations == 0)
	{	
		printf("No memory allocated\n");	//error message for null input
	}

	else
	{
		base_addr = (int*) malloc(locations * sizeof(int));	//allocating memory starting from a base location	
	
		if(base_addr == NULL)
		{
			printf("Error! memory not allocated.");		//error message for invalid or out of range input
			return(0);
		}	

		else
		{
			allo_flag = 1;				//flag for tracking memory allocation			
			total_mem = locations;			
			printf("%d memory locations allocated\n", locations);
			printf("Allocation address: %p\n", base_addr);
		}
	}
return 0;
}
