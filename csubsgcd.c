#include <stdio.h>

int main() 
{   int m, n, i, gcd ;
    printf("Enter two numbers : ") ;
    scanf("%d %d", &m, &n) ;
    while (m!=n)
    {   if (m>n)
        {   m = m-n ;
        }
        else
        {   n = n-m ;
        }
    }
    printf("\nGCD is %d",m) ;
	return 0;
}

