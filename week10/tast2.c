#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
	int var;
	int pid;

	var = 88;

	if((pid = vfork())<0)
	{
		perror("fail to vfock");
		return -1;
	}else if(pid == 0){
		var++;
	}else{
		printf("child pid = %d\n",pid);
	}
	printf("pid = %d, var = %d\n",getpid(),var);
	exit(0);
}
