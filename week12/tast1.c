#include"my.h"
int main()
{
	pid_t r;
	int r_num;
	int pipefd[2];
	char buf[65536];
	memset(buf,0,sizeof(buf));
	if(pipe(pipefd)<0)
	{
		perror("pipe failed!\n");
		return -1;
	}
	r=fork();
	if(r<0)
	{
		perror("fork failed\n");
		return -1;	
	}
	else if(r==0)
	{
		for(int i=0;i<65537;i++)
		{
		int t;
		if((t=write(pipefd[1],buf,1))>0)
			printf("%d\n",i);
		
		}
		exit(0);
	}
	else
	{
		wait(NULL);
		close(pipefd[1]);
		if((r_num=read(pipefd[0],buf,65536))>0)
			printf("parent write ok.\n");
		close(pipefd[0]);
		return 0;	
	}
}
