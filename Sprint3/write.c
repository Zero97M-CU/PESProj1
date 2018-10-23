//Writes into the memory space specified by the user//
//https://stackoverflow.com/questions/11207783/read-and-write-to-a-memory-location//
//Mohit Rane//



#include <stdio.h>

extern int allo_flag, *base_addr, total_mem;
extern int *memptr;
extern int offset;

int write() 
{	
	int count;
	if(allo_flag == 1)
	{	
		printf("Specify the offset: ");
		scanf("%d", &offset);
		
		if(offset >= total_mem) printf("You are writing outside allocated space. Try again.\n");
	
		else
		{	
			memptr = base_addr + offset;

			printf("How many values do you want to enter: ");
			scanf("%d",&count);

			if(count==0)
			{
				printf("0 is an invalid input. Try again.\n");
				return 0;
			}

			for(int i=0;i<count;i++)
			{
				printf("Specify value %d, you need to write in hexadecimal: ", (i+1));
				scanf("%x", &*memptr);
				memptr+=1;
			}
			
			memptr=(memptr-count);
			for(int i=0;i<count;i++)
			{
				printf("Address: %p --- Value: %x\n", memptr, *memptr);
				memptr+=1;
			}
		}
	}

	else printf("Please allocate memory before you write to memory.\n");
	
	return 0;
}
