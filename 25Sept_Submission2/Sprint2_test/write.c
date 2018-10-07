#include <stdio.h>

extern int allo_flag, *base_addr, total_mem;
extern int *memptr;
extern int offset;

int write() 
{	
	if(allo_flag == 1)
	{	
		printf("Specify the offset: ");
		scanf("%d", &offset);
		
		if(offset >= total_mem) printf("You are writing outside allocated space. Try again.\n");
	
		else
		{	
			memptr = base_addr + offset;

			printf("Specify the value you need to write in hexadecimal: ");
			scanf("%x", &*memptr);

			printf("Address:%x --- Value:%d\n", memptr, *memptr);
		}
	}

	else printf("Please allocate memory before you free.\n");
	
	return 0;
}
