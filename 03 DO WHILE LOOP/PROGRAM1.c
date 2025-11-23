// program to find armstrong no

#include<stdio.h>

int main(){
    int n,remainder,sum=0,temp;

    printf("Enter a number:");
    scanf("%d",&n);

    temp = n;

    do{
        remainder = n%10;
        sum = sum + (remainder*remainder*remainder);
        n = n/10;
    }while(n>0);
    if(sum == temp){
        printf("%d is a armstrong no",temp);

    }
    else{
        printf("%d is not a armstrong no",temp);

    }

    return 0;
}