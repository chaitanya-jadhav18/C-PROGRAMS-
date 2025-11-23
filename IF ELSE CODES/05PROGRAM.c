// write a program to find maximam of two no 

#include<stdio.h>

int main(){
    int a,b;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("\nEnter a number:");
    scanf("%d",&b);

    if(a>b){
        printf("%d is greater than %d",a,b);
    
    }
    else if(b>a){
        printf("%d is greater than %d",b,a);

    }
    else{
        printf("Both no are equal");
    }

    return 0 ;



}