#include <stdio.h>   
int main()  
{    int i, j,k, m,n; 
	printf("Enter the NUmber of Rows= ");
	scanf("%d", &n);
     for ( i = 1; i <= n; i++)  
    {  for ( j = 1; j <= n-i; j++)  
        { printf (" ");   
        }   
        for ( k = 1; k <= i; k++)  
        { printf ("%d", k ); 
        }  
        for (m = i-1; m >=1; m--)  
        { printf("%d", m );
        }  
       printf ("\n");  
    }  
}  

