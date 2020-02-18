#include <stdio.h>
#include <time.h>

int linsrch(int arr[], int l, int n, int x) 
{	if (n < l) 
		return -1;
	if (arr[l] == x) 
		return l; 
	if (arr[n] == x) 
		return n; 
	return linsrch(arr, l+1, n-1, x); 
}

int main()
{	int arr[10] = {23, 43, 34, 54, 2, 3}, n = 6;  
	int key = 3; 
	clock_t start, end ;
	start = clock();
	int index = linsrch(arr, 0, n-1, key); 
	end = clock();
	if (index != -1) 
		printf("Element %d is present at %d\n", key, index+1); 
	else
		printf("Element %d is not present\n", key);
	printf("Time taken is %f\n",(double)(end-start)/CLOCKS_PER_SEC);
	return 0; 
} 

