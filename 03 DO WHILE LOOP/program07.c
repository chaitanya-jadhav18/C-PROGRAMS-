//  progrnm to reverse the entred no

#include<stdio.h>

int main(){
    int n,rev=0,rem,temp;
    printf("Enter a number:");
    scanf("%d",&n);

    temp=n;

    do{
        rem = n%10;
        rev = rev*10+rem;
        n/=10;

    }while(n>0);
    printf("%d is the reverse of %d",rev,temp);
    return 0;


}