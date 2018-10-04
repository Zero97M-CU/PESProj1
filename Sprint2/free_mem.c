#include<stdio.h>

extern int allo_flag;
extern int *base_addr;
extern int offset;

int free_mem()
{
	if(allo_flag == 0)
	{
		printf("Please allocate memory before you free.\n");
	}

	else
	{	
		free(base_addr);	
		
		printf("The previous allocated memory is freed.\n");
		printf("The %d locations from the starting address %x is freed.\n", offset+1, base_addr);
	}
	return 0;
}


