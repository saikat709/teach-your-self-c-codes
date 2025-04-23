#include<stdio.h>
int main ( ) {
    int num1,num2;
    printf("Enter first  number\n");
    scanf("%d",&num1);
    printf("Enter second  number\n");
    scanf("%d",&num2);
    if(num2==0){
        printf("Cann't divisor by zero\n");
    }
    else{
        printf("Answer is: %d\n",num1/num2);
    }


    return 0;
}