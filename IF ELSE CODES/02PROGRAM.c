// program to check enter alphabet is uppercase or lowercase

#include <stdio.h>

int main(){
    char ch;
    printf("Enter an alphabet:");
    scanf("%c",&ch);

    if(ch>'A' && ch<'Z'){
        printf("%c is a uppercase alphabet",ch);
    }
    else if(ch>'a' && ch<'z'){
        printf("%c is a lowercase alphabet",ch);

    }
    else{
        printf("Invalid input please enter a alphabet");

    }
    return 0;

}