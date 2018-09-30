#include <stdio.h>
#include "func.h"
#include <string.h>
int main(int argc, char **argv)
{
    char ftbe;    
    printf("Welcome User\n");
    void (*func_arr[])(int) = {help, allo, display, write};
    func_arr[0](1);
    char help = 'h';
    char exit = 'e';
    char display = 'd';
    char write = 'w';
    while(1)
	{
	    printf("Enter the command you want to execute. Enter 'h' for help and 'e' to terminate code\n");
	    scanf("%c",&ftbe);
	    if(ftbe==help)
		{
			printf("\n");
			func_arr[0](1);
			continue;
		}

	    else if(ftbe == display)
	        {
		    func_arr[2](3);
		}

	    else if(ftbe == write)
	    {
		    func_arr[3](2);
	    }

	    else if(ftbe == exit)
		{
			printf("Terminating.......\n");
			break;
		}
	}
    return 0;
}
