//Writes into the memory space specified by the user//
//https://stackoverflow.com/questions/11207783/read-and-write-to-a-memory-location//
//Mohit Rane//



#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern int allo_flag, *base_addr;
extern int *memptr;
extern unsigned int total_mem, offset;

int takeinput(void);
int takeinputhex(void);

/*int takeinputwr(void)
{
        while(1)
        {	
		int locations;
		char str[10];
                scanf("%s", str);
                if (str[strspn(str, "0123456789")] == 0)
                {
                       locations = atoi(str);
                       return locations;
       		}

                else                                                                                                                                                                    {
                        printf("Enter a valid decimal number.\n\n");
                }
        }
}*/

int takeinputhex(void)
{
        while(1)
        {
                int locations;
                char str[10];
                scanf("%s", str);
                if (str[strspn(str, "0123456789abcdefABCDEF")] == 0)
                {
                        locations = atoi(str);
                        return locations;
                }

                else
		{
			 printf("Enter a valid decimal number.\n\n");							
		}
        }
}

int write() 
{	
	int count;
	if(allo_flag == 1)
	{	
		printf("Specify the offset: ");
		offset = takeinput();
		
		if(offset >= total_mem) printf("You are writing outside allocated space. Try again.\n");
	
		else
		{	
			memptr = base_addr + offset;

			printf("How many values do you want to enter: ");
			count = takeinput();

			while(count==0)
			{
				printf("0 is an invalid input. Try again.\n");
				count = takeinput();
			}

			for(int i=0;i<count;i++)
			{
				printf("Specify value %d, you need to write in hexadecimal: ", (i+1));
				*memptr = takeinputhex();
				memptr+=1;
			}
			
			memptr=(memptr-count);
			for(int i=0;i<count;i++)
			{
				printf("Address: %p --- Value: %x\n", memptr, *memptr);
				memptr+=1;
			}
		}
	}

	else printf("Please allocate memory before you write to memory.\n");
	
	return 0;
}
