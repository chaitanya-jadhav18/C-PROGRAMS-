// write program to find no is perfect or not

#include<stdio.h>

int main(){
    int n,sum=0,i=1;

    printf("Enter a number:");
    scanf("%d",&n);

    do{
        if(n%i==0){
            sum = sum+i;
        }
        i++;

    }while(i<n);
    if(n==sum){
        printf("%d is a perfect no ",n);
    }
    else{
        printf("%d is not perfect no",n);
    }

    return 0;
}