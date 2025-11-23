// program to write the  no of digits in nmuber

#include<stdio.h>

int main(){
    int n,b,count=0;
    printf("Enter a number: ");
    scanf("%d",& n);

    while(n>0){
        n = n/10;
        count++;
    }

    printf("no of digits = %d ",count);
    return 0;

}