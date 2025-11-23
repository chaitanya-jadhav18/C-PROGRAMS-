// program to find factorial of the number

#include<stdio.h>

int main(){
    int n,fact = 1,temp;

    printf("Enter a number:");
    scanf("%d",&n);

    temp=n;

    for(;n>0;n--){
        fact = fact*n;

    } 
    printf("%d is a factorail of %d",fact,temp);
    
    return 0;

   
}