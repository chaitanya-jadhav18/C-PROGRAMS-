// program to add N no of numbers

#include<stdio.h>

int main(){
    int n,sum=0;
    printf("enter a number:");
    scanf("%d",&n);

    while(n>0){
        sum = sum+n;
        n--;

    }
    printf("%d is the sum of the n natural no",sum);
    return 0;
}