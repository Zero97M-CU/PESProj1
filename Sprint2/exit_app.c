extern int exit_flag;
extern int base_addr;
exit_app()
{
//	free(base_addr);
	exit_flag = 1;
	return 0;
}
