#include <stdio.h>

extern int *memptr;
extern int offset;

int write() 
{
	int location;	
	unsigned int *ptr, value;

	printf("Specify the offset: ");
	scanf("%x", &offset);

	printf("Specify the value you need to write in hexadecimal: ");
	scanf("%x", &value);

	location = memptr + offset;

	//*ptr = value;

	printf("Address:%x --- Value:%d\n", ptr, *ptr);

	return 0;
}
