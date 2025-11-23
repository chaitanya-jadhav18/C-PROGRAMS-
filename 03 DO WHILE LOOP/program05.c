// code to find the power of the number

#include<stdio.h>

int main(){
    int n,m,mul=1,i=1;
    printf("Enter base:");
    scanf("%d",&n);

    printf("Enter exponent:");
    scanf("%d",&m);

    do{
        mul = mul*n;
        i++;

    }while(i<=m);

    printf("result= %d",mul);

    return 0;
}