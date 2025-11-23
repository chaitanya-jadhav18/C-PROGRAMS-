// program to check that given no is odd or even 

#include <stdio.h>

int main(){
    int num;
    printf("Enter the num: ");
    scanf("%d",&num);

    if(num%2==0 && num!=0){
        printf("%d is a even no",num);
    }
    else if(num <= 0){
        printf("%d is not valid",num);


    }
    else{
        printf("Enter no is odd");
    }
    return 0;
}