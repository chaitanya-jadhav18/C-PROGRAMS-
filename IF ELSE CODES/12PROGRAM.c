/*Write a program to check whether a triangle is valid or not, if three angles 
of the triangle are entered through the keyboard. A triangle is valid if the 
sum of all the three angles is equal to 180 degrees.*/

#include<stdio.h>

int main(){
    int a,b,c;
    int sum;

    printf("Enter angle a of traingle: ");
    scanf("%d",&a);
    
    printf("Enter angle b of traingle: ");
    scanf("%d",&b);

    printf("Enter angle c of traingle: ");
    scanf("%d",&c);

    sum = a+b+c;

    if(sum==180){
        printf("the traingle is valid");
    }
    else{
        printf("traingle is not valid");
    }
    return 0;
}