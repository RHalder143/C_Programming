#include<stdio.h>
int main(){
    
    int n;
    printf("Enter a number:\t");
    scanf("%d",&n);
    int flag=0;
    int temp=1;
    int factors[2];
    for(int i=2; i<n; i++){
        if(n%i==0){
            flag++;
            factors[temp]=i;
            temp++;
        }
        if(flag==2){
            break;
        }
    }
    if(flag==0){
        printf("The number is prime.\n");
    }
    else{
        printf("The number is non-prime.\nTwo factors of the number are %d and %d\n",factors[1],factors[2]);
    }
}
