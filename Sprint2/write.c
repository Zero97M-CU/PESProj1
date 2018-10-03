#include <stdio.h>

int write() 
{
	int  *ptr, input;
	unsigned int value;

	printf("Specify the address: ");
	scanf("%d", &*ptr);

	printf("Specify the value you need to write in hexadecimal: ");
	scanf("%x", &value);

	ptr = &value;

	printf("Address:%x --- Value:%d\n", ptr, *ptr);

	return 0;
}
