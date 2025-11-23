//CODE TO FIND THE VALUE OF THE POWER

#include<stdio.h>

int main(){
    int n,m,result,i,mul=1;
    printf("Enter a base:");
    scanf("%d",&n);

    printf("Enter a exponent: ");
    scanf("%d",&m);

    for(i=1;i<=m;i++){
        mul = mul*n;
    }
    printf("result =%d",mul);

    return 0;
}