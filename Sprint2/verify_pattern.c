#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern int *base_addr, allo_flag, *memptr, total_mem;
extern int offset;

int verify_pattern(int a) 
{
	int num[4];
	int inputs, seed, verify_flag = 0;

	if(allo_flag == 0)
	{
		printf("Please allocate memory before you can verify pattern.\n");
	}
	
	else
	{
		printf("Enter the offset to verify pattern: ");
		scanf("%d", &offset);	
			
		printf("Enter the no. of values to be verified (maximum is 5): ");
		scanf("%d", &inputs);
				
		if((inputs <= 5) && ((offset+inputs)<=total_mem))
		{
			printf("Enter a seed value: ");
			scanf("%d",&seed);

			clock_t t;
			t = clock();

			num[0]=((((seed*9)/2)+7)*2)%17;
			num[1]=(((seed/2)*10)%11);
			num[2]=(((876*seed)/4)%12)+3;
			num[3]=(((seed+4)*6)-5)%13;
			num[4]=((seed+4)*7677)%18;

			memptr = base_addr + offset;

			for(int i=0; i<inputs; i++)
			{		
				if (num[i] == *memptr)
				{
					verify_flag++;
				}

				else
				{
					printf("Discrepancy at %p --- ", memptr);
					printf("Actual value: %d ----- Expected value: %d\n", num[i], *memptr);
				}

				memptr += 1;
			}

			if(verify_flag == inputs) printf("Pattern successfully verified.\n");
			
			t = clock() - t;
			double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
			
			//Prints the time taken for execution
			printf("It took %f seconds to execute \n", time_taken);
		}

		else
		{
			printf("Either offset or input exceeds the limit. Try again.\n");
		}
	}	
return 0;
}
