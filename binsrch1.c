/*Given an array with repeating integers you need to find first occurence,last occurence and count of key in array. Use binary search algorithm that runs in log(n) time. If element is not present print -1 */
#include <stdio.h>
int main ()
{	int low=0, high=10, key, mid, arr[10], i;
	printf("Enter array\n");
	for (i = 0 ; i<10 ; i++)
	{	scanf("%d",&arr[i]);
	}
	printf("Enter key\n");
	scanf("%d",&key);
	while (low <= high)
	{	mid = (low + high) / 2; 
		if (arr[mid] == key) 
		{	printf("Key %d found at %d\n",key,mid);
			i = 1;
			if(arr[mid-i]!=key)
			{	printf("First occurence at %d\n",mid);
			}
			else
			{	while(arr[mid-i]==key)
				{	i++ ;
					printf("Key %d found at %d\n",key,(mid-i));
				}
				printf("First occurence at %d\n",mid-i);
			}
			i = 1;
			if(arr[mid+i]!=key)
			{	printf("Last occurence at %d\n",mid);
			}
			else
			{	while(arr[mid+i]==key)
				{	i++ ;
					printf("Key %d found at %d\n",key,(mid+i));
				}
				printf("Last occurence at %d\n",mid+i);
			}
		}
		if (arr[mid] < key) 
		{	low = mid + 1;
		}
		else
		{	high = mid - 1; 
		}  
		printf("Key not found");
		return -1;
	}
}

