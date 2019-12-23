#include "my.h"
int main()
{
	pid_t pid;
	int i;
	pid = fork();
	if(pid<0)
	{
		fprintf(stderr,"fork failed!(%s)",strerror(errno));
		return -1;
	}
	else if(pid==0)
	{
		for(i=0;i<1000;i++)
		{
			printf("%dchild [%d] is running!\n",i,getpid());
			sleep(1);
		}
		exit(0);
	}
	else
	{
		sleep(10);
		kill(pid,9);
		wait(NULL);
		printf("All dine!\n");
		return 0;
	}
}
