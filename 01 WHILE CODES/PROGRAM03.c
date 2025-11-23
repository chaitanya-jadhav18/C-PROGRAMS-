//  Build a C program to count even and odd numbers in given range.
#include<stdio.h>

int main(){
    int a,ec=0,oc=0,zc=0,start,end;

    printf("Enter starting no: ");
    scanf("%d",&start);

    printf("Enter ending no: ");
    scanf("%d",&end);


    while(start<=end){
        if(start%2==0){
            ec++;

        }
        else{
            oc++;

        }
        start++;
        
    }
    printf("\nNumber of odd numbers present in given range are %d",oc);
    printf("\nNumber of even numbers present in given range are %d",ec);

    return 0;

}