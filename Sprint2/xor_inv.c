#include <stdio.h>
#include <time.h>

// A function that inverts all the bits using xor
int xor_inv()
{
	unsigned long value;	

	printf("Enter the value to be inverted: ");
	scanf("%lu", value);
	
	clock_t t;
	t = clock();

	//Bitwise inversion
	value ^= 0xffffffff;

	//Prints the inverted value
	printf("Inverted value: %lu\n", value);

	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds

	printf("It took %f seconds to execute \n", time_taken);

	return 0;
}
