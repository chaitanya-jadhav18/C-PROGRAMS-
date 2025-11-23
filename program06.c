// program to find enter no is perfect number or not
// a number is perfect when sum of its divisor excludig itself is equal to that no

#include<stdio.h>

int main(){
    int n,sum=0,i=1;
    printf("Enter a number: ");
    scanf("%d",&n);

    while(i<n){
        if(n%i==0){
            sum = sum + i;
        }
        i++;
    }
    if(sum==n){
        printf("%d is a perfect number",n);

    }else{
        printf("%dEnter no is not a perfect number",n);
    }
    return 0;
}