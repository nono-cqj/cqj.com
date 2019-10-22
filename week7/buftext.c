#include <stdio.h>
#include <stdlib.h>
#define SIZE 512
int main(int argc,char *argv[])
{
	char buf[SIZE];
	if(setvbuf(stdin, buf, _IONBF, SIZE) !=0)
		{
			perror("1.stdin input fail\n");
			return 1;
		}
	printf("stdin input success\n");
	printf("stdin type is:");
	if(stdin->_flags & _IO_UNBUFFERED)
		{
			printf("no buffer\n");
		}
	else if(stdin->_flags & _IO_LINE_BUF)
		{
			printf("yes buffer\n");
		}
	else
		{
			printf("all buffer\n");
		}
	printf("buffer size is: %ld\n",stdin->_IO_buf_end - stdin->_IO_buf_base);
	
	printf("file string is:%d\n",fileno(stdin));
	if(setvbuf(stdin,buf,_IOFBF,SIZE)!=0)
		{
			printf("all buffer is fail!\n");
			return 2;
		}
	printf("modify stdin is success\n");
	printf("stdin type is");
	if(stdin->_flags & _IO_UNBUFFERED)
		{			
			printf("no buffer\n");
		}
	else if(stdin->_flags & _IO_LINE_BUF)
		{
			printf("yes buffer\n");
		}
	else
		{
			printf("all buffer\n");
		}	

	printf("buffer size is: %ld\n",stdin->_IO_buf_end - stdin->_IO_buf_base);
	
	printf("file string is:%d\n",fileno(stdin));
	return 0;
}
