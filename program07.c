// program to find the factorial of number

#include<stdio.h>

int main(){
    int n,fact=1,temp;

    printf("Enter a number:");
    scanf("%d",&n);

    temp=n;

    if(n==0){
        printf("Factorial of 0 is 1");
    }

    while(n>0){
        fact = fact*n;
        n--;
    }
    printf("Factorial of the %d is %d",temp,fact);
    return 0;



}