// Build a C program to add N natural numbers.

#include<stdio.h>

int main(){
    int a,sum = 0,n = 1;
    printf("enter a no : ");
    scanf("%d",&a);

    while(n<=a){
        sum = sum + n;
        n++;
    }
    printf("%d is the sum of n natudral no",sum);
    return 0;
}