#include <stdio.h>
int main(int argc,char *argv[],char *env[])
{	
	entern char **environ;
	int i =0;

	int o=0;
	for(i;env[i];i++)
	{
		printf("%s\n",env[i]);
	}
	
	for(o;environ[o];o++)
	{
		printf("%s\n",environ[o]);	
	}

	
	
	return 0;
}
