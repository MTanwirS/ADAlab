#include <stdio.h>
#include <time.h>

int binsrch(int arr[], int l, int h, int x) 
{	if (h >= l) 
	{	int mid = l + (h - l)/2;
		if (arr[mid] == x)  
			return mid; 
		else if (arr[mid] > x) 
			return binsrch(arr, l, mid-1, x);
		else
			return binsrch(arr, mid+1, h, x); 
   }
   return -1; 
}
 
int main() 
{	int arr[10] = {2, 3, 4, 10, 63, 20, 35, 40}, n = 8;
	int key = 10;
	clock_t start, end ;
	start = clock();
	int result = binsrch(arr, 0, n-1, key);
	end = clock();
	if(result == -1)
		printf("Element is not found in array\n");
	else
		printf("Element is present at %d\n", result+1);
	printf("Time taken is %f\n",(double)(end-start)/CLOCKS_PER_SEC);
	return 0; 
} 
