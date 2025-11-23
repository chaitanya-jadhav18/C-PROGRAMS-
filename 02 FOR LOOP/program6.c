// program to add N no of numbers

#include<stdio.h>

int main(){
    int n,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);

    for(;n>0;n--){
        sum = sum + n;

    }
    printf("%d is the sum of N natural numbers",sum);
    return 0;
}