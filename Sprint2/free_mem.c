#include<stdio.h>

extern int *memptr;
extern int offset;

int free_mem()
{
	int address = memptr;
	
	/*
	for(int i=0; i<=offset; i++)
	{	
		free(memptr + i);
	}
	*/

	free(memptr);	
	
	printf("The previous allocated memory is freed.\n");
	printf("The %d locations from the starting address %x is freed.\n", offset+1, address);
	
	return 0;
}


