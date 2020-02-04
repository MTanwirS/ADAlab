#include <stdio.h>

int main() 
{   int m, n, r ;
    printf("Enter two numbers : ") ;
    scanf("%d %d", &m, &n) ;
    if (n>m)
	    {   r = m ;
	        m = n ;
	        n = r ;
	    }
	while (n != 0)
	{   r = m % n ;
	if (r == 0)
	{   break ;
	}
	    m = n ;
	    n = r ;
	}
	printf("\nGCD is %d",n) ;
	return 0;
}

