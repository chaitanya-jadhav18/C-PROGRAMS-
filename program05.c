// code to find the armstrong no

#include<stdio.h>

int main(){
    int n,temp,sum=0,remainder;
    printf("Enter a number:");
    scanf("%d",&n);

    temp = n;

    while(n>0){
        remainder = n%10;
        sum = sum+(remainder*remainder*remainder);
        n/=10;

    }
    if(sum==temp){
        printf("Enter no is armstrong no");
    }
    else{
        printf("Enter no is not a armstronhg no");
    }
    return 0;

}