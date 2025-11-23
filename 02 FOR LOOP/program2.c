// program to find number is perfect or not

#include<stdio.h>

int main(){
    int i=1,sum=0,n;
    printf("Enter a number:"),
    scanf("%d",&n);

    for(;i<n;i++){
        if(n%i==0){
            sum = sum+i;
        }
    }
    if(sum==n){
        printf("%d is a perfect no ",n);
    }else{
        printf("%d is perfect number",n);
    }

    return 0 ;

}