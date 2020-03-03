#include <stdlib.h> 
#include <stdio.h> 
#include <time.h>

void insertsort(int arr[], int n) 
{	int i, key, j; 
	for (i = 1; i < n; i++) 
	{	key = arr[i]; 
		j = i - 1; 
		while (j >= 0 && arr[j] > key) 
		{	arr[j + 1] = arr[j]; 
			j = j - 1; 
		} 
		arr[j + 1] = key; 
	} 
} 

void print(int arr[], int n) 
{	int i; 
	for (i = 0; i < n; i++) 
	printf("%d ", arr[i]); 
	printf("\n"); 
} 

int main() 
{	int arr[10] , n = 10 ; clock_t s,e ; 
	for (int i=0 ; i<10 ; i++)
	{	arr[i] = rand()%101;
	}
	s = clock();
	insertsort(arr, n);
	e = clock();
	printf("Time taken is %f\n",(double)(e-s)/CLOCKS_PER_SEC);
	print(arr, n); 
	return 0; 
} 
