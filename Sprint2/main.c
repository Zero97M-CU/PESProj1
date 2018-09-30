#include <stdio.h>
#include "func.h"
#include <string.h>
char ftbe;
track_mem;

int main(int argc, char **argv)
{       
    printf("Welcome User\n");
    void (*func_arr[])(int) = {help, allo, free_mem};
    int *memptr;
    func_arr[0](1);
    char help = 'h';
    char exit = 'e';
    char allo = 'a';
    char free = 'f';
    printf("Enter the command you want to execute. Enter 'h' for help and 'e' to terminate code\n");  
  while(1)
	{
Label:	    scanf("%c",&ftbe);

	    if(ftbe==help)
		{
			printf("\n");
			func_arr[0](1);
			ftbe=takeinput();
		}

            else if(ftbe==allo)
                {
                        func_arr[1](1);
			ftbe=takeinput();
                }

	    else if(ftbe == free)
		{
			func_arr[2](1);
			ftbe=takeinput();
		}

	    else if(ftbe==exit)
		{
			printf("Terminating.......\n");
			break;
		}

	    else
		{
		printf("Invalid input\n");
		goto Label;
		}
	}
  return 0;
}
