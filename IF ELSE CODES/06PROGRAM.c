// write a code to find maximam of 3 numbers

#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter no 1 = ");
    scanf("%d",&a);
    
    printf("Enter no 2 = ");
    scanf("%d",&b);

    printf("Enter no 3 = ");
    scanf("%d",&c);

    if(a==b && b==c){
        printf("All no are equal");
    }

    else if(a>b && a>c){
        printf("%d is maximum of three no entered",a);

    }
    else if(b>a && b>c){
        printf("%d is maximum of three no entered",b);

    }
    else{
        printf("%d is maximum of three no entered",c);
    }
    return 0;

}

