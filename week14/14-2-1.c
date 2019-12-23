#include"my.h"
#define NUM_THREADS 4

struct info{
	int no;
	int n;
};


void hello(void * t)
{
	pthread_t my_tid;
	struct info *y;
	y=(struct info *)(t);
	int s=0;
		
	for(int i=0;i<=y->n;i++)
			s+=i;
	my_tid=pthread_self();
		printf("\tThread %d: my tid is %lx,hello world\n",(int)y->no,my_tid);
		printf("\tThread %d: sum I to %d is %d\n",(int)y->no,y->n,s);
}

int main()
{
	pthread_t tid;
	struct info a[4];
	int rv,t;
	for(t=0;t<NUM_THREADS;t++)
	{
		a[t].no=t;
		a[t].n=100*(t+1);
		rv=pthread_create(&tid,NULL,(void*(*)())hello,(void*)&a[t]);



		if(rv!=0)
		{
			printf("thread create failed!\n");
			return -1;
		}
		printf("create thread %lx\n",tid);
	}
	printf("good bye!\n");
	pthread_exit(NULL);
}
