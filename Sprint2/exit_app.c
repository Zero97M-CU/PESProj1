extern int exit_flag;
extern int base_addr;
int exit_app()
{
	//Sets the exit flag for termination	
	exit_flag = 1;
	
	return 0;
}
