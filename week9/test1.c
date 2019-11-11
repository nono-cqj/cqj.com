#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int x=100;
int main(int argc,char* argv[])
{
	int i;	
	int y=0;
	static int w=33;
	printf("test1:pid=%d , ppid=%d\n",getpid(),getppid());
	printf("tesr1:address x=%ld , y=%ld , w=%ld\n",&x,&y,&w);

	for(i=0;i<argc;i++)
	{	
		printf("%s\n",argv[i]);
	}
	return 0;

}
