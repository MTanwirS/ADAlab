#include<stdio.h>

int main ()
{	int low=0, high=10, key, mid, arr[10];
	printf("Enter array\n");
	for (int i = 0 ; i<10 ; i++)
	{	scanf("%d",&arr[i]);
	}
	printf("Enter key\n");
	scanf("%d",&key);
	while (low <= high)
	{	mid = (low + high) / 2; 
		if (arr[mid] == key) 
		{	printf("Key %d found at %d\n",key,mid);
			return 0 ;
		}
		if (arr[mid] < key) 
		{	low = mid + 1;
		}
		else
		{	high = mid - 1; 
		}  
		printf("Key not found");
		return 0;
	}
}

