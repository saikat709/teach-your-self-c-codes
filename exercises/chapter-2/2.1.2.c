#include<stdio.h>
int main ( ) {
    printf("Enter a number\n");
    int num;
    scanf("%d",&num);
    if(num%2==0){
        printf("The number is: Even\n");
    }
    if(num%2 != 0){
        printf("The number is: Odd\n");
    }

    return 0;
}
