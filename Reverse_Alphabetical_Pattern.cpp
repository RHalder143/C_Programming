#include<stdio.h>
int main()
{
 int ch=64;
 int i,j,k;
 printf("Enter the Number of Rows= ");
 scanf("%d", &k);

for(i=1;i<=k;i++)
{   for(j=1;j<=k-i;j++)
    {  
	printf(" ");
	}
	for(j=1;j<=i;j++)
	{
		printf("%c",(ch+j));
	}
	for(j=i-1;j>=1;j--)
	{
		printf("%c",(ch+j));
	}
	printf("\n");
}
for(i=1;i<=k;i++)
{  
   for(j=i;j>=1;j--)
      printf(" ");
   for(j=1;j<=(k-i);j++)
   {
      printf("%c",(ch+j));
   }
   for(j=k-i;j>=1;j--)
      printf("%c",(ch+j));
    printf("\n");
}
}

