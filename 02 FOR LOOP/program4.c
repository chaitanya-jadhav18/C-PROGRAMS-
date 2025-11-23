// program to find the sum and no of digits in number

#include<stdio.h>

int main(){
    int n,sum,rem,count;

    printf("Enter a number:");
    scanf("%d",&n);

    for(sum=0;n>0;count++){
        rem = n%10;
        sum = sum + rem ;
        n/=10;
    }
    printf("Sum of digits is %d",sum);
    printf("\nNumber of digits are %d",count);

    return 0;
}