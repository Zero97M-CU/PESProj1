#include <stdio.h>
#include "func.h"
#include <string.h>
char ftbe;

int main(int argc, char **argv)
{       
    printf("Welcome User\n");
    int (*func_arr[])(int) = {help, allo, free_mem, write, display};
    int **memptr;
    char user_function_input[10];	//Defined a variable for user input
    func_arr[0](1);
    char help[4] = "help";
    char exit[4] = "exit";
    char allo[4] = "allo";
    char free[4] = "free";
    char write[5] = "write";
    char display[7] = "display";    
   // scanf("%c",&ftbe);    
while(1)
{
Label:      scanf("%s", user_function_input);
	    if(strcmp(user_function_input, help))
		{
			printf("\n");
			func_arr[0](1);
			ftbe=takeinput();
		}

            else if(strcmp(user_function_input, allo))
                {
                        **memptr=func_arr[1](1);
			ftbe=takeinput();
                }

	    else if(strcmp(user_function_input, free))
		{
			func_arr[2](**memptr);
			ftbe=takeinput();
		}

	    else if(strcmp(user_function_input, exit))
		{
			printf("Terminating.......\n");
			break;
		}
	    
            else if(strcmp(user_function_input, write))
		{
			func_arr[3](1);
			takeinput();
		}

	    else if(strcmp(user_function_input, display))
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
