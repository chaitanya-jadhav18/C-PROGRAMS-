// program to check entered value is alphbet or digit or special character

#include<stdio.h>

int main(){
    char value;
    printf("Enter a value:");
    scanf("%c",&value);

    if((value>='A' && value<='Z')||(value>='a' && value<='z') ){
        printf("%c is an alphabet",value);
    }
    else if(value>='0' && value<='9'){
        printf("%c is a digit",value);

    }
    else{
        printf("%c is a special character",value);

    }
    return 0;


}