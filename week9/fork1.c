#include "my.h"
int g=99;
int main()
{
	int i,pid;
	static int f=19;
	pid=fork();
	if(pid<0)
	{
		perror("fork faailed\n");
		exit(1);
	}
	else if(pid==0)
	{
		printf("child: pid=%d , ppid=%d\n",getpid(),getppid());
		i=100;
		g=101;
		f=238;
		printf("child:i=%d  g=%d  f=%d\n",i,g,f);
		printf("child:address i=%p g=%p f=%p\n",&i,&g,&f);
		exit(123);
	}
	printf("parent: pid=%d , ppid=%d\n",getpid(),getppid());
	printf("parent:i=%d  g=%d  f=%d\n",i,g,f);
	printf("parent:address i=%p g=%p f=%p\n",&i,&g,&f);
	exit(0);
	
}
