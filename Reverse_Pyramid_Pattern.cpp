#include<stdio.h>
 int main() 
 {
	int i, j, k,l;
	printf("Enter the Number of Rows= ");
	scanf("%d", &l);
	for (i=1;i<=l;i++) 
	{ for (j=i;j<l;j++)
	 {  printf(" ");
		}
		for (k=1;k<(i*2);k++) 
		{
			printf("*");
		}
		printf("\n");
	}
	for (i=4;i>=1;i--) 
	{ for (j=l;j>i;j--) 
	   {  printf(" ");
		}
		for (k=1;k<(i*2);k++) 
		{  printf("*");
		}
		printf("\n");
	}
	return 0;
}

