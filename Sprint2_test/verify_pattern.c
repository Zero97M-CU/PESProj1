#include <stdio.h>
#include <stdlib.h>

extern int *base_addr, allo_flag, *memptr, total_mem;
extern int offset;

int verify_pattern(int a) 
{
	int num[4];
	int actual[4];
	int inputs, seed, verify_flag = 0;

	if(allo_flag == 0)
	{
		printf("Please allocate memory before you free.\n");
	}
	
	else
	{
		printf("Enter the offset to verify pattern.\n");
		scanf("%d", &offset);	
			
		printf("Enter the no. of values to be verified. Maximum is 5.\n");
		scanf("%d", &inputs);
		
		memptr=memptr-1;
		for(int i=4;i>=0;i--)
		{
			actual[i]=*memptr;
			memptr=memptr-1;
		}
				
		if((inputs <= 5) && ((offset+inputs) <= total_mem))
		{
			printf("Enter a seed value\n");
			scanf("%d",&seed);

			num[0]=((((seed*9)/2)+7)*2)%7;
			num[1]=(((seed/2)*10)%9);
			num[2]=(((876*seed)/4)%12)+3;
			num[3]=(((seed+4)*6)-5)%7;
			num[4]=((seed+4)*7677)%7;

			memptr = base_addr + offset;

			for(int i=0; i<=inputs; i++)
			{		
				if (num[i] == *memptr)
				{
					verify_flag++;
				}

				else
				{
					printf("Discrepancy at %x --- ", memptr);
					printf("Actual value: %d ----- Expected value: %d\n", num[i], actual[i]);
				}

				memptr += 1;
			}

			if(verify_flag == inputs) printf("Pattern successfully verified.\n");

		}

		else
		{
			printf("Either offset or input exceeds the limit. Try again.\n");
		}
	}	
return 0;
}
