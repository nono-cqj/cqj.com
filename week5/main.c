#include "head.h"

int main(int argc, const char *argv[])
{
	int i;
	clock_t start, end;
	int *a, *b, *c;
	a = (int *)malloc(sizeof(int)*LEN);
	if (a == NULL)
	{
		perror("Create a failed");
		return EXIT_FAILURE;
	}
	
 
	srand(time(NULL));
	for (i = 0; i<LEN; i++)
	{
		a[i] = rand() % 100;
	}
 for(int q=0;q<LEN-1;q++){
	printf("%d ",a[q]);
 }
	start = clock();
	QuickSort(a, 0, LEN-1);
	end = clock();
	printf("\nQuickSort end - start = %lf seconds\n", (double)(end-start)/CLOCKS_PER_SEC);
 
 for(int q=0;q<LEN-1;q++){
	printf("%d ",a[q]);
 }
	
	return 0;
}
