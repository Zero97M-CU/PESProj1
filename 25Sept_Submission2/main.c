#include <stdio.h>
#include "func.h"
#include <string.h>
int main(int argc, char **argv)
{
    char ftbe;    
    printf("Welcome User\n");
    void (*func_arr[])(int) = {help, allo};
    func_arr[0](1);
    char help = 'h';
    char exit = 'e';
    while(1)
	{
	    printf("Enter the command you want to execute. Enter 'h' for help and 'e' to terminate code\n");
	    
	    scanf("%c",&ftbe);
	    if(ftbe==help)
		{
			printf("\n");
			func_arr[0](1);
		}

	    else if(ftbe == exit)
		{
			printf("Terminating.......\n");
			break;
		}
	
	/*
	    else
		{
			printf("\thelp - help menu\n\t exit - terminate program\n");
		}
	*/         

	}
    return 0;
}
