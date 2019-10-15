#include "head.h"
void QuickSort(int array[], int left, int right)
{
	if (left >= right)
		return;
	int i, j;
	int tmp;
	i = left;
	j = right;
 
	while (i < j)
	{
		while (array[j]>=array[left] && i<j)
			j--;
		while (array[i]<=array[left] && i<j)
			i++;
 
		tmp = array[i];
		array[i] = array[j];
		array[j] = tmp;
	}
	
	tmp = array[left];
	array[left] = array[i];
	array[i] = tmp;
 
	QuickSort(array, left, i-1);
	QuickSort(array, i+1, right);
}
