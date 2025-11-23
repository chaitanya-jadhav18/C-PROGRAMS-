//  Write a C program to check whether a number is negative, positive or zero.

#include<stdio.h>

int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);

    if(a==0){
        printf("Enter no is 0");
    }
    else if(a>0){
        printf("%d is a positive no ",a);

    }
    else{
        printf("%d is a negative no ",a);
    }

    return 0;

    

}