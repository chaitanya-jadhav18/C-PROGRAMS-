// program to find given no is armstrong no or not

#include<stdio.h>

int main(){
    int n,temp,reminder,sum = 0;

    printf("Enter a number:");
    scanf("%d",&n);
    
    temp = n;

    for(;n>0;){
        reminder = n%10;
        sum = sum+(reminder*reminder*reminder);
        n = n/10;

    }
    if(sum == temp){ 
        printf("%d is a armstrong no",temp);
    }
    else{
        printf("%d is nor a addrmstrong no",temp);
    
    }
    return 0;
   
}