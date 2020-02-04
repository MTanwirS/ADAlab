#include <stdio.h>

int main()
{
    int m, n, i, gcd ;
    printf("Enter two numbers : ") ;
    scanf("%d %d", &m, &n) ;
    if ( n==0 || m==0 )
    {   gcd = 0 ;
    }
    else
    {   for(i = 1; i <= m && i <= n; i++)
        {  if (m%i == 0 && n% i== 0)
            {   gcd = i ;
            }
        }
    }
    printf("\nGCD of %d and %d is %d", m, n, gcd) ;
    return 0 ;
}