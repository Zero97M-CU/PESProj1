//Display from memory//
//Mohit Rane//
//gcc, linux terminal//

#include <stdio.h>

extern int *base_addr, allo_flag, *memptr, total_mem;
extern int offset;

int display() 
{
	int locations;
	if(allo_flag == 0)			//verifying if memory was allocated before invoke of display
	{
		printf("Please allocate memory before you can display memory.\n");
	}

	else
	{	
		printf("Specify the offset: ");			//memory location to start display from
		scanf("%d", &offset);

		memptr = base_addr + offset;

		printf("Specify the number of data locations: ");	//how many memory location to display from
		scanf("%d", &locations);

		if(locations==0)
		{
			printf("Start from 1.\n 0 is an invalid input\n");
		}

		else
		{

			if(total_mem<(offset + locations))			//verifying if the location is within user access
			{	
				printf("You are reading outside allocated memory space\n");	
			}
		
			else
			{
				for(int i=locations; i>0; i--)			//loop for writing into the memory loaction
				{
					printf("Adress: %p --- Value: %x\n", memptr, *memptr);		
					memptr += 1;
				}
			}
		}
	}
	return 0;
}
