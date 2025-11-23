// PROGRAM TO FIND NUMBER OF DIGITS IN NUMBER AND THEIR SUM

#include<stdio.h>

int main(){
    int n,sum=0,count,rem;
    printf("Enter a number:");
    scanf("%d",&n);

    do{
        rem = n%10;
        sum = sum +rem;
        count++;
        n/=10;

    }while(n>0);
    printf("Sum of the all digits is %d",sum);
    printf("\nNumber of digits are %d",count);
    return 0;
}