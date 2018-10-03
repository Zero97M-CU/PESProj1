#include<stdio.h>

extern int *memptr;

int free_mem()
{
	int address = memptr;	
	free(memptr);
	printf("The previous allocated memory is freed.\n");
	printf("Memory address which was freed: %d\n", address);
	return 0;
}


