#include <stdio.h>

int display() 
{
	int  *ptr, locations;        /* pointer variable declaration */

	printf("Specify the address: ");
	scanf("%d", &*ptr);

	printf("Specify the number of data locations: ");
	scanf("%d", &locations);

	for(int i=locations; i>0; i--)
	{
	printf("Adress: %d --- Value: %x\n", ptr, *ptr);
	ptr += 1;
	}

	return 0;
}
