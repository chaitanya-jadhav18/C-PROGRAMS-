// program to print star pattern

#include<stdio.h>

int main (){
    int i,m,n;
    printf("Enter no of rows:");
    scanf("%d",&i);

    for(m=1;m<=i;m++){

        for(n=1;n<=m;n++){                  // in for loop when the loop terminate the counter will retain last valid value
            printf("\t*");
        }
        printf("\n");

    }
    return 0;
}