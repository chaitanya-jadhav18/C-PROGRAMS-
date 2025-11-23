// program to find factorial of given no

#include<stdio.h>

int main(){
    int fact = 1,n,temp;

    printf("Enter a number:");
    scanf("%d",&n);

    do{
        fact = fact*n;
        n--;

    }while(n>0);

    printf("factorial is %d",fact);
    return 0;
}