#include <stdio.h>

int main() 
{	int m, n, s ;
    printf("Enter two numbers : ") ;
    scanf("%d %d", &m, &n) ;
       if (m>n)
        {   s = n ;
        }
        else
        {   s = m ;
        }
    while (s>0)
    {   if (m%s == 0 && n%s == 0)
        {   break ;
        }
        else
        {   s-- ;
        }
    }
    printf("\nGCD is %d",s) ;
	return 0;
}

