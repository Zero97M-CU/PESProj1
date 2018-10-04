#include <stdio.h>
#include <time.h>

extern int allo_flag, total_mem, offset, *memptr;
extern int *base_addr;

// A function that inverts all the bits using xor
int xor_inv()
{
	unsigned long value;	

	if(allo_flag == 0)
	{
		printf("Please allocate memory before you invert.\n");
	}	

	else
	{
		printf("Enter the offset: ");
		scanf("%d", &offset);

		if(offset > (total_mem - 1))
		{
			printf("You are reading outside allocated memory space\n");
		}

		else
		{
			memptr = base_addr + offset;	

			printf("Enter the value to be inverted: ");
			scanf("%x", &value);

			*memptr = value;
			
			clock_t t;
			t = clock();

			//Bitwise inversion
			*memptr ^= 0xffffffff;

			//Printing address of result
			printf("Address of result: %x\n", memptr);

			//Prints the inverted value
			printf("Original value: %x ----- Inverted value: %x\n", value, *memptr);

			t = clock() - t;
			double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
			
			//Prints the time taken for execution
			printf("It took %f seconds to execute \n", time_taken);
		}	
	}

	return 0;
}
