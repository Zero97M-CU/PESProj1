#include <stdio.h>
#include "func.h"
#include <string.h>
#include<stdlib.h>
char ftbe;

int main(int argc, char **argv)
{       
    //Greetings
    printf("Welcome User\n");
    
    //Declaring function array pointers
    int (*func_arr[])(int) = {help, allo, free_mem, write, display, RandGen};
    
    //variable for storing allocated memory
    int **memptr;
    
    //Defined a variable for user input
    char user_func_in[10];
    
    //Calling help function
    func_arr[0](1);

    //Declaring strings to compare with user input and call correct function
    char help[5] = "help";
    char exit[5] = "exit";
    char allo[5] = "allo";
    char free[5] = "free";
    char write[6] = "write";
    char display[8] = "display";
    char PRNG[7] = "random"; 
    //Declaring an integer to store the string compare value obtained 
    //from user input and pre-defined functions
    //int func_cmp_value;
   
    // scanf("%c",&ftbe);    

while(1)
{
Label:      //Scans user input
	   scanf("%s",user_func_in);
	    
	    if(strcmp(user_func_in, help) == 0)
		{
			printf("\n");
			func_arr[0](1);
			ftbe=takeinput();
		}

            else if(strcmp(user_func_in, allo) == 0)
                {
                        **memptr=func_arr[1](1);
			ftbe=takeinput();
                }

	    else if(strcmp(user_func_in, free) == 0)
		{
			func_arr[2](**memptr);
			ftbe=takeinput();
		}

	    else if(strcmp(user_func_in, write) == 0)
		{
			func_arr[3](1);
			takeinput();
		}

	    else if(strcmp(user_func_in, display) == 0)
  		{
			func_arr[4](1);
			takeinput();
		}

	    else if(strcmp(user_func_in, exit) == 0)
		{
			printf("See You Later\n");
			break;
		}
	    
	    else if(strcmp(user_func_in, PRNG) == 0)
	        {
			func_arr[5](1);
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
