// program to write the day of week

#include <stdio.h>

int main(){
    int day;
    printf("Enter day no as:");
    scanf("%d",&day);

    switch(day){
        case 1 : printf("\nMonday");
        break;
        case 2 : printf("\nTuesday");
        break;
        case 3 : printf("\nWensday");
        break;
        case 4 : printf("\nThrusday");
        break;
        case 5 : printf("\nFriday");
        break;
        case 6 : printf("\nSaturday");
        break;
        case 7 : printf("\nSunday");
        break;

        default: printf("enter no between 1-7");

return 0;
        

    
}
}