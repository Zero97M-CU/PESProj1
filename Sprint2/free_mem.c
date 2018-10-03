#include<stdio.h>

int free_mem(int **memptr)
{
	printf("%d",memptr);
	free(memptr);
	printf("%d",memptr);
	printf("You are freeing allocated memory\n");
	return 0;
}


