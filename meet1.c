#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printMaxmtgs(int s[], int f[], int n) 
{ 
    int i, j; 
  
    printf ("Following mtgs are selected n : "); 

    i = 0; 
    printf("%d ", i); 
  

    for (j = 1; j < n; j++) 
    { 

      if (s[j] >= f[i]) 
      { 
          printf ("%d ", j); 
          i = j; 
      } 
    } 
} 

int main() 
{ 
    int s[10] , f[10] ; 
	for (int i=0 ; i<10 ; i++)
	{	s[i] = rand()%20;
		f[i] = rand()%20;
	}
    int n = sizeof(s)/sizeof(s[0]); 
    printMaxmtgs(s, f, n); 
    return 0; 
} 




