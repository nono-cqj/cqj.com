#include"my.h"
int main()
{
	pid_t pid1;
	pid_t pid2;
	pid_t pid3;
	int r_num;
	int pipefd[2];
	int pipefd2[2];
	char buf[1];
	memset(buf,0,sizeof(buf));
	if(pipe(pipefd)<0||pipe(pipefd2)<0)
	{
		perror("pipe failed!\n");
		return -1;
	}

	if((pid1=fork())<0)
	{
		perror("fork1 failed\n");
		return -1;	
	}
	else if(r==0)
	{
		for(int i=0;i<10;i++)
		{
			buf=i;
			write(pipefd[1],buf+i,1);
		}
	else
	{
		if((pid2=fork())<0))
		{
			perror("fork1 failed\n");
			return -1;	
		}
		else if(r==0)
		{
			for(int i=0;i<10;i++)
			{
				
				read(pipefd[1],buf+i,1);
			}
		}
		else
		{
				if((pid3=fork())<0))
			{
				perror("fork1 failed\n");
				return -1;	
			}
			else if(r==0)
			{
				for(int i=0;i<65537;i++)
				{
					read(pipefd[1],buf,1);
				}
			}
		}
	}
}
