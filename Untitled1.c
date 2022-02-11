#include<stdio.h>
int main()
{
	int base,gross;
	printf("Enter the Base Salary= ");
	scanf("%d", &base);
	gross=0.21*base+base;
	printf("The gross Salary is= %d", gross);
	return 0;
}
