#include<stdio.h>
int main ( ) {
    printf("Enter a integer number\n");
    int num;
    scanf("%d",&num);

    if(num<0){
        printf("Number is: Negative \n");
    }
    else{
        printf("Number is: Positive\n");
    }


    return 0;
}