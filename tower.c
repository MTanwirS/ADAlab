#include <stdio.h>
void TOH(int n, char s, char d, char a)
{	if (n == 1) 
	{	printf("Move disk %d from rod %c to rod %c\n",n, s, d); 
		return; 
	}
	TOH(n-1, s, a, d); 
	printf("Move disk %d from rod %c to rod %c\n", n, s, d); 
	TOH(n-1, a, d, s); 
}
  
int main() 
{	int n;
	printf("Enter number of disks\n");
	scanf("%d",&n); 
	TOH(n, 'A', 'C', 'B'); 
	return 0; 
} 
