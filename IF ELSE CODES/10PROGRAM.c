// Write a C program to input week number and print week day. 
#include<stdio.h>

int main(){
    int a;
    printf("Enter a no between 1 to 7 :");
    scanf("%d",&a);

    if(a==1){
        printf("its Monday");

    }
    else if(a==2){
        printf("its Tuesday");

    }
    else if(a==3){
        printf("its Wensday");

    }
    else if(a==4){
        printf("its Thursday");

    }
    else if(a==5){
        printf("its Friday");

    }
    else if(a==6){
        printf("its Saturday");

    }
    else if(a==7){
        printf("its Sunday");

    }

    else{
        printf("enter a valid no");

    }

    return 0;

}