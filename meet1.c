#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printMaxmtgs(int s[], int f[], int n) 
{ 
    int i, j; 
  
    printf ("Following mtgs are selected n : "); 

    i = 0; 
    printf("%d ", i); 
  

    for (j = 1; j < n; j++) 
    { 

      if (s[j] >= f[i]) 
      { 
          printf ("%d ", j); 
          i = j; 
      } 
    } 
} 

void insertsort(int arr[], int arr2[], int n) 
{	int i, key, j; 
	for (i = 1; i < n; i++) 
	{	key = arr[i]; 
		j = i - 1; 
		while (j >= 0 && arr[j] > key) 
		{	arr[j + 1] = arr[j];
			arr2[j] = arr2[j] + arr2[j+1] ;
			arr2[j+1] = arr2[j] - arr2[j+1] ;
			arr2[j] = arr2[j] - arr2[j+1] ;
			j = j - 1; 
		} 
		arr[j + 1] = key; 
	} 
} 

void print(int arr[],int arr2[], int n) 
{	int i; 
	for (i = 0; i < n; i++) 
	{ printf("{%d,%d} ", arr2[i], arr[i]);
	} 
	printf("\n"); 
} 


int main() 
{ 
    int s[10] , f[10] ; 
	for (int i=0 ; i<10 ; i++)
	{	s[i] = rand()%20;
		f[i] = rand()%20;
	}
    int n = sizeof(s)/sizeof(s[0]);
	insertsort(f, s, n); 
	print(f,s,n);
    printMaxmtgs(s, f, n); 
    return 0; 
} 
