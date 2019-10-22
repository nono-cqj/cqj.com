#include "/home/rlk/text/work/gitDir/week6/mylib.h"
#include <dlfcn.h>

int main()
{
	int a[5]={12,4346,-999,45,32};
	void * handle;
	int(*f1)();
	int(*f2)();
	int(*f3)();
	char *error;
	handle=dlopen("/home/rlk/text/work/gitDir/week6/libdynamiclib.so",RTLD_LAZY);
	if(!handle)
	{
		perror("load faile!\n");
		exit(1);
	}
	f1=dlsym(handle,"show");
	if((error=dlerror())!=NULL)
	{
		fprintf(stderr,"%s\n",error);
		exit(1);
	}
	f2=dlsym(handle,"max");
	if((error=dlerror())!=NULL)
	{
		fprintf(stderr,"%s\n",error);
		exit(1);
	}
	f3=dlsym(handle,"sum");
	if((error=dlerror())!=NULL)
	{
		fprintf(stderr,"%s\n",error);
		exit(1);
	}

	f1(a,5);
	printf("max=%d\n",f2(a,5));
	printf("sum=%d\n",f3(a,5));

	if(dlclose(handle)<0)
	{
		fprintf(stderr,"%s\n",error);
		exit(1);
	}
	return 0;
	
}
