#include <stdio.h>
int main() 
{
   int i, j, k;
   printf("Enter the Number of rows= ");
   scanf("%d", &k);
   
   for (i = 1; i <=k; ++i) 
   {   for (j = 1; j <= i; ++j)
	   {  printf("* ");
      }   printf("\n");
   }   return 0;
}



