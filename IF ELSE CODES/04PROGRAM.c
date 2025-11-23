// to calculate the grocc salary of the employe
#include<stdio.h>

int main(){
    float bs,gs,hra,da;
    printf("Enter your base salary:");
    scanf("%f",&bs);

    if(bs<1500){
        hra = bs*(0.10),
        da = bs*(0.98),
        gs = hra+da+bs;
        printf("Total salary is %f",gs);
    
    }
    else if(bs>=1500){
        hra = 500,
        da = bs*(0.98);
        gs = hra+da+bs;
        printf("Total salary is %0.2f",gs);
    }

    return 0;




}