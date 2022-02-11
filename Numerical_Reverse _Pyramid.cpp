#include<stdio.h>
int main()
{
    int r,c,sp,a;
    printf("Enter the Number of Rows= ");
    scanf("%d", &a);
    for(r=1; r<=a; r++)
        {
            for(sp=a-r; sp>=1; sp--)
                printf(" ");
            for(c=1; c<=r; c++)
                printf("%d",c);
            for(c=r-1; c>=1; c--)
                printf("%d",c);
            printf("\n");
        }
    for(r=1; r<=a; r++)
        {
            for(sp=r; sp>=1; sp--)
                printf(" ");
            for(c=1; c<=(a-r); c++)
                printf("%d",c);
            for(c=a-r-1; c>=1; c--)
                printf("%d",c);
            printf("\n");
        }
}

