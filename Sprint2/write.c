#include <stdio.h>

int write() 
{
	int  *ptr;        /* pointer variable declaration */
	unsigned int value;

	printf("Specify the address: ");
	scanf("%d", &*ptr);

	printf("Specify the value you need to write in hexadecimal: ");
	scanf("%x", &value);

	*ptr = value;

	printf("Address:%d --- Value:%x\n", ptr, *ptr);

	return 0;
}
