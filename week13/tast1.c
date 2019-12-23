#include"my.h"

void sigroutine(int dunnon)
{
	switch(dunnon)
	{
		case 1:
			printf("Get a signal SIGUP\n");
			break;
		case 2:
			printf("Get a signal SIGUP\n");
			break;
		case 3:
			printf("Get a signal SIGUP\n");
			break;
	}
}

int main()
{
	printf("process id is %d\n",getpid());
	signal(SIGHUP,sigroutine);
	signal(SIGINT,sigroutine);
	signal(SIGQUIT,sigroutine);
	while(1);
}
