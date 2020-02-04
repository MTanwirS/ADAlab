#include <stdio.h>

int main()
{   int m, n, i, r, gcd ;
    printf("Enter two numbers : ") ;
    scanf("%d %d", &m, &n) ;
    printf("\nEnter Choice 1. Middle school\n 2. Euclidean\n 3. Continuous Subtraction\n 4. Consecutive Integer"); ;
    scanf ("%d",&i);
    switch (i)
    {   case 1 : {  if ( n==0 || m==0 )
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
		    break ;
		 }
        case 2 : {  if (n>m)
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
		  	break ;
                 }
        case 3 : {   while (m!=n)
                    {   if (m>n)
                        {   m = m-n ;
                        }
                        else
                        {   n = n-m ;
                        }
                    }
                    printf("\nGCD is %d",m) ;
		    break;
                 }
        case 4 : {   if (m>n)
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
		    break ;
                 }
        default :{ printf("Invalid option");
                 }
    }
	return 0;
}
