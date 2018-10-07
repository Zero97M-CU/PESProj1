#include <stdio.h>

extern int *base_addr, allo_flag, *memptr, total_mem;
extern int offset;

int display() 
{
	int locations;
	if(allo_flag == 0)
	{
		printf("Please allocate memory before you free.\n");
	}

	else
	{
		printf("Specify the offset: ");
		scanf("%d", &offset);

		memptr = base_addr + offset;

		printf("Specify the number of data locations: ");
		scanf("%d", &locations);

		if(total_mem<(offset + locations))
		{
			printf("You are reading outside allocated memory space\n");
		}
		
		else
		{
			for(int i=locations; i>0; i--)
			{
				printf("Adress: %x --- Value: %x\n", memptr, *memptr);
				memptr += 1;
			}
		}
	}
	return 0;
}
