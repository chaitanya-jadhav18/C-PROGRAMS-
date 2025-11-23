/* Given the length and breadth of a rectangle, write a program to find 
whether the area of the rectangle is greater than its perimeter. For 
example, the area of the rectangle with length = 5 and breadth = 4 is 
greater than its perimeter.*/

#include<stdio.h>

int main(){
    int  l,b,p,a;

    printf("Enter lenght of a rectangle: ");
    scanf("%d",&l);
    
    printf("Enter breadth of a rectangle: ");
    scanf("%d",&b);

    a = l*b;
    p = 2*(l+b);

    if(a>p){
        printf("Area of the rectangle is greater than its permeter");

    }
    else if(a==p){
        printf("perimeter and area are equal");
    }
    else{
        printf("perimeter is greater than area");
    }

    return 0;




 

}