#include "my.h"
void pr_exit(int s,pid_t pid)
{
	int sig;
	if(WIFEXITED(s))
		printf("process %d normal termination,exit status=%");
}
