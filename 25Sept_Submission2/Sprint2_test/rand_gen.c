//Generates a maximum of 5 random numbers based on a seed value//
//Suman Hosmane and Mohit Rane//



#include <stdio.h>
#include <stdlib.h>

extern int *base_addr, allo_flag, *memptr, total_mem;
extern int offset;

int rand_gen(int a) 
{
	int num[4];
	int inputs, seed;

	if(allo_flag == 0)
	{
		printf("Please allocate memory before can generate random numbers.\n");
	}
	
	else
	{
		printf("Enter the offset for random values: ");
		scanf("%d",&offset);	
			
		printf("Enter the no. of random values required (maximum is 5): ");
		scanf("%d", &inputs);
				
		if((inputs <= 5) && ((offset+inputs)<=total_mem))
		{
			printf("Enter a seed value: ");
			scanf("%d",&seed);

			num[0]=((((seed*9)/2)+7)*2)%17;
			num[1]=(((seed/2)*10)%11);
			num[2]=(((876*seed)/4)%12)+3;
			num[3]=(((seed+4)*6)-5)%13;
			num[4]=((seed+4)*7677)%18;

			memptr = base_addr + offset;

			for(int i=0; i<inputs; i++)
			{		
				*memptr = num[i];
				printf("Random number %d: %d --- Address: %p\n", i+1, *memptr, memptr);
				memptr += 1;
			}
		}

		else
		{
			printf("Either offset or input exceeds the limit. Try again.\n");
		}
	}	
return 0;
}
