#include <stdio.h>
#include "func.h"
#include <string.h>
char ftbe;

int main(int argc, char **argv)
{       
    printf("Welcome User\n");
    int (*func_arr[])(int) = {help, allo, free_mem, write, display};
    int **memptr;
    func_arr[0](1);
    char help = 'h';
    char exit = 'e';
    char allo = 'a';
    char free = 'f';
    char write = 'w';
    char display = 'd';    
   // scanf("%c",&ftbe);    
while(1)
{
Label:      scanf("%c",&ftbe);
	    if(ftbe==help)
		{
			printf("\n");
			func_arr[0](1);
			ftbe=takeinput();
		}

            else if(ftbe==allo)
                {
                        **memptr=func_arr[1](1);
			ftbe=takeinput();
                }

	    else if(ftbe == free)
		{
			func_arr[2](**memptr);
			ftbe=takeinput();
		}

	    else if(ftbe == exit)
		{
			printf("Terminating.......\n");
			break;
		}
	    
            else if(ftbe == write)
		{
			func_arr[3](1);
			takeinput();
		}

	    else if(ftbe == display)
  		{
			func_arr[4](1);
			takeinput();
		}

	    else
		{
		printf("Invalid input\n");
		goto Label;
		}
	}
  return 0;
}
