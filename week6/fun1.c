#include "mylib.h"

int max(int *a,int n){
	int m=a[0],q,i;
	for(i=0;i<n-1;i++){
		q=a[i+1];
		if(m<q)
			{
				m=q;			
			}
		
		}
	return m;
}

int sum(int *a,int n){
	int s=0,i;
	for(i=0;i<n;i++)
		s+=a[i];
	return s;
}
