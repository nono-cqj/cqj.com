#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<string.h>
#include<errno.h>
#include<sys/types.h>
#include<semaphore.h>

#define LOOP 10000000
#define NUM 4
#define NT 100

#define WRITER_FIRST
