#include <stdio.h>

int display() 
{
	int  *ptr, locations;

	printf("Specify the address: ");
	scanf("%d", &*ptr);

	printf("Specify the number of data locations: ");
	scanf("%d", &locations);

	for(int i=locations; i>0; i--)
	{
	printf("Adress: %x --- Value: %d\n", ptr, *ptr);
	ptr += 1;
	}

	return 0;
}
