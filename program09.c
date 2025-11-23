// PROGRAM TO FIND THE POWER OF THE NUMBER

#include<stdio.h>
int main(){
    int n,m,mul=1,i=1;
    printf("Enter Base:");
    scanf("%d",&n);

    printf("Enter exponent:");
    scanf("%d",&m);

    while(i<=m){
        mul = mul*n;
        i++;

    }
    printf("Enter result=%d",mul);
    return 0;
    

}