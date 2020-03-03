#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertsort(int arr[5][2], int n, int m) 
{	int i, key, j; 
	for (i = 0; i < n; i++) 
	{	key = arr[i][1]; 
		j = i - 1; 
		while (j >= 0 && arr[j][1] > key) 
		{	arr[j + 1][1] = arr[j][1];
			{ arr[j + 1][0] = arr[j + 1][0] + arr[j][0];
			  arr[j][0] = arr[j + 1][0] - arr[j][0];
			  arr[j + 1][0] = arr[j + 1][0] - arr[j][0];
			}
			j = j - 1; 
		} 
		arr[j + 1][1] = key; 
	}
}

void print(int arr[5][2], int n, int m) 
{	int i,j; 
	for (i = 0; i < n; i++)
	{	for (j = 0; j < m; i++)
		{ 
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	} 
} 

int main()
{	int s[5] , f[5] , i , n=5 , mtgs[5][2] ;
	for (i=0 ; i < n; i++)
	{	s[i] = rand()%20 ;
		f[i] = rand()%20 ;
		mtgs[i][0] = s[i];
		mtgs[i][1] = f[i];
	}

	insertsort(mtgs,5,2);
	print(mtgs,5,2);
	return 0 ;pwd
}


