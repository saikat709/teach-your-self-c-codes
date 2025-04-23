#include <stdio.h>

int main( ) {
    int num1,num2;
    char ch;
    printf("Enter A,S,M,D for add, subtract,multipiy,or divide:\n");
    ch=getchar();
    printf("Enter 1st number:");
    scanf("%d",&num1);
    printf("Enter 2nd number:");
    scanf("%d",&num2);
    
    if(ch=='A') printf("%d",num1+num2);
    if(ch=='S') printf("%d",num1-num2);
    if(ch=='M') printf("%d",num1*num2);
    if(ch=='D' && num2 != 0) printf("%d",num1/num2);

    return 0;
}