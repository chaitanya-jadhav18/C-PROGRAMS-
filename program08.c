// writee a program to count no of the digits and their sum

#include<stdio.h>

int main(){
    int n,sum=0,count,rem;
    printf("Enter a number:");
    scanf("%d",&n);


    while(n>0){
        rem = n%10;
        sum = sum+rem;
        count++;
        n/=10;
    }
    printf("sum of the digits is %d",sum);
    printf("\nNumber of digits in number are %d",count);
    return 0;

}