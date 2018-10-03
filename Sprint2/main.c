#include <stdio.h>
#include "func.h"
#include <string.h>
#include <stdlib.h>

//Declaring exit flag which allows program to terminate
int exit_flag = 0;

//Declaring memory address variable
int *memptr;

//Declaring offset to allow user to use functions at particular address
int offset;

//Main.c
int main(int argc, char **argv)
{
	//Declaring a variable to know if user inputs correctly
	int wrong_input_flag = 1;

	//Declaring function array pointers
	int (*func_arr[])(int) = {help, allo, free_mem, write, display, xor_inv, RandGen, exit_app};

	//Defined a variable for user input
	char user_func_in[10];

	//Declaring strings to compare with user input and call correct function
	char *func_names[] = 
	{
		"help",
		"allo",
		"free",
		"write",
		"display",
		"invert",
		"random",
		"exit"
	};
	
	//finding the array size dynamically
	int no_of_func= sizeof(func_names)/sizeof(func_names[0]);
	//printf("Number of functions: %d\n",no_of_func);

	//Greetings
    	printf("Welcome User!\n\n");
	printf("Hello!");
	
	//Calling help function
    	func_arr[0](1);
	printf("\n\n");

	while(1)
	{
		//Scans user input
		printf(">");
		scanf("%s",user_func_in);

		for(int i=0; i<no_of_func; i++)
		{
			if(strcmp(user_func_in, func_names[i]) == 0)
			{
				wrong_input_flag = 0;
				func_arr[i](1);
				break;
			}
		}

		if (exit_flag == 1)
		{
			printf("See You Later!\n");
			break;
		}

		if (wrong_input_flag != 0)
		{
			printf("Invalid input. Please try again.\n");
		}

		printf("\n");

		wrong_input_flag = 1;

	}
return 0;
}
