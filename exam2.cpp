#include<stdio.h> 
#include<conio.h> 
int main() 
{ 
int i; 
printf("The numbers divisible by 3 are: "); 
for(i=1; i<=100; i++) 
{ 
if(i%3==0) 
{ 
printf("%d\n", i); 
} 
} 
} 
