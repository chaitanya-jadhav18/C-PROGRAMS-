//  progrnm to reverse the entred no
#include<stdio.h>

int main(){
    int n,rem,rev=0,temp;
    printf("Enter a number:");
    scanf("%d",&n);

    temp = n;

    for(;n>0;){
        rem = n%10;
        rev = rev*10+rem;
        n/=10;


    }
    printf("%d is the reverse of the %d",rev,temp);
    return 0;
}