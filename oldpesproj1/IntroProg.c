/*Startup Prog 1*/
#include<stdio.h>

void help()
{
	printf("You are in the Help Section\nAllocate Memory: Pass the memory Size to be alloacted\nFree Memory: USe this to release a previously allocated block\nDisplay Memory: Pass addres whose memory content needs to be diplayed\n\n");
}


int main()
{
	int c;
	printf("Hello User\nType 1 to use the Help menu\n\n");
Label1:	printf("Please Select one of the options from below\n");
	printf("1-Help\n2-Allocate Memory\n3-Free Memory\n4-Display Memory\n5-Write Memory\n6-Invert Block\n7-Write Pattern\n8-Verify Pattern\n\n");
	scanf("%d",&c);
	switch(c)
	   {	
		case 1:
			help();
			break;
		case 2:
			printf("You are allocating Memory\n");
			//break;
		case 3:
			printf("You are freeing the allocated memory\n");
			//break;
		case 4:
			printf("You are reading content of an address\n");
			//break;
		case 5:
			printf("Enter address you want to write into\n");
			printf("You are writing into a memory location\n");
			//break;
		case 6:
			printf("You are inverting memory thru XOR op\n");
			//break;
		case 7:
			printf("Pseudo Random Function\n");
			//break;
		case 8:
			printf("Verifying Pattern\n");
			//break;
		case 9:
			break;
		default:
			printf("Wrong Input Try Again\n\n\n");
	     		goto Label1;
	     }
}
