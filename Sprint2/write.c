#include <stdio.h>

int write() 
{
	//int  *ptr;
	unsigned int *ptr, value;

	printf("Specify the address: ");
	scanf("%x", &ptr);

	printf("Specify the value you need to write in hexadecimal: ");
	scanf("%x", &value);

	*ptr = value;

	printf("Address:%x --- Value:%d\n", ptr, *ptr);

	return 0;
}
