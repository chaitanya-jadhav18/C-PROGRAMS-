// simple calculator using switch statemaent

#include<stdio.h>

int main(){
    int m,n,sum,mul,sub,ch;
    float div;
    printf("Enter no 1:");
    scanf("%d",&n);
    printf("\nEnter no 2:");
    scanf("%d",&m);
    printf("\nChoose accordigly \n1 for addition \n2 for substraction \n3 for multiplication \n4 for division ");
    printf("\nEnter your choice");
    scanf("%d",&ch);

    switch(ch){
        case 1: sum = n+m; 
        printf("sum is %d",sum);
        break;

        case 2: sub = n-m;
        printf("substraction is %d",sub);
        break;

        case 3: mul = n*m;
        printf("Multiplication is %d",mul);
        break;

        case 4: div = (float)n/m;
        printf("division is %0.2f",div);
        break;

        default:
        printf("Please enter valid number");


    }
    return 0;



}