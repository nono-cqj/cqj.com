#include "my.h"
int main()
{
	int ret;
	printf("caller1: pid=%d , ppid=%d\n",getpid(),getppid());
	execl("test1","./test1","ABC","abc","123",NULL);
	printf("after calling!\n");
	sleep (100);
	return 0;
}
