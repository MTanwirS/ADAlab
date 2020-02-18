#include <stdio.h>
#include <time.h>

int findPivot(int arr[], int low, int high) 
{	int mid = (low + high)/2;
	if (mid < high && arr[mid] > arr[mid + 1]) 
		return mid; 
	if (mid > low && arr[mid] < arr[mid - 1]) 
		return (mid-1); 
	if (arr[low] >= arr[mid]) 
		return findPivot(arr, low, mid-1);
	else
		return findPivot(arr, mid + 1, high); 
}

int binarySearch(int arr[], int low, int high, int key) 
{ 
   if (high < low) 
       return -1; 
   int mid = (low + high)/2;  /*low + (high - low)/2;*/
   if (key == arr[mid]) 
       return mid; 
   if (key > arr[mid]) 
       return binarySearch(arr, (mid + 1), high, key); 
   return binarySearch(arr, low, (mid -1), key); 
} 

int main() 
{	int arr[10] = {10, 63, 20, 35, 40, 2, 3, 5}, n = 8, result=-1, result1=-1;
	int key = 10;
	clock_t start, end ;
	
	start = clock();
	int pivot = findPivot(arr, 0, n-1);
	if (pivot == -1) 
		result = binarySearch(arr, 0, n-1, key);
	else if (arr[pivot] == key) 
		result = pivot;
    else if (arr[0] <= key) 
	{	result = binarySearch(arr, 0, pivot-1, key); 
		result1 = binarySearch(arr, pivot+1, n-1, key);
	}
	end = clock();
	
	if(result == -1 && result1 == -1)
		printf("Element is not found in array\n");
	else if (result == -1)
	{	printf("Element is present at %d\n", result1+1);
	}
	else if (result1 == -1)
	{	printf("Element is present at %d\n", result+1);
	}
	printf("Time taken is %f \n",(double)(end-start)/CLOCKS_PER_SEC);
	return 0; 
} 
