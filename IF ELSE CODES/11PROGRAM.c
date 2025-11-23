// Write a C program to input month number and print number of days in that month. 

#include<stdio.h>

int main(){
    int month;
    
    printf("Enter the no. of month: ");
    scanf("%d",&month);

    if(month == 1){
        printf("its january it has 31 days");
    }

    else if(month == 2){
        printf("its february it has 28 days");
    }

    else if(month == 3){
        printf("its march it has 31 days");
    }

    else if(month == 4){
        printf("its april it has 30 days");
    }

    else if(month == 5){
        printf("its may it has 31 days");
    }

    else if(month == 6){
        printf("its june it has 30 days");
    }

    else if(month == 7){
        printf("its july it has 31 days");
    }

    else if(month == 8){
        printf("its august it has 30 days");
    }

    else if(month == 9){
        printf("its september it has 31 days");
    }

    else if(month == 10){
        printf("its octomber it has 30 days");
    }

    else if(month == 11){
        printf("its november it has 31 days");
    }

    else if(month == 12){
        printf("its decmber it has 30 days");
    }
    else{
        printf("Please enter a valid no rangging form 1-12");
    }

    return 0;


}

